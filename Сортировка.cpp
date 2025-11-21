#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>

using namespace std;

/*
// Задание 1
// Пузырьковая сортировка
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Меняем местами
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    srand(time(0));
    
    const int size = 10;
    int arr[size];
    
    cout << "Исходный массив: ";
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 60 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr, size);

    cout << "Отсортированный массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/

/*
// Задание 2
// Сортировка вставками
template <class T>
void insertSort(T arr[], long size)
{
    long i, j;
    T x;

    for (i = 0; i < size; i++)
    {
        x = arr[i];
        for (j = i - 1; j >= 0 && a[j] > x; j--)
        {
            arr[j + 1] = a[j];

        }
        arr[j + 1] = x;
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    srand(time(0));

    const int size = 10;
    int arr[size];

    cout << "Изначальный массив:" << endl;
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 30 + 1;
        cout << arr[i] << " ";
    }

    insertSort(arr, size);

    cout << "Отсортированный массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/

/*
// Задание 3
const int SIZE = 10;

// Показ оценок
void printGrades(int grades[]) {
    cout << "Оценки студента: ";
    for (int i = 0; i < SIZE; i++) {
        cout << grades[i] << " ";
    }
    cout << endl;
}

// Подсчет среднего
double calculateAverage(int grades[]) {
    double sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += grades[i];
    }
    return sum / SIZE;
}

// Изменение оценки
void retakeExam(int grades[]) {
    int index, newGrade;
    cout << "Введите номер экзамена (от 1 до 10): ";
    cin >> index;
    if (index < 1 || index > 10) {
        cout << "Неверный номер!" << endl;
        return;
    }
    cout << "Введите новую оценку: ";
    cin >> newGrade;
    grades[index - 1] = newGrade; 
    cout << "Оценка изменена." << endl;
}

// Решение да/нет стипендии
void checkScholarship(int grades[]) {
    double avg = calculateAverage(grades);
    cout << "Средний балл: " << avg << endl;
    if (avg >= 10.7) {
        cout << "Стипендия выходит!" << endl;
    }
    else {
        cout << "Стипендия не выходит." << endl;
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    int grades[SIZE];

    cout << "Введите 10 оценок студента:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Оценка " << i + 1 << ": ";
        cin >> grades[i];
    }

    int choice;
    do {
        cout << "\n=== Меню ===" << endl;
        cout << "1. Вывести оценки" << endl;
        cout << "2. Пересдать экзамен" << endl;
        cout << "3. Проверить стипендию" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите действие: ";
        cin >> choice;

        switch (choice) {
        case 1:
            printGrades(grades);
            break;
        case 2:
            retakeExam(grades);
            break;
        case 3:
            checkScholarship(grades);
            break;
        case 0:
            cout << "Выход из программы." << endl;
            break;
        default:
            cout << "Неверный выбор!" << endl;
        }
    } while (choice != 0);

    return 0;
}
*/

/*
// Задание 4
// Быстрая сортировка
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high]; 
        int i = low - 1;

        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);

        int pi = i + 1;
        quickSort(arr, low, pi - 1);  // левая часть
        quickSort(arr, pi + 1, high); // правая часть
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    srand(time(0));

    const int size = 10;
    int arr[size];
    
    cout << "Исходный массив: ";
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 30 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, size - 1);

    cout << "Отсортированный массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
*/

// Задание 5
// Разворачивает часть массива
void reversePart(int arr[], int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    srand(time(0));

    const int size = 20;
    int arr[size]; // пример

    cout << "Искходный массив:" << endl;
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 50 + 1;
        cout << arr[i] << " ";
    }

    // Считаем среднее
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double avg = sum / size;

    int sortEnd;
    if (avg > 0) {
        sortEnd = (2 * size) / 3; // первые 2/3
    }
    else {
        sortEnd = size / 3; // первая 1/3
    }

    // Сортируем нужную часть
    sort(arr, arr + sortEnd);

    // Разворачиваем остальную часть
    if (sortEnd < size) {
        reversePart(arr, sortEnd, size - 1);
    }

    cout << "Результат: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}