#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

/*
// Задание 1
// Копирует элементы из первого массива во второй
void CopyArr(int* arr1, int* arr2, int size) {
	for (int i = 0; i < size; i++) {
		*arr2 = *arr1;
		arr1++;
		arr2++;
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(0));
	
	int arr1[10];
	int arr2[10];

	cout << "Исходный массив:" << endl;
	for (int i = 0; i < 10; i++) {
		arr1[i] = rand() % 50 + 1;
		cout << arr1[i] << " ";
	}
	cout << endl;

	int* p_arr1 = arr1;
	int* p_arr2 = arr2;

	CopyArr(p_arr1, p_arr2, 10);
	
	cout << "Скопированный массив:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr2[i] << " ";
	}
	cout << endl;
	return 0;
}
*/

/*
// Задание 2
// Переворачивает массив
void ReverseArr(int* arr, int size) {
	for (int i = 0; i < size / 2; i++) {
		int temp = *(arr + i);
		*(arr + i) = *(arr + size - 1 - i);
		*(arr + size - 1 - i) = temp;
 	}
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(0));

	int arr[10];
	cout << "Исходный массив:" << endl;
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 30 + 1;
		cout << arr[i] << " ";
	}
	cout << endl;

	int* p_arr = arr;

	ReverseArr(p_arr, 10);

	cout << "Перевернутый массив:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
*/


// Задание 3
// Переворачивает массив
void ReverseArr(int* arr1, int* arr2, int size) {
	for (int i = 0; i < size; i++) {
		*(arr2 + size - 1 - i) = *(arr1 + i);
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(0));

	int arr1[10];
	int arr2[10];

	cout << "Исходный массив:" << endl;
	for (int i = 0; i < 10; i++) {
		arr1[i] = rand() % 30 + 1;
		cout << arr1[i] << " ";
	}
	cout << endl;

	int* p_arr1 = arr1;
	int* p_arr2 = arr2;

	ReverseArr(p_arr1, p_arr2, 10);

	cout << "Перевернутый массив:" << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr2[i] << " ";
	}
	cout << endl;
	return 0;
}
