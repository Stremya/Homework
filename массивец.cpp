#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// задание 1
/*
int main()
{
	const int size = 8; // синтаксическая ошибка
	double arr[size] = { -5.7, 6.0, 2, 0, -4.7, 6, 8.1, -4 }; // синтаксическая ошибка 9 переменных
	double positive = 0.0; // исправил
	for (int i = size - 1; i >= 0; i--) // логическая ошибка, int i = size это 9 переменная по индексу 8, всего в массиве 8 переменных 
	{
		if (arr[i] > 0)
		{
			positive = arr[i]; // логическая ошибка, разные типы данных
			break;
		}
	}
	double negative = 0.0; // исправил
	for (int i = 0; i < size; i++) 
	{
		if (arr[i] < 0)
		{
			negative = arr[i]; // логическая ошибка, разные типы данных
			break;
		}
	}

	
	cout << "Last positive number: " << positive <<
		endl;
	cout << "First negatine number: " << negative <<
		endl;
	return 0;
}
*/

// Задание 2
/*
int main() {
	setlocale(LC_ALL, "ru");
	const int size = 40;
	int arr[size];
    
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 6 + 1;
    }

	int flat;
	cout << "Введите номер квартиры(1-40): ";
	cin >> flat;

	cout << "В квартире номер " << flat << " живет " << arr[flat - 1] << " человек" << endl;

	int neighbor;
	if (flat % 2 == 0) {
		neighbor = flat - 1;
	}
	else {
		neighbor = flat + 1;
	}

	cout << "На этом этаже еще " << arr[neighbor - 1] << " соседей" << endl;
	
	int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
	for (int i = 0; i < 10; i++) {
		sum1 += arr[i];
	}
	for (int i = 10; i < 20; i++) {
		sum2 += arr[i];
	}
	for (int i = 20; i < 30; i++) {
		sum3 += arr[i];
	}
	for (int i = 30; i < 40; i++) {
		sum4 += arr[i];
	}

	cout << "Всего жильцов в 1 подъезде - " << sum1 << endl;
	cout << "Всего жильцов в 2 подъезде - " << sum2 << endl;
	cout << "Всего жильцов в 3 подъезде - " << sum3 << endl;
	cout << "Всего жильцов в 4 подъезде - " << sum4 << endl;

	cout << "Многодетные семьи живут в квартирах:" << endl;
	for (int i = 0; i < 40; i++) {
		if (arr[i] > 4) {
			int flat_number = i + 1;
			cout << "Квартира " << flat_number << " (" << arr[i] << " человек)" << endl;
		}
	}
	return 0;
}
*/

// Задание 3
/*
int main() {
	srand(time(0));
	setlocale(LC_ALL, "ru");
	const int size = 31;
	int arr[size];

	cout << "Температура за январь:" << endl;
	for (int i = 0; i < size; i++) {
		arr[i] = -50 + rand() % 31;
		cout << i << " День - " << arr[i] << " градусов" << endl;
	}

	int sum = 0;
	double avrg = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	avrg = (double)sum / size;
	cout << "Средняя температура за январь - " << avrg << endl;

	int low = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] < -39) {
			low++;
		}
	}

	cout << "Температура падала ниже указанной метки (-40 градусов) " << low << " раз" << endl;
	return 0;
}
*/
// Задание 4
/*
int main() {
	srand(time(0));
	setlocale(LC_ALL, "ru");
	const int size = 10;
	int arr[size];

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 11 + 10;
		cout << arr[i] << "к$ ";
	}

	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	
	int first_number = -1;
	for (int i = 0; i < size; i++) {
		if (arr[i] == max) {
			first_number = i;
			break;
		}
	}

	int last_number = -1;
	for (int i = size - 1; i >= 0; i--) {
		if (arr[i] == max) {
			last_number = i;
			break;
		}
	}
	cout << "\nСамая дорогая машина - " << max << "к$" << endl;
	cout << "Номер первой дорогой машины - " << first_number << endl;
	cout << "Номер последней дорогой машины - " << last_number << endl;
	return 0;
}
*/
// Задание 5
/*
int main() {
	srand(time(0));
	setlocale(LC_ALL, "ru");
	const int size = 10;
	int array[size];
	bool a[size] = {false};
	for (int i = 0; i < size; i++) {
		array[i] = rand() % 10 + 1;
		cout << array[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size; i++) {
		if (a[i]) continue;
		int count = 0;
		for (int j = 0; j < size; j++) {
			if (array[j] == array[i]) {
				count++;
			}
		}

		if (count >= 2) {
			cout << array[i] << " повторяется " << count << " раз" << endl;
			for (int j = 0; j < size; j++) {
				if (array[j] == array[i]) {
					a[j] = true;
				}
			}
		}
	}
	return 0;
}
*/

int main() {
	srand(time(0));
	setlocale(LC_ALL, "ru");
	const int A = 10;
	int arr1[A] = { 0 };
	const int B = 10;
	int arr2[B] = { 0 };
	const int X = 20;
	int arr3[X] = { 0 };

	cout << "Массив A:" << endl;
	for (int i = 0; i < A; i++) {
		arr1[i] = rand() % 10 + 1;
		cout << arr1[i] << " ";
	}
	cout << endl;
	cout << "Массив B:" << endl;
	for (int i = 0; i < B; i++) {
		arr2[i] = rand() % 10 + 1;
		cout << arr2[i] << " ";
	}
	cout << endl;
	int index3 = 0;
	for (int i = 0; i < A; i++) {
		arr3[index3++] = arr1[i];
		if (i < B) {
			arr3[index3++] = arr2[i];
		}

	}
	cout << "Массив X(чередование):" << endl;
	for (int i = 0; i < index3; i++) {
		cout << arr3[i] << " ";
	}
	cout << endl;
	cout << "Массив X(следование):" << endl;
	for (int i = 0; i < A; i++) {
		cout << arr1[i] << " ";
	}
	for (int i = 0; i < B; i++) {
		cout << arr2[i] << " ";
	}
	return 0;
}