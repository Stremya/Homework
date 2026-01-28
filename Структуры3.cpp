#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

// Задание 1
/*
struct Rect {
    double x, y;  
    double width, height;

    // Конструктор
    Rect(double x0 = 0, double y0 = 0, double w = 1, double h = 1)
        : x(x0), y(y0), width(w), height(h) {
    }

    // Перемещение на (dx, dy)
    void move(double dx, double dy) {
        x += dx;
        y += dy;
    }

    // Изменение размера
    void resize(double factor) {
        width *= factor;
        height *= factor;
    }

    // вывод
    void print() const {
        cout << "Прямоугольник: (" << x << ", " << y
            << "), ширина=" << width << ", высота=" << height << endl;
    }
};

int main() {
    setlocale(LC_ALL, "ru");
    Rect r(2, 3, 4, 5); 
    r.print();          

    r.move(1, -2);
    r.resize(2.0);
    r.print();          

    return 0;
}
*/


// Задание 2
/*
struct Point {
    double x, y;
    Point(double x0 = 0, double y0 = 0) : x(x0), y(y0) {}
};

double distance(const Point& a, const Point& b) {
    double dx = b.x - a.x;
    double dy = b.y - a.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    setlocale(LC_ALL, "ru");
    Point p1(0, 0);
    Point p2(3, 4);
    cout << "Расстояние: " << distance(p1, p2) << endl; // 5.0
    return 0;
}
*/

// Задание 3

// Вспомогательная функция: НОД
int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

struct Fraction {
    int num;   // числитель
    int den;   // знаменатель (≠ 0)

    Fraction(int n = 0, int d = 1) : num(n), den(d) {
        if (den == 0) den = 1; 
        reduce();
    }

    // Сокращение дроби
    void reduce() {
        if (num == 0) {
            den = 1;
            return;
        }
        int g = gcd(num, den);
        num /= g;
        den /= g;
        if (den < 0) { 
            num = -num;
            den = -den;
        }
    }

    // Перегрузка операторов
    Fraction operator+(const Fraction& other) const {
        int n = num * other.den + other.num * den;
        int d = den * other.den;
        return Fraction(n, d);
    }

    Fraction operator-(const Fraction& other) const {
        int n = num * other.den - other.num * den;
        int d = den * other.den;
        return Fraction(n, d);
    }

    Fraction operator*(const Fraction& other) const {
        return Fraction(num * other.num, den * other.den);
    }

    Fraction operator/(const Fraction& other) const {
        if (other.num == 0) {
            return Fraction(0, 1); // или throw exception
        }
        return Fraction(num * other.den, den * other.num);
    }

    // Вывод
    void print() const {
        if (den == 1) {
            cout << num;
        }
        else if (abs(num) >= abs(den)) {
            int whole = num / den;
            int rem = abs(num) % den;
            if (rem == 0) {
                cout << whole;
            }
            else {
                cout << whole << " " << rem << "/" << den;
            }
        }
        else {
            cout << num << "/" << den;
        }
    }
};

int main() {
    Fraction a(3, 4);  
    Fraction b(1, 2);  

    cout << "a = "; a.print(); cout << endl;
    cout << "b = "; b.print(); cout << endl;
    cout << "a + b = "; (a + b).print(); cout << endl;
    cout << "a * b = "; (a * b).print(); cout << endl;

    return 0;
}