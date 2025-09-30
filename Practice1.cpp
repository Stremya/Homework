#include <iostream>
#include <cstdlib> // библиотека для srand(), rand()
#include <ctime> // для time(), time_t, difftime()
using namespace std;
// Задание 1
int task1() {
	srand(time(0)); //устанавливаем начальное значение

	int minimum = 1;
	int maximum = 500;
	int random_number = rand() % (maximum - minimum + 1) + 1; // генерация случайных чисел по формуле
	int attempts = 0;
	int number;
	bool a = false;
	cout << "Угадайте число от 1 до 500\n" << endl;
	cout << "Если хотите выйти из игры введите 0\n" << endl;
	time_t start = time(0); //время начала
	do {
		cout << "Введите число: ";
		cin >> number;
		// выход из игры
		if (number == 0) {
			cout << "\nВы вышли из игры " << endl;
			break;
		}
		
		attempts++;
		
		if (number == random_number) {
			time_t end = time(0); // время окончания 
			double seconds = difftime(end, start); // функция difftime расчитывает разницу между двумя временами
			cout << "Вы отгадали число с " << attempts << "-й попытки!" << endl;
			cout << "Вы играли " << seconds << " секунд" << endl;
			a = true;
		}
		else if (number < random_number) {
			cout << "\nВаше число меньше загаданного" << endl;
		}
		else {
			cout << "\nВаше число больше загаданного" << endl;
		}
		
	} while (!a);

	return 0;
}

// Задание 2
int task2() {
	double ruble;
	double dollar;
	double tugrik;
	double yuan;
	
	int convert;
	
	int convert_ruble, convert_dollar, convert_tugrik, convert_yuan;
	
	double res1_1, res1_2, res1_3;
	
	double res2_1, res2_2, res2_3;
	
	double res3_1, res3_2, res3_3;
	
	double res4_1, res4_2, res4_3;
	
	do {
		cout << "Какую валюту вы хотите конвертировать?" << endl;
		cout << "\t1. Рубль\n";
		cout << "\t2. Доллар\n";
		cout << "\t3. Тугрик\n";
		cout << "\t4. Юань\n";
		cout << "0 - Выход\n";
		cout << "Ваш выбор: ";
		cin >> convert;
		if (convert == 0) {
			cout << "Спасибо, до свидания!";
			break;
		}
		switch (convert) {
		case 1:
			cout << "В какую валюту хотите конвертировать Рубль?\n";
			cout << "\t1. Доллар\n";
			cout << "\t2. Тугрик\n";
			cout << "\t3. Юань\n";
			cin >> convert_ruble;
			switch (convert_ruble) {
			case 1:	
				cout << "Введите количество рублей: ";
				cin >> ruble;
				res1_1 = ruble * 0.012067;
				cout << "Вы получили " << res1_1 << " долларов" << endl;
				break;
			case 2: 
				cout << "Введите количество рублей: ";
				cin >> ruble;
				res1_2 = ruble * 43.38;
				cout << "Вы получили " << res1_2 << " тугриков" << endl;
				break;
			case 3:
				cout << "Введите количество рублей: ";
				cin >> ruble;
				res1_3 = ruble * 0.086223;
				cout << "Вы получили " << res1_3 << " юаней" << endl;
				break;
			}
			break;
		case 2:
			cout << "В какую валюту хотите конвертировать Доллар?\n";
			cout << "\t1. Рубль\n";
			cout << "\t2. Тугрик\n";
			cout << "\t3. Юань\n";
			cin >> convert_dollar;
			switch (convert_dollar) {
			case 1:
				cout << "Введите количество долларов: ";
				cin >> dollar;
				res2_1 = dollar * 82.87;
				cout << "Вы получили " << res2_1 << " рублей" << endl;
				break;
			case 2:
				cout << "Введите количество долларов: ";
				cin >> dollar;
				res2_2 = dollar * 3594.64;
				cout << "Вы получили " << res2_2 << " тугриков" << endl;
				break;
			case 3:
				cout << "Введите количество долларов: ";
				cin >> dollar;
				res2_3 = dollar * 7.12;
				cout << "Вы получили " << res2_3 << " юаней" << endl;
				break;
			}
			break;
		case 3:
			cout << "В какую валюту хотите конвертировать Тугрик?\n";
			cout << "\t1. Рубль\n";
			cout << "\t2. Доллар\n";
			cout << "\t3. Юань\n";
			cin >> convert_tugrik;
			switch (convert_tugrik) {
			case 1:
				cout << "Введите количество тугриков: ";
				cin >> tugrik;
				res3_1 = tugrik * 0.023053;
				cout << "Вы получили " << res3_1 << " рублей" << endl;
				break;
			case 2:
				cout << "Введите количество тугриков: ";
				cin >> tugrik;
				res3_2 = tugrik * 0.000278;
				cout << "Вы получили " << res3_2 << " долларов" << endl;
				break;
			case 3:
				cout << "Введите количество тугриков: ";
				cin >> tugrik;
				res3_3 = tugrik * 0.00198;
				cout << "Вы получили " << res3_3 << " юаней" << endl;
				break;
			}
			break;
		case 4:
			cout << "В какую валюту хотите конвертировать Юань?\n";
			cout << "\t1. Рубль\n";
			cout << "\t2. Доллар\n";
			cout << "\t3. Тугрик\n";
			cin >> convert_yuan;
			switch (convert_yuan) {
			case 1:
				cout << "Введите количество юаней: ";
				cin >> yuan;
				res4_1 = yuan * 11.6;
				cout << "Вы получили " << res4_1 << " рублей" << endl;
				break;
			case 2:
				cout << "Введите количество юаней: ";
				cin >> yuan;
				res4_2 = yuan * 0.1405;
				cout << "Вы получили " << res4_2 << " долларов" << endl;
				break;
			case 3:
				cout << "Введите количество юаней: ";
				cin >> yuan;
				res4_3 = yuan * 504.99;
				cout << "Вы получили " << res4_3 << " тугриков" << endl;
				break;
			}
			break;
		}
	} while (true);

	return 0;
}




int main() {
	int choice;
	setlocale(LC_ALL, "ru");
	cout << "Введите задание(1, 2)\n" << endl;
	cin >> choice;
	if (choice == 1) {
		task1();
	} 
	else if (choice == 2) {
		task2();
	}
	return 0;
}