#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
#include <cctype>
#include <algorithm>
#include <windows.h>
#include "employee.h"

using namespace std;

const string FILE_NAME = "employees.dat";

// Загрузка сотрудников из файла
vector<Employee> loadEmployees() {
    vector<Employee> list;
    ifstream file(FILE_NAME);
    if (!file.is_open()) {
        cout << "Файл '" << FILE_NAME << "' не найден — создадим новый список.\n";
        return list;
    }

    string line;
    while (getline(file, line)) {
        if (line.empty()) continue;
        size_t pos1 = line.find('|');
        size_t pos2 = line.find('|', pos1 + 1);
        size_t pos3 = line.find('|', pos2 + 1);

        if (pos1 == string::npos || pos2 == string::npos || pos3 == string::npos) {
            cerr << "Некорректная строка в файле: " << line << endl;
            continue;
        }

        string surname = line.substr(0, pos1);
        string name = line.substr(pos1 + 1, pos2 - pos1 - 1);
        string patronymic = line.substr(pos2 + 1, pos3 - pos2 - 1);
        int age = stoi(line.substr(pos3 + 1));

        list.emplace_back(surname, name, patronymic, age);
    }
    file.close();
    cout << "Загружено " << list.size() << " сотрудников из файла.\n";
    return list;
}

// Сохранение сотрудников в файл
void saveEmployees(const vector<Employee>& list) {
    ofstream file(FILE_NAME);
    if (!file.is_open()) {
        cerr << "Ошибка: не удалось открыть файл для записи: " << FILE_NAME << endl;
        return;
    }

    for (const auto& emp : list) {
        file << emp.surname << '|' << emp.name << '|'
            << emp.patronymic << '|' << emp.age << '\n';
    }
    file.close();
    cout << "Список сохранён в файл '" << FILE_NAME << "' (" << list.size() << " записей).\n";
}

// Вывод всех сотрудников
void printAll(const vector<Employee>& list) {
    if (list.empty()) {
        cout << "Список пуст.\n";
        return;
    }
    cout << "\n--- Список всех сотрудников ---\n";
    for (size_t i = 0; i < list.size(); ++i) {
        cout << i + 1 << ". " << list[i].toString() << endl;
    }
}

// Поиск по фамилии (точное совпадение, регистронезависимо)
void searchBySurname(const vector<Employee>& list, const string& target) {
    string t = target;
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    bool found = false;

    cout << "\n--- Результаты поиска по фамилии: \"" << target << "\" ---\n";
    for (const auto& emp : list) {
        string s = emp.surname;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if (s == t) {
            cout << emp.toString() << endl;
            found = true;
        }
    }
    if (!found) cout << "Сотрудник с фамилией \"" << target << "\" не найден.\n";
}

// Вывод сотрудников, фамилия которых начинается с указанной буквы
void printByFirstLetter(const vector<Employee>& list, char letter) {
    char l = tolower(letter);
    cout << "\n--- Сотрудники, фамилия которых начинается на '" << letter << "' ---\n";
    bool found = false;
    for (const auto& emp : list) {
        if (tolower(emp.surname[0]) == l) {
            cout << emp.toString() << endl;
            found = true;
        }
    }
    if (!found) cout << "Нет сотрудников с фамилией на '" << letter << "'.\n";
}

// Добавление нового сотрудника
void addEmployee(vector<Employee>& list) {
    string surname, name, patronymic;
    int age;

    cout << "\nВведите фамилию: ";
    getline(cin >> ws, surname); 
    cout << "Введите имя: ";
    getline(cin, name);
    cout << "Введите отчество: ";
    getline(cin, patronymic);
    cout << "Введите возраст: ";
    cin >> age;

    list.emplace_back(surname, name, patronymic, age);
    cout << "Сотрудник добавлен.\n";
}

// Удаление сотрудника по индексу (номер в списке)
void removeEmployee(vector<Employee>& list) {
    if (list.empty()) {
        cout << "Список пуст — удаление невозможно.\n";
        return;
    }

    printAll(list);
    cout << "\nВведите номер сотрудника для удаления (1-" << list.size() << "): ";
    int idx;
    cin >> idx;
    if (idx < 1 || idx > static_cast<int>(list.size())) {
        cout << "Неверный номер.\n";
        return;
    }

    list.erase(list.begin() + idx - 1);
    cout << "Сотрудник удалён.\n";
}

// Редактирование сотрудника по индексу
void editEmployee(vector<Employee>& list) {
    if (list.empty()) {
        cout << "Список пуст — редактирование невозможно.\n";
        return;
    }

    printAll(list);
    cout << "\nВведите номер сотрудника для редактирования (1-" << list.size() << "): ";
    int idx;
    cin >> idx;
    if (idx < 1 || idx > static_cast<int>(list.size())) {
        cout << "Неверный номер.\n";
        return;
    }

    auto& emp = list[idx - 1];
    cout << "Текущие данные: " << emp.toString() << endl;

    cout << "Новая фамилия [" << emp.surname << "]: ";
    string s;
    getline(cin >> ws, s);
    if (!s.empty()) emp.surname = s;

    cout << "Новое имя [" << emp.name << "]: ";
    getline(cin, s);
    if (!s.empty()) emp.name = s;

    cout << "Новое отчество [" << emp.patronymic << "]: ";
    getline(cin, s);
    if (!s.empty()) emp.patronymic = s;

    cout << "Новый возраст [" << emp.age << "]: ";
    string ageStr;
    getline(cin, ageStr);
    if (!ageStr.empty()) {
        try {
            emp.age = stoi(ageStr);
        }
        catch (...) {
            cout << "Возраст остался без изменений (некорректное значение).\n";
        }
    }

    cout << "Сотрудник обновлён.\n";
}

// Главное меню
void showMenu() {
    cout << "\n=== Система «Сотрудники» ===\n"
        << "1. Добавить сотрудника\n"
        << "2. Удалить сотрудника\n"
        << "3. Редактировать сотрудника\n"
        << "4. Поиск по фамилии\n"
        << "5. Показать всех сотрудников\n"
        << "6. Показать сотрудников по первой букве фамилии\n"
        << "0. Выход и сохранение\n"
        << "Выберите действие: ";
}

int main() {
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    vector<Employee> employees = loadEmployees();

    int choice;
    do {
        showMenu();
        cin >> choice;
        cin.ignore(); 

        switch (choice) {
        case 1: addEmployee(employees); break;
        case 2: removeEmployee(employees); break;
        case 3: editEmployee(employees); break;
        case 4: {
            cout << "Введите фамилию для поиска: ";
            string surname;
            getline(cin, surname);
            searchBySurname(employees, surname);
            break;
        }
        case 5: printAll(employees); break;
        case 6: {
            cout << "Введите первую букву фамилии: ";
            char ch;
            cin >> ch;
            printByFirstLetter(employees, ch);
            break;
        }
        case 0:
            saveEmployees(employees);
            cout << "Программа завершена. До свидания!\n";
            break;
        default:
            cout << "Неверный выбор. Попробуйте снова.\n";
        }
    } while (choice != 0);

    return 0;
}