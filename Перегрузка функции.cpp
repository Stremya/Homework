#include <iostream>
#include <ctime>
#include <cstdlib>
#include <climits>
using namespace std;


// Задание 1
int Pow(int a, int n) {
	if (n == 0) return 1;

	return a * Pow(a, n - 1);
}

// Задание 2
void Stars(int n) {
	if (n == 0) return;
	cout << "*";
	Stars(n - 1);
}

// Задание 3
int Sum(int a, int b) {
	if (a > b) return 0;
	return a + Sum(a + 1, b);
}

// Задание 4

const int SIZE = 100;
const int VER_SIZE = 10;

int minIndex = 0;
int minSum = INT_MAX;

void findMinSum(int arr[], int ind) {
	if (ind > SIZE - VER_SIZE) return;

	int curSum = 0;
	for (int i = ind; i < ind + VER_SIZE; i++) {
		curSum += arr[i];
	}

	if (curSum < minSum) {
		minSum = curSum;
		minIndex = ind;
	}

	findMinSum(arr, ind + 1);
}

//Задание 5
// 1. Максимум двух целых чисел
int findMax(int a, int b) {
	return (a > b) ? a : b;
}

// 2. Максимум трёх целых чисел
int findMax(int a, int b, int c) {
	return findMax(findMax(a, b), c);
}

// 3. Максимум в одномерном массиве
int findMax(int arr[], int size) {
	if (size == 0) return 0; // или бросить ошибку
	int maxVal = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] > maxVal) maxVal = arr[i];
	}
	return maxVal;
}

// 4. Максимум в двумерном массиве
int findMax(int* arr, int rows, int cols) { // пример: 5 столбцов
	int maxVal = arr[0];
	for (int i = 0; i < rows * cols; i++) {
			if (arr[i] > maxVal) maxVal = arr[i];
	}
	return maxVal;
}

// 5. Максимум в трёхмерном массиве
int findMax(int* arr, int depth, int rows, int cols) { // пример: 5x5
	int maxVal = arr[0];
	for (int i = 0; i < depth * rows * cols; i++) {
		if (arr[i] > maxVal) maxVal = arr[i]; 
	}
	return maxVal;
}
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(0));
	cout << "Задание 1" << endl;
	
	int num, pow;
	cout << "Введите число: ";
	cin >> num;
	cout << "Введите степень: ";
	cin >> pow;
	cout << "Число " << num << " в степени " << pow << " = " << Pow(num, pow);
	
	cout << endl << endl << "Задание 2" << endl;
	
	int line;
	cout << "Введите длину линии: ";
	cin >> line;
	Stars(line);

	cout << endl << endl << "Задание 3" << endl;

	int num1, num2;
	cout << "Введите числа: ";
	cin >> num1 >> num2;
	cout << "Сумма чисел от " << num1 << " до " << num2 << " - " << Sum(num1, num2);

	cout << endl << endl << "Задание 4" << endl;

	int arr[SIZE];
	cout << "Массив:" << endl;
	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 20 + 1;
		cout << arr[i] << " ";
		if ((i + 1) % 10 == 0) cout << endl;
	}

	minSum = INT_MAX;
	minIndex = 0;

	findMinSum(arr, 0);

	cout << "Минимальная сумма: " << minSum << endl;
	cout << "Начинается с индекса: " << minIndex << endl;
	for (int i = minIndex; i < minIndex + VER_SIZE; i++) {
		cout << arr[i] << " ";
	}
	
	cout << endl << endl << "Задание 5" << endl;

	cout << "Максимум из 8 и 3: " << findMax(8, 3) << endl;

	cout << "Максимум из 5, 12, 9: " << findMax(5, 12, 9) << endl;

	int arr1[] = { 4, 7, 1, 9, 2 };
	cout << "Максимум в [4,7,1,9,2]: " << findMax(arr1, 5) << endl;

	int arr2[2][3] = { {1, 5, 3}, {8, 2, 6} };
	cout << "Максимум в двумерном массиве: " << findMax((int*)arr2, 2, 3) << endl;

	int arr3[2][2][2] = {
		{{1, 3}, {5, 7}},
		{{9, 11}, {13, 15}}
	};
	cout << "Максимум в трёхмерном массиве: " << findMax((int*)arr3, 2, 2, 2) << endl;
	return 0;
}

