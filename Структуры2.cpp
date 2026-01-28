#include <iostream>
#include <string>

using namespace std;

/*
struct Complex {
	double real;
	double imag;

	Complex() : real(0.0), imag(0.0) {}

	Complex(double r, double i) : real(r), imag(i) {}
};

Complex operator+(const Complex& lhs, const Complex& rhs) {
	return Complex(lhs.real + rhs.real, lhs.imag + rhs.imag);
}

Complex operator-(const Complex& lhs, const Complex& rhs) {
	return Complex(lhs.real - rhs.real, lhs.imag - rhs.imag);
}

Complex operator*(const Complex& lhs, const Complex rhs) {
	double r = lhs.real * rhs.real - lhs.imag * rhs.imag;
	double i = lhs.real * rhs.imag + lhs.imag * rhs.real;
	return Complex(r, i);
}

Complex operator/(const Complex& lhs, const Complex& rhs) {
	double denom = rhs.real * rhs.real + rhs.imag * rhs.imag;
	if (denom == 0) {
		return Complex(0, 0);
	}
	double r = (lhs.real * rhs.real + lhs.imag * rhs.imag) / denom;
	double i = (lhs.imag * rhs.real - lhs.real * rhs.imag) / denom;
	return Complex(r, i);
}

// Перегрузка оператора <<
ostream& operator<<(ostream& os, const Complex& z) {
	if (z.imag >= 0) {
		os << z.real << " + " << z.imag << "i";
	}
	else {
		os << z.real << " - " << (-z.imag) << "i";
	}
	return os;
}

int main() {
	Complex a(3, 4);  // 3 + 4i
	Complex b(1, -2); // 1 - 2i

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;
	cout << "a / b = " << a / b << endl;

	return 0;
}
*/

// Задание 2

struct Car {
	double length;        // длина, м
	double clearance;     // клиренс (высота посадки), м
	double engineVolume;  // объём двигателя, л
	double power;         // мощность, л.с.
	double wheelDiameter; // диаметр колёс, дюймы или см
	string color;
	string transmissionType;
};

// Функция для ввода данных от пользователя
void inputCar(Car& car) {
	cout << "Введите длину автомобиля (м): ";
	cin >> car.length;

	cout << "Введите клиренс (высота посадки, м): ";
	cin >> car.clearance;

	cout << "Введите объём двигателя (л): ";
	cin >> car.engineVolume;

	cout << "Введите мощность (л.с.): ";
	cin >> car.power;

	cout << "Введите диаметр колёс (дюймы): ";
	cin >> car.wheelDiameter;

	cout << "Введите цвет(на английском): ";
	cin.ignore();
	getline(cin, car.color);

	cout << "Введите тип КПП (mechanics/automaton/robot): ";
	getline(cin, car.transmissionType);

	cout << "Автомобиль добавлен\n";
}

// Функция для вывода данных
void printCar(const Car& car) {
	cout << "\n--- Автомобиль ---\n";
	cout << "Длина: " << car.length << " м\n";
	cout << "Клиренс: " << car.clearance << " м\n";
	cout << "Объём двигателя: " << car.engineVolume << " л\n";
	cout << "Мощность: " << car.power << " л.с.\n";
	cout << "Диаметр колёс: " << car.wheelDiameter << " дюймов\n";
	cout << "Цвет: " << car.color << "\n";
	cout << "КПП: " << car.transmissionType << "\n";
}

// Функция, которая ищет в массиве
void findCarsByColor(const Car cars[], int n, const string& color) {
	bool found = false;
	for (int i = 0; i < n; ++i) {
		if (cars[i].color == color) {
			printCar(cars[i]);
			found = true;
		}
	}
	if (!found) {
		cout << "Автомобили цвета \"" << color << "\" не найдены.\n";
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	const int MAX_CARS = 10;
	Car garage[MAX_CARS];
	int count = 0;

	while (count < MAX_CARS) {
		cout << "\n--- Меню ---\n";
		cout << "1. Добавить автомобиль\n";
		cout << "2. Показать все автомобили\n";
		cout << "3. Найти по цвету\n";
		cout << "0. Выход\n";
		cout << "Выбор: ";

		int choice;
		cin >> choice;

		switch (choice) {
		case 1: {
			if (count < MAX_CARS) {
				inputCar(garage[count]);
				count++;
			}
			else {
				cout << "Гараж полон!\n";
			}
			break;
		}
		case 2: {
			for (int i = 0; i < count; ++i) {
				printCar(garage[i]);
			}
			break;
		}
		case 3: {
			cout << "Введите цвет для поиска(на английском): ";
			cin.ignore();
			string searchColor;
			getline(cin, searchColor);
			findCarsByColor(garage, count, searchColor);
			break;
		}
		case 0: {
			cout << "До свидания!\n";
			return 0;
		}
		default:
			cout << "Неверный выбор.\n";
		}
	}

	return 0;
}