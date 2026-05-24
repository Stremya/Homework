#include <iostream>
#include <cmath>
#include <functional>
#include <map>

using namespace std;

class Calculator {
public:
    double calculate(double a, char op, double b) {
        auto it = operations.find(op);
        if (it == operations.end()) throw runtime_error("Неверная операция");
        return it->second(a, b);
    }

private:
    // Введение фабрики/карты операций
    map<char, function<double(double, double)>> operations = {
        {'+', [](double a, double b) { return a + b; }},
        {'-', [](double a, double b) { return a - b; }},
        {'*', [](double a, double b) {
            if (a < 0 && b < 0) return (-a) * (-b);
            if (a < 0 || b < 0) return -(abs(a) * abs(b));
            return a * b;
        }},
        {'/', [](double a, double b) {
            if (b == 0.0) throw runtime_error("Деление на ноль");
            return a / b;
        }},
        {'^', [](double a, double b) {
            double res = 1.0; int e = abs((int)b);
            for (int i = 0; i < e; ++i) res *= a;
            return (b >= 0) ? res : 1.0 / res;
        }}
    };
};

int main() {
    setlocale(LC_ALL, "ru");
    Calculator calc;
    double a, b, res = 0;
    char op;

    cout << "Введите: a op b\n";
    if (!(cin >> a >> op >> b)) {
        cout << "Ошибка ввода.\n"; return 1;
    }

    try {
        res = calc.calculate(a, op, b);
        cout << "Результат: " << res << endl;
    }
    catch (const exception& e) {
        cout << "Ошибка: " << e.what() << endl;
    }
    return 0;
}