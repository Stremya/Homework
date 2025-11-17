#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Задание 1
void Pow(int a, int b) {
	double degree = pow(a, b);
	cout << "Число " << a << " в степени " << b << " = " << degree << endl;
}

// Задание 2
void Range(int a, int b) {
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
	}
	cout << "Сумма всех чисел в диапазоне от " << a << " до " << b << " = " << sum << endl;
}

// Задание 3
// Проверка на совершеннное число
bool Perfect_num(int a) {
	if (a <= 1) return false;
	int sum = 0;
	for (int i = 1; i < a; i++) {
		if (a % i == 0) sum += i;
	}
	return sum == a;
}

// Совершенные числа в интервале
void RangePerfectNum(int a, int b) {
	cout << "Совершенные числа в интервале от " << a << " до " << b << ":" << endl;
	bool prfct = false;
	for (int i = a; i <= b; i++) {
		if (Perfect_num(i)) {
			cout << i << " ";
			prfct = true;
		}
	}
	if (!prfct) cout << "Совершенных чисел нет" << endl;
	cout << endl;
}

// Задание 4
void Cards(int suit, int num) {
	string cards[] = { "пик", "крести", "бубен", "червей" };
	string cards_count[] = { "", "", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Валет", "Дама", "Король", "Туз" };

	if (suit >= 0 && suit <= 3 && num >= 2 && num <= 14) {
		cout << cards_count[num] << " " << cards[suit] << endl;
	}
	else {
		cout << "Указаны неверные данные" << endl;
	}
}

// Задание 5
bool isHappy(int num) {
	if (num < 100000 || num > 999999) {
		return false;
	}

	int d1 = num / 100000;     
	int d2 = (num / 10000) % 10; 
	int d3 = (num / 1000) % 10; 
	int d4 = (num / 100) % 10;   
	int d5 = (num / 10) % 10;    
	int d6 = num % 10;           

	int sumFirst = d1 + d2 + d3;
	int sumLast = d4 + d5 + d6;

	return sumFirst == sumLast;
}
int main() {
	setlocale(LC_ALL, "ru");
	cout << "Задание 1" << endl;
	int degree_val, count;
	cout << "Введите число: ";
	cin >> count;
	cout << "Введите степень: ";
	cin >> degree_val;
	Pow(count, degree_val);

	cout << "--------------------------" << endl;

	cout << "Задание 2" << endl;
	int range_fr, range_bfr;
	cout << "Введите диапазон чисел: ";
	cin >> range_fr >> range_bfr;
	Range(range_fr, range_bfr);

	cout << "--------------------------" << endl;

	cout << "Задание 3" << endl;
	int start, end;
	cout << "Введите диапазон чисел: ";
	cin >> start >> end;
	RangePerfectNum(start, end);

	cout << "--------------------------" << endl;

	cout << "Задание 4" << endl;
	int card, num_card;
	cout << "Введите номер масти (0-3): ";
	cin >> card;
	cout << "Введите номер карты: ";
	cin >> num_card;
	Cards(card, num_card);

	cout << "--------------------------" << endl;

	cout << "Задание 5" << endl;
	int number;
	cout << "Введите шестизначное число: ";
	cin >> number;

	if (isHappy(number)) {
		cout << "Число счастливое!" << endl;
	}
	else {
		cout << "Число не счастливое." << endl;
	}
	return 0;
}