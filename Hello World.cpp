#include <iostream>
using namespace std;
// Задание 1
/*
int main() {
	double price, price1;
	int code2, code1;
	double quantity2, quantity1;
	double discount, discount2;
	int discount1;
	double res;

	discount = 1 - 20.0 / 100.0;
	discount2 = 1 - 15.0 / 100.0;

	setlocale(LC_ALL, "ru");
	cout << "Выберете пиццу:" << endl;
	cout << "\t10 - Пиперони\n";
	cout << "\t11 - 4 сыра\n";
	cout << "\t12 - Маргарита\n";
	cout << "\t13 - Диабло\n";
	cout << "Введите код: ";
	cin >> code1;
	cout << "Введите количесто: ";
	cin >> quantity1;
	discount1 = quantity1 / 5;
	cout << "Выберете напиток:" << endl;
	cout << "\t20 - МилкШейк\n";
	cout << "\t21 - Лимонад\n";
	cout << "\t22 - Кофе\n";
	cout << "Введите код: ";
	cin >> code2;
	cout << "Введите количесто: ";
	cin >> quantity2;
	switch (code1) {
	case 10:
		cout << "\n\tВыбрана пиперони в размере " << quantity1 << endl;
		price = quantity1 * 6;
		cout << "\n\tЦена - " << price << "$" << endl;
		break;
	case 11:
		cout << "\n\tВыбрана 4 сыра в размере " << quantity1 << endl;
		price = quantity1 * 5;
		cout << "\n\tЦена - " << price << "$" << endl;
		break;
	case 12:
		cout << "\n\tВыбрана маргарита в размере " << quantity1 << endl;
		price = quantity1 * 7;
		cout << "\n\tЦена - " << price << "$" << endl;
		break;
	case 13:
		cout << "\n\tВыбрана диабло в размере " << quantity1 << endl;
		price = quantity1 * 9;
		cout << "\n\tЦена - " << price << "$" << endl;
		break;
	default:
		cout << "\n\tТакой пиццы нет" << endl;
		break;
	}
	switch (code2) {
	case 20:
		int milkshake;
		cout << "\n\tВыбран милкшейк в размере " << quantity2 << endl;
		price1 = quantity2 * 4;
		
		if (quantity2 > 3) {
			price1 *= discount2;
		}
		cout << "\n\tЦена - " << price1 << "$" << endl;
		break;
	case 21:
		cout << "\n\tВыбран лимонад в размере " << quantity2 << endl;
		price1 = quantity2 * 2;
		cout << "\n\tЦена - " << price1 << "$" << endl;
		break;
	case 22:
		cout << "\n\tВыбран кофе в размере " << quantity2 << endl;
		price1 = quantity2 * 1;
		cout << "\n\tЦена - " << price1 << "$" << endl;
		break;
	default:
		cout << "\n\tТакого напитка нет" << endl;
		break;
	}
	res = price + price1;
	res -= discount1;
	if (res > 50) {
		res *= discount;
	}
	cout << "\n\tИтоговая цена - " << res << "$" << endl;
	return 0;
} 
*/

//Задание 2

int main() {
	int meneger1, meneger2, meneger3, best, thebest;
	double salary1, salary2, salary3;
	
	
	setlocale(LC_ALL, "ru");
	cout << "Введите уровни продаж для трех менеджеров\nУровень каждого менджера должен быть разный\n";
	cout << "Введите уровень продаж для первого менеджера: ";
	cin >> meneger1;
	cout << "Введите уровень продаж для второго менеджера: ";
	cin >> meneger2;
	cout << "Введите уровень продаж для третьего менеджера: ";
	cin >> meneger3;
	
	if (meneger1 <= 500) {
		salary1 = 200 + meneger1 * 0.03;
	}
	else if (meneger1 >= 500 && meneger1 < 1000) {
		salary1 = 200 + meneger1 * 0.05;
	}
	else {
		salary1 = 200 + meneger1 * 0.09;
	}
	
	if (meneger2 <= 500) {
		salary2 = 200 + meneger2 * 0.03;
	}
	else if (meneger2 >= 500 && meneger2 < 1000) {
		salary2 = 200 + meneger2 * 0.05;
	}
	else {
		salary2 = 200 + meneger2 * 0.09;
	}

	if (meneger3 <= 500) {
		salary3 = 200 + meneger3 * 0.03;
	}
	else if (meneger3 >= 500 && meneger3 < 1000) {
		salary3 = 200 + meneger3 * 0.05;
	}
	else {
		salary3 = 200 + meneger3 * 0.09;
	}

	if (meneger1 > meneger2) {
		best = 1;
		thebest = meneger1;
	}
	else {
		best = 2;
		thebest = meneger2;
	} if (thebest < meneger3) {
		best = 3;
		thebest = meneger3;
	}
	switch (best) {
	case 1:
		salary1 += 200;
		break;
	case 2:
		salary2 += 200;
		break;
	case 3:
		salary3 += 200;
		break;
	}
	cout << "Лучший менеджер - " << best << " получает премию в виде 200$" << endl;
	cout << "Зарплата первого менеджера составляет - " << salary1 << "$" << endl;
	cout << "Зарплата второго менеджера составляет - " << salary2 << "$" << endl;
	cout << "Зарплата третьего менеджера составляет - " << salary3 << "$" << endl;
	return 0;
}