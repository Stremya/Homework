#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

/*
// Задание 1
string convert(int a, int b) {
	if (a == 0) return "0";

	string result = "";
	const char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUWXYZ";

	while (a > 0) {
		int r = a % b;
		result += digits[r];
		a /= b;
	}

	reverse(result.begin(), result.end());
	return result;
}

int main() {
	setlocale(LC_ALL, "ru");
	int number, system;
	cout << "Введите число: ";
	cin >> number;
	cout << "Введите систему счисления(2-36): ";
	cin >> system;

	if (system > 36 || system < 2) return 1;

	string convertt = convert(number, system);
	cout << "Число " << number << " в системе счисления " << system << " - " << convertt << endl;
	return 0;
}
*/

/*
// Задание 2
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(0));
	int score_player = 0, score_computer = 0, computer_sum = 0, player_sum = 0;
	bool first = rand() % 2 == 0;
	int random1 = rand() % 6 + 1;
	int random2 = rand() % 6 + 1;
	int random3 = rand() % 6 + 1;
	int random4 = rand() % 6 + 1;
	
	cout << "Добро пожаловать в игру 'Кубики'! " << endl;
	
	for (int i = 0; i < 5; i++) {
		cout << "Раунд " << i << endl << endl;

		if (first) {
			cout << "Ваш ход" << endl;
			cout << "Бросается первый кубик" << endl;
			cout << "Выпало " << random1 << endl;
			cout << "Бросается второй кубик" << endl;
			cout << "Выпало " << random2 << endl;
			score_player = random1 + random2;
			player_sum += score_player;
			cout << "Ваш счет: " << score_player << endl;

			cout << "Ход оппонента" << endl;
			cout << "Бросается первый кубик" << endl;
			cout << "Выпало " << random3 << endl;
			cout << "Бросается второй кубик" << endl;
			cout << "Выпало " << random4 << endl;
			score_computer = random3 + random4;
			computer_sum += score_computer;
			cout << "Счет оппонента: " << score_computer << endl;
		}
		else { 
			cout << "Ход оппонента" << endl;
			cout << "Бросается первый кубик" << endl;
			cout << "Выпало " << random3 << endl;
			cout << "Бросается второй кубик" << endl;
			cout << "Выпало " << random4 << endl;
			score_computer = random3 + random4;
			computer_sum += score_computer;
			cout << "Счет оппонента: " << score_computer << endl;

			cout << "Ваш ход" << endl;
			cout << "Бросается первый кубик" << endl;
			cout << "Выпало " << random1 << endl;
			cout << "Бросается второй кубик" << endl;
			cout << "Выпало " << random2 << endl;
			score_player = random1 + random2;
			player_sum += score_player;
			cout << "Ваш счет: " << score_player << endl;
		}
	}
	double avrg_player = static_cast<double>(player_sum) / 5.0;
	double avrg_computer = static_cast<double>(computer_sum) / 5.0;

	cout << fixed << setprecision(1);

	cout << "Результаты: " << endl;
	cout << "Вы - " << avrg_player << endl;
	cout << "Оппонент - " << avrg_computer << endl;

	if (player_sum > computer_sum) cout << "Вы победили!" << endl;
	else if (player_sum < computer_sum) cout << "Оппонент побеждает!" << endl;
	else cout << "Ничья!" << endl;
	
	return 0;
}
*/

const int max_size = 1000;
// Задание 3
void rectangle(int n, int k) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

// Задание 4
void factorial(int a) {
	int fact = 1;
	while (0 < a) {
		fact *= a;
		a--;
	}
	cout << "Факториал - " << fact;
}

// Задание 5
bool Simple(int a) {
	if (a <= 1) return false;
	if (a % 2 == 0) return false;
	if (a == 2) return true;
	for (int i = 3; i * i <= a; i += 2) {
		if (a % i == 0) return false;
	}
	return true;
}

// Задание 6
void Array1(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10 + 1;
		cout << arr[i] << " ";
	}
	cout << endl;
}
void MaxOrMin(int arr[], int size, int& max, int& min) { // & - ссылка
	max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) max = arr[i];
	}
	min = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] < min) min = arr[i];
	}
}

// Задание 7
void Array2(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10 + 1;
		cout << arr[i] << " ";
	}
	cout << endl;
}

void Reverse(int arr[], int size) {
	for (int i = 0; i < size / 2; i++) {
		swap(arr[i], arr[size - 1 - i]);
	}
}
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(0));
	cout << "Задание 3" << endl << endl;
	int n, k;
	cout << "Введите высоту прямоугольника: ";
	cin >> n;
	cout << "Введите ширину прямоугольника: ";
	cin >> k;
	rectangle(n, k);
	
	cout << endl << endl;
	cout << "Задание 4" << endl << endl;
	int fctrl;
	cout << "Введите число: ";
	cin >> fctrl;
	factorial(fctrl);
	
	
	cout << endl << endl;
	cout << "Задание 5" << endl << endl;
	int simple;
	cout << "Введите число: ";
	cin >> simple;
	if (Simple(simple)) {
		cout << simple << " число простое" << endl;
	}
	else {
		cout << simple << " число не простое" << endl;
	}

	cout << endl << endl;
	cout << "Задание 6" << endl << endl;
	int size;
	cout << "Введите размер массива: ";
	cin >> size;
	int arr[max_size];

	cout << "Массив:" << endl;
	Array1(arr, size);

	int max_val, min_val;
	MaxOrMin(arr, size, max_val, min_val);
	cout << "Максимум - " << max_val << endl << "Минимум - " << min_val << endl;

	cout << endl << endl;
	cout << "Задание 7" << endl << endl;
	int size1;
	cout << "Введите размер массива: ";
	cin >> size1;
	int array[max_size];

	cout << "Массив:" << endl;
	Array2(array, size1);

	Reverse(array, size1);

	cout << "Перевернутый массив:" << endl;
	for (int i = 0; i < size1; i++) {
		cout << array[i] << " ";
	}
	return 0;
}