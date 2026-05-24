#include <iostream>
#include <limits>
using namespace std;

// Валидация ввода
bool readPositiveInt(int& n) {
    while (!(cin >> n) || n <= 0) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Ошибка. Введите N > 0: ";
    }
    cin.ignore();
    return true;
}

// Алгоритмическая оптимизация
long long calcSumSquares(int n) {
    return (long long)n * (n + 1) * (2 * n + 1) / 6;
}

int main() {
    setlocale(LC_ALL, "ru");
    int n;
    cout << "Введите N (N > 0): ";
    readPositiveInt(n);
    cout << "Сумма квадратов: " << calcSumSquares(n) << endl;
    return 0;
}