#include <iostream>
#include <cmath>
using namespace std;

// Задание 1
/*
// Прямоугольник
void Rectangle(int a, int b) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}

int main() {
	int n, k;
	cout << "Enter the height of the rectangle: ";
	cin >> n;
	cout << "Enter the width of the rectangle: ";
	cin >> k;
	Rectangle(n, k);
	return 0;
}
*/

// Задание 2
/*
// Факториал
void Factorial(int a) {
	int fact = 1;
	for (int i = 1; i <= a; i++) {
		fact *= i;
	}
	cout << "Factorial - " << fact;
}


int main() {
	int n;
	setlocale(LC_ALL, "ru");
	cout << "Введите число: ";
	cin >> n;
	Factorial(n);
	return 0;
}
*/

// Задание 3
/*
// Проверяет является ли число простым 
bool Simple(int a) {
	if (a <= 1) return false;
	if (a == 2) return true;
	if (a % 2 == 0) return false;
	for (int i = 3; i * i <= a; i += 2) {
		if (a % i == 0) return false;
	}
	return true;
}

int main() {
	setlocale(LC_ALL, "ru");
	int num;
	cout << "Введите число: ";
	cin >> num;
	if (Simple(num)) cout << "Число простое" << endl;
	else cout << "Число не простое" << endl;
	return 0;
}
*/

// Задание 4
/*
// Число в кубе
void Cube(int a) {
	double res = pow(a, 3);
	cout << res;
}

int main() {
	int n;
	cout << "Enter number: ";
	cin >> n;
	Cube(n);
	return 0;
}
*/

// Задание 5
/*
// максимальное число
void Max(int a, int b) {
	int max = a;
	if (a < b) max = b;
	cout << "Наибольшее число из " << a << " и " << b << ": " << max;
}

int main() {
	setlocale(LC_ALL, "ru");
	int n, m;
	cout << "Введите два числа: ";
	cin >> n >> m;
	Max(n, m);
	return 0;
}
*/

// Задание 6

// Проверяет отрицательное или положительное
void TrueOrFalse(int a) {
	if (a < 0) cout << "False";
	else if (a > 0) cout << "True";
	else cout << "Error";
}

int main() {
	int n;
	cout << "Enter number: ";
	cin >> n;
	TrueOrFalse(n);
	return 0;
}