#include <iostream>

using namespace std;


// Задание 1
const int MAX_SIZE = 100;
/*
// Ввод массива через указатели
void inputArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }
}

// Проверяет, содержится ли value в массиве arr[0..size-1]
bool contains(int* arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == value) {
            return true;
        }
    }
    return false;
}

// Собирает в C элементы A, которых нет в B, без повторений
// sizeC — указатель на переменную, куда запишем реальный размер C
void buildResult(int* A, int M, int* B, int N, int* C, int* sizeC) {
    *sizeC = 0; // обнуляем размер результата

    for (int i = 0; i < M; i++) {
        int current = *(A + i);

        // Если current есть в B — пропускаем
        if (contains(B, N, current)) {
            continue;
        }

        // Если current уже есть в C — пропускаем (чтобы не было дублей)
        if (contains(C, *sizeC, current)) {
            continue;
        }

        // Добавляем в C
        *(C + (*sizeC)) = current;
        (*sizeC)++;
    }
}

// Вывод массива через указатели
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

// Основная функция
int main() {
    setlocale(LC_ALL, "ru");

    int M, N;
    cout << "Введите размер массива A (M): ";
    cin >> M;
    cout << "Введите размер массива B (N): ";
    cin >> N;

    int A[MAX_SIZE];
    int B[MAX_SIZE];
    int C[MAX_SIZE];       // максимум — M элементов
    int sizeC;      // реальный размер C

    cout << "Введите элементы массива A:" << endl;
    inputArray(A, M);

    cout << "Введите элементы массива B:" << endl;
    inputArray(B, N);

    buildResult(A, M, B, N, C, &sizeC);

    cout << "\nЭлементы A, которых нет в B (без повторений):" << endl;
    printArray(C, sizeC);

    return 0;
}
*/

// Задание 2

// Ввод массива
void inputArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }
}

// Проверка наличия элемента в массиве
bool contains(int* arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == value) {
            return true;
        }
    }
    return false;
}

// Добавление элемента в C, если его там ещё нет
void addToResult(int* C, int* sizeC, int value) {
    if (!contains(C, *sizeC, value)) {
        *(C + (*sizeC)) = value;
        (*sizeC)++;
    }
}

// Собираем симметрическую разность A и B
void buildSymmetricDiff(int* A, int M, int* B, int N, int* C, int* sizeC) {
    *sizeC = 0;

    // Элементы A, которых нет в B
    for (int i = 0; i < M; i++) {
        int current = *(A + i);
        if (!contains(B, N, current)) {
            addToResult(C, sizeC, current);
        }
    }

    // Элементы B, которых нет в A
    for (int i = 0; i < N; i++) {
        int current = *(B + i);
        if (!contains(A, M, current)) {
            addToResult(C, sizeC, current);
        }
    }
}

// Вывод массива
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
    int sizeC;

    cout << "Введите элементы массива A:" << endl;
    inputArray(A, M);

    cout << "Введите элементы массива B:" << endl;
    inputArray(B, N);

    buildSymmetricDiff(A, M, B, N, C, &sizeC);

    cout << "\nЭлементы, которые есть только в A или только в B (без повторений):" << endl;
    printArray(C, sizeC);

    return 0;
}