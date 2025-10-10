#include <iostream>
using namespace std;

/*
int main() {
	int i, b;
	setlocale(LC_ALL, "ru");
	cout << "Введите числа в диапазоне: ";
	cin >> i >> b;
	for (; i <= b; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				cout << j << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
*/

/*
int main() {
	for (int i = 2; i <= 1000; i++) {
		bool prosto = true;
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				prosto = false;
				break;
			}
		}
		if (prosto) {
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}
*/

/*
int main() {
	int a;
	setlocale(LC_ALL, "ru");
	cout << "Введите высоту и ширину фигуры (нечетное число):";
	cin >> a;
	if (a % 2 == 0) {
		cout << "Нужно четное число";
		return 1;
	}

	int mid = a / 2;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			if (i == j || i + j == a - 1 ||
				i == mid || j == mid) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << "\n";
	}
	return 0;
}
*/

/*
int main() {
	int count = 0;
	setlocale(LC_ALL, "ru");
	cout << "Все возможные трёхзначные коды без повторяющихся цифр:\n";

	for (int a = 1; a <= 9; a++) {      
		for (int b = 0; b <= 9; b++) {  
			if (b == a) continue;       
			for (int c = 0; c <= 9; c++) {
				if (c == a || c == b) continue; 
				cout << a << b << c << " ";
				count++;
			}
		}
	}

	cout << "\n\nВсего возможных кодов: " << count << endl;
	int total_seconds = count * 3;
	int minutes = total_seconds / 60;
	int seconds = total_seconds % 60;

	cout << "Время в худшем случае: " << minutes << " мин " << seconds << " сек" << endl;

	return 0;
}
*/

/*
int main() {
	const int num_employees = 12;
	double total_company_pay = 0.0;
	setlocale(LC_ALL, "ru");
	cout << "=== Отчёт по зарплатам за весенний квартал ===\n";

	for (int i = 1; i <= num_employees; i++) {
		double march, april, may;
		cout << "Сотрудник " << i << ":\n";
		cout << "  Зарплата за Март: ";
		cin >> march;
		cout << "  Зарплата за Апрель: ";
		cin >> april;
		cout << "  Зарплата за Май: ";
		cin >> may;

		double quarterly_pay = march + april + may;
		cout << "  Итого за квартал: " << quarterly_pay << " руб.\n\n";

		total_company_pay += quarterly_pay;
	}

	cout << "=========================================\n";
	cout << "Общая выплата по всем сотрудникам за квартал: " << total_company_pay << " руб.\n";

	return 0;
}
*/