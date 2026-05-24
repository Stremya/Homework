#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
#include <limits>
#include <iomanip>

// Структура данных вместо сырых массивов и указателей
struct Student {
    std::string name;
    std::vector<int> grades;
    double average = 0.0; // Вычисляется один раз и сохраняется для эффективной сортировки
};

// Константы
constexpr size_t TOP_STUDENTS_COUNT = 3;
constexpr int MIN_GRADE = 0;
constexpr int MAX_GRADE = 100;

// Свободная функция с константной ссылкой
double calculateAverage(const std::vector<int>& grades) {
    if (grades.empty()) return 0.0;
    // 3.c. Использование std::accumulate вместо ручного цикла
    double sum = std::accumulate(grades.begin(), grades.end(), 0.0);
    return sum / static_cast<double>(grades.size());
}

// Чтение данных с обработкой ошибок и std::getline
bool readStudents(std::vector<Student>& students) {
    int count;
    std::cout << "Введите количество студентов: ";
    while (!(std::cin >> count) || count <= 0) {
        std::cout << "Ошибка. Введите положительное число: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    // Очистка буфера после cin >> count перед getline
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    for (int i = 0; i < count; ++i) {
        Student s;
        std::cout << "\nИмя студента " << (i + 1) << ": ";
        std::getline(std::cin, s.name);

        if (s.name.empty()) {
            std::cout << "Имя не может быть пустым. Попробуйте снова.\n";
            --i; continue;
        }

        int gradesCount;
        std::cout << "Количество оценок: ";
        while (!(std::cin >> gradesCount) || gradesCount <= 0) {
            std::cout << "Ошибка. Введите количество оценок > 0: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }

        for (int j = 0; j < gradesCount; ++j) {
            int grade;
            std::cout << "Оценка " << (j + 1) << " (" << MIN_GRADE << "-" << MAX_GRADE << "): ";
            while (!(std::cin >> grade) || grade < MIN_GRADE || grade > MAX_GRADE) {
                std::cout << "Ошибка. Введите корректную оценку: ";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            s.grades.push_back(grade);
        }

        // Предварительное вычисление среднего для ускорения сортировки
        s.average = calculateAverage(s.grades);
        students.push_back(std::move(s)); // Избегаем лишнего копирования
    }
    return true;
}

// Вывод ТОП-N студентов
void printTop(const std::vector<Student>& students, size_t topCount) {
    if (students.empty()) {
        std::cout << "\nСписок студентов пуст.\n";
        return;
    }

    // Корректная обработка случая, когда студентов меньше TOP_STUDENTS_COUNT
    size_t actualTop = std::min(students.size(), topCount);
    std::vector<Student> topStudents = students;

    // std::partial_sort эффективнее полной сортировки для получения первых K элементов
    std::partial_sort(topStudents.begin(), topStudents.begin() + actualTop, topStudents.end(),
        [](const Student& a, const Student& b) { return a.average > b.average; });

    std::cout << "\n--- ТОП-" << actualTop << " студентов по среднему баллу ---\n";
    for (size_t i = 0; i < actualTop; ++i) {
        std::cout << i + 1 << ". " << topStudents[i].name
            << " | Средний балл: " << std::fixed << std::setprecision(2) << topStudents[i].average << "\n";
    }
}

// Полный вывод с сортировкой
void printSorted(const std::vector<Student>& students) {
    if (students.empty()) return;

    std::vector<Student> sortedStudents = students;
    // std::sort с лямбда-выражением
    std::sort(sortedStudents.begin(), sortedStudents.end(),
        [](const Student& a, const Student& b) { return a.average > b.average; });

    std::cout << "\n--- Все студенты (по убыванию среднего балла) ---\n";
    for (size_t i = 0; i < sortedStudents.size(); ++i) {
        std::cout << i + 1 << ". " << sortedStudents[i].name
            << " | Средний балл: " << std::fixed << std::setprecision(2) << sortedStudents[i].average << "\n";
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    std::vector<Student> students;

    if (!readStudents(students)) return 1;

    printTop(students, TOP_STUDENTS_COUNT);
    printSorted(students);

    return 0;
}