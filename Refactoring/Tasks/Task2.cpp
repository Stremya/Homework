#include <iostream>
#include <cmath>

using namespace std;

// Функция возведения в степень 
double power(double base, int exp) {
    double res = 1.0;
    int e = abs(exp);
    for (int i = 0; i < e; ++i) res *= base;
    return (exp >= 0) ? res : 1.0 / res;
}

// Умножение с явной обработкой отрицательных чисел
double multiply(double a, double b) {
    if (a < 0 && b < 0) return (-a) * (-b);
    if (a < 0 || b < 0) return -(abs(a) * abs(b));
    return a * b;
}

int main() {
    setlocale(LC_ALL, "ru");
    double a, b, res = 0;
    char op;

    cout << "Введите первое число: "; cin >> a;
    cout << "Выберите операцию (+, -, *, /, ^): "; cin >> op;
    cout << "Введите второе число: "; cin >> b;

    switch (op) {
    case '+': res = a + b; break;
    case '-': res = a - b; break;
    case '*': res = multiply(a, b); break;
    case '/':
        if (b == 0) { cout << "Ошибка: деление на ноль!\n"; return 1; }
        res = a / b; break;
    case '^': res = power(a, (int)b); break;
    default: cout << "Неподдерживаемая операция.\n"; return 1;
    }

    cout << "Результат: " << res << endl;
    return 0;
}