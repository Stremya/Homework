#include <iostream>
using namespace std;
//Задание 1
/*
int main() {
	int a, sum = 0;
	setlocale(LC_ALL, "ru");
	cout << "Введите от какого числа будут считываться числа до 500: ";
	cin >> a;
	while (a <= 500) {
		sum += a;
		a++;
	}
	cout << sum;
	return 0;
}
*/

// Задание 2
/*
int main() {
	int x , y, i = 0;
	long long res = 1;;
	setlocale(LC_ALL, "ru");
	cout << "Введите значения x и y: " << endl;
	cin >> x >> y;
	while (i < y) {
		res *= x;
		i++;
	}
	cout << res << endl;
	return 0;
}
*/

// Задание 3
/*
int main() {
	int a = 1;
	double b = 0, res;
	setlocale(LC_ALL, "ru");
	while (a <= 1000) {
		b += a;
		res = b / 1000;
		a++;
	}
	cout << "Ср арифметическое от 1 до 1000 = " << res << endl;
	return 0;
}
*/

// Задание 4
/*
int main() {
	int a; 
	long long res = 1;
	setlocale(LC_ALL, "ru");
	cout << "Введите значение a: ";
	cin >> a;
	while (a <= 20) {
		res *= a;
		a++;
	}
	cout << res << endl;
	return 0;
}
*/

// Задание 5
/**/
int main() {
	int k, a = 1, res;
	setlocale(LC_ALL, "ru");
	cout << "Введите k: ";
	cin >> k;
	while (a < 10) {
		res = k * a;
		cout << k << " * " << a << " = " << res << endl;
		a++;
	}
	return 0;
}