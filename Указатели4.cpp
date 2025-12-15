#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // максимальный размер

/*
// Задание 1
// Функция для ввода массива
void inputArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }
}

// Функция для вывода массива
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "ru");

    int M, N;
    cout << "Введите размер массива A (M): ";
    cin >> M;
    cout << "Введите размер массива B (N): ";
    cin >> N;

    if (M <= 0 || N <= 0 || M > MAX_SIZE || N > MAX_SIZE) {
        cout << "Ошибка: размеры должны быть от 1 до " << MAX_SIZE << endl;
        return 1;
    }

    int A[MAX_SIZE];
    int B[MAX_SIZE];
    int C[MAX_SIZE]; 
    int sizeC = M + N;

    cout << "Введите элементы массива A:" << endl;
    inputArray(A, M);

    cout << "Введите элементы массива B:" << endl;
    inputArray(B, N);

    for (int i = 0; i < M; i++) {
        *(C + i) = *(A + i);
    }

    for (int i = 0; i < N; i++) {
        *(C + M + i) = *(B + i);
    }

    cout << "\nОбъединённый массив:" << endl;
    printArray(C, sizeC);

    return 0;
}
*/

// Задание 4
// Функция для ввода массива
void inputArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }
}

// Функция для вывода массива
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "ru");

    int M;
    cout << "Введите размер массива A (M): ";
    cin >> M;

    if (M <= 0 || M > MAX_SIZE) {
        cout << "Ошибка: размер должен быть от 1 до " << MAX_SIZE << endl;
        return 1;
    }

    int A[MAX_SIZE];
    int B[MAX_SIZE]; 
    int C[MAX_SIZE]; 
    int sizeC = 0;

    cout << "Введите элементы массива A:" << endl;
    inputArray(A, M);

    for (int i = 0; i < M; i++) {
        *(B + i) = *(A + i);
    }

    cout << "Выберите, что удалить:\n";
    cout << "1 — удалить чётные\n";
    cout << "2 — удалить нечётные\n";
    cout << "Ваш выбор: ";

    int choice;
    cin >> choice;

    if (choice == 1) {
        for (int i = 0; i < M; i++) {
            if (*(B + i) % 2 != 0) { 
                *(C + sizeC) = *(B + i);
                sizeC++;
            }
        }
    }
    else if (choice == 2) {
        for (int i = 0; i < M; i++) {
            if (*(B + i) % 2 == 0) { 
                *(C + sizeC) = *(B + i);
                sizeC++;
            }
        }
    }
    else {
        cout << "Неверный выбор!" << endl;
        return 1;
    }

    cout << "\nРезультат:" << endl;
    printArray(C, sizeC);

    return 0;
}