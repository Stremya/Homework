#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <algorithm> 
using namespace std;

/*
// Задание 1
const int SIZE = 3; // размер квадратной матрицы

// --- Функции для int ---

// Заполняет массив элементами
void initMatrix(int matrix[SIZE][SIZE]) {
    srand(time(0));
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = rand() % 20;
        }
    }
}

// Выводит массив
void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

// Ищет минимум и максимум по диагонали
void diagMinMax(int matrix[SIZE][SIZE], int& minVal, int& maxVal) {
    minVal = matrix[0][0];
    maxVal = matrix[0][0];
    for (int i = 0; i < SIZE; i++) {
        if (matrix[i][i] < minVal) minVal = matrix[i][i];
        if (matrix[i][i] > maxVal) maxVal = matrix[i][i];
    }
}

// сортирует строку
void sortRows(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        sort(matrix[i], matrix[i] + SIZE); // сортируем строку
    }
}

// --- Функции для double ---

// Заполняет массив элементами
void initMatrix(double matrix[SIZE][SIZE]) {
    srand(time(0));
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = (rand() % 100) / 10.0; // 0.0, 1.0, ..., 9.9
        }
    }
}

// Выводит массив
void printMatrix(double matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

// Ищет минимум и максимум по диагонали
void diagMinMax(double matrix[SIZE][SIZE], double& minVal, double& maxVal) {
    minVal = matrix[0][0];
    maxVal = matrix[0][0];
    for (int i = 0; i < SIZE; i++) {
        if (matrix[i][i] < minVal) minVal = matrix[i][i];
        if (matrix[i][i] > maxVal) maxVal = matrix[i][i];
    }
}

// сортирует строку
void sortRows(double matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        sort(matrix[i], matrix[i] + SIZE);
    }
}

// --- Функции для char ---

// Заполняет массив элементами
void initMatrix(char matrix[SIZE][SIZE]) {
    srand(time(0));
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = 'A' + (rand() % 26); // A, B, ..., Z
        }
    }
}

// Выводит массив
void printMatrix(char matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

// Ищет минимум и максимум по диагонали
void diagMinMax(char matrix[SIZE][SIZE], char& minVal, char& maxVal) {
    minVal = matrix[0][0];
    maxVal = matrix[0][0];
    for (int i = 0; i < SIZE; i++) {
        if (matrix[i][i] < minVal) minVal = matrix[i][i];
        if (matrix[i][i] > maxVal) maxVal = matrix[i][i];
    }
}

// сортирует строку
void sortRows(char matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        sort(matrix[i], matrix[i] + SIZE);
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    int intMat[SIZE][SIZE];
    double doubleMat[SIZE][SIZE];
    char charMat[SIZE][SIZE];

    cout << "=== Матрица int ===" << endl;
    initMatrix(intMat);
    printMatrix(intMat);
    int minI, maxI;
    diagMinMax(intMat, minI, maxI);
    cout << "На диагонали: min=" << minI << ", max=" << maxI << endl;
    sortRows(intMat);
    cout << "После сортировки строк:" << endl;
    printMatrix(intMat);

    cout << "=== Матрица double ===" << endl;
    initMatrix(doubleMat);
    printMatrix(doubleMat);
    double minI1, maxI1;
    diagMinMax(doubleMat, minI1, maxI1);
    cout << "На диагонали: min=" << minI1 << ", max=" << maxI1 << endl;
    sortRows(doubleMat);
    cout << "После сортировки строк:" << endl;
    printMatrix(doubleMat);

    cout << "=== Матрица char ===" << endl;
    initMatrix(charMat);
    printMatrix(charMat);
    char minI2, maxI2;
    diagMinMax(charMat, minI2, maxI2);
    cout << "На диагонали: min=" << minI2 << ", max=" << maxI2 << endl;
    sortRows(charMat);
    cout << "После сортировки строк:" << endl;
    printMatrix(charMat);

    return 0;
}
*/

/*
// Задание 2
// Рекурсивная функция поиска НОД
int gcd(int a, int b) {
    if (b == 0) { // базовый случай
        return a;
    }
    return gcd(b, a % b); // рекурсивный вызов
}

int main() {
    setlocale(LC_ALL, "ru");
    int a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;
    cout << "НОД(" << a << ", " << b << ") = " << gcd(a, b) << endl;
    return 0;
}
*/


// Задание 3
// Генерируем случайное 4-значное число (как строку)
string generateSecret() {
    string secret = "";
    for (int i = 0; i < 4; i++) {
        secret += ('0' + rand() % 10);
    }
    return secret;
}

// Подсчёт быков и коров
void countBullsAndCows(string secret, string guess, int& bulls, int& cows) {
    bulls = 0;
    cows = 0;
    for (int i = 0; i < 4; i++) {
        if (secret[i] == guess[i]) {
            bulls++;
        }
        else {
            for (int j = 0; j < 4; j++) {
                if (i != j && secret[i] == guess[j]) {
                    cows++;
                    break;
                }
            }
        }
    }
}

// Рекурсивная функция игры
void playGame(string secret, int attempts = 1) {
    string guess;
    cout << "Попытка " << attempts << ": введите 4-значное число: ";
    cin >> guess;

    int bulls, cows;
    countBullsAndCows(secret, guess, bulls, cows);

    cout << "Быков: " << bulls << ", Коров: " << cows << endl;

    if (bulls == 4) {
        cout << "Поздравляем! Вы угадали за " << attempts << " попыток!" << endl;
        return; // базовый случай — вышли
    }

    playGame(secret, attempts + 1); // рекурсивный вызов
}

int main() {
    setlocale(LC_ALL, "ru");
    srand(time(0));
    string secret = generateSecret();
    cout << "Игра «Быки и коровы» началась!" << endl;
    cout << "(Для теста: загадано " << secret << ")" << endl; // можно удалить

    playGame(secret);

    return 0;
}