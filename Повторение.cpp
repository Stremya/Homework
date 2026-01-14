#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

// Складывает два числа
void Sum(int a, int b) {
	int sum = a + b;
	cout << "Сумма двух чисел = " << sum << endl;
}

// Переводит из градуса Цельсия в градусы по Фаренгейту
void CinF(int a) {
	int F = a * 9 / 5 + 32;
	cout << a << "C = " << F << "F";
}

// Проверяет является ли число четным или нечетным
void EvenOrOdd(int a) {
	if (a % 2 == 0) {
		cout << "Число четное" << endl;
	}
	else {
		cout << "Число нечетное" << endl;
	}
}

// Проверяет является ли год високосным
void LeapYear(int a) {
	if (a % 4 == 0 || a % 400 == 0 && a % 100 != 0) {
		cout << "Год високосный" << endl;
	}
	else {
		cout << "Год не високосный" << endl;
	}
}

// Вычисляет сумму всех элементов в цикле for от 1 до N
void SumInCicle(int N) {
	int sum = 0;
	for (int i = 1; i <= N; i++) {
		sum += i;
	}
	cout << "Сумма элементов в цикле от 1 до N = " << sum << endl;
}

// Выводит таблицу умножения для числа N
void MultiplTable(int N) {
	for (int i = 1; i <= 10; i++) {
		int pr = N * i;
		cout << N << " * " << i << " = " << pr << endl;
	}
}

// Минимальный элемент в массиве
void MinArr(int* arr, int size) {
	int min = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] < min) min = arr[i];
	}
	cout << "Минимальный элементв массиве: " << min << endl;
}

// Сумма элементов в каждой строке матрицы
void SumMatrix(int (*arr)[3], int row, int col) {

	for (int i = 0; i < row; i++) {
		int sum = 0;
		for (int j = 0; j < col; j++) {
			sum += arr[i][j];
		}
		cout << "Сумма всех элементов " << i << " строки: " << sum << endl;
	}
}

// Находит максимальный элемент из двух
void Max(int a, int b) {
	int max = a;
	if (a < b) max = b;
	cout << "Максимальный элемент - " << max << endl;
}

// Проверяет является ли число простым
bool isPrime(int a) {
	if (a <= 1) return false;
	if (a == 2) return true;
	if (a % 2 == 0) return false;

	for (int i = 3; i <= sqrt(a); i += 2) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
}

// Делает обмен значений двух переменных с помощью указателей
void ptrExchange(int* pa, int* pb) {
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

// Считает сумму элементов в массиве через указатели
void ptrSum(int* arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	cout << "Сумма элементов в массиве: " << sum << endl;
} 

// Подсчитывает сколько символов в строке
void StrLen(char* a) {
	int count = 0;
	while (a[count] != '\0') {
		count++;
	}
	cout << "Длина строки \"" << a << "\" равна " << count << " символам." << endl;
}

// Считает количество гласных букв в строке
bool isVowel(char c) {
	c = tolower(c);
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
	setlocale(LC_ALL, "ru");
	int var1, var2;
	cout << "Задание 1.1" << endl;
	cout << "Введите два числа: ";
	cin >> var1 >> var2;
	Sum(var1, var2);

	cout << endl;
	cout << "=========================================" << endl;

	cout << "Задание 1.2" << endl;
	int C;
	cout << "Введите градусы Цельсия: ";
	cin >> C;
	CinF(C);

	cout << endl;
	cout << "=========================================" << endl;

	cout << "Задание 2.1" << endl;
	int var2_1;
	cout << "Введите число: ";
	cin >> var2_1;
	EvenOrOdd(var2_1);

	cout << endl;
	cout << "=========================================" << endl;

	cout << "Задание 2.2" << endl;
	long var2_2;
	cout << "Введите год: ";
	cin >> var2_2;
	LeapYear(var2_2);

	cout << endl;
	cout << "=========================================" << endl;

	cout << "Задание 3.1" << endl;
	int var3_1;
	cout << "Введите число N: ";
	cin >> var3_1;
	SumInCicle(var3_1);

	cout << endl;
	cout << "=========================================" << endl;

	cout << "Задание 3.2" << endl;
	int var3_2;
	cout << "Введите число N: ";
	cin >> var3_2;
	MultiplTable(var3_2);

	cout << endl;
	cout << "=========================================" << endl;

	srand(time(0));
	cout << "Задание 4.1" << endl;
	const int size1 = 10;
	int arr4_1[size1];

	cout << "Массив:" << endl;
	for (int i = 0; i < size1; i++) {
		arr4_1[i] = rand() % 10 + 1;
		cout << arr4_1[i] << " ";
	}
	MinArr(arr4_1, size1);

	cout << endl;
	cout << "=========================================" << endl;

	cout << "Задание 4.2" << endl;
	const int row = 3;
	const int col = 3;
	int arr4_2[row][col];

	cout << "Массив:" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr4_2[i][j] = rand() % 10 + 1;
			cout << arr4_2[i][j] << " ";
		}
		cout << endl;
	}
	SumMatrix(arr4_2, row, col);

	cout << endl;
	cout << "=========================================" << endl;

	cout << "Задание 5.1" << endl;
	int val3, val4;
	cout << "Введите два числа: ";
	cin >> val3 >> val4;
	Max(val3, val4);

	cout << endl;
	cout << "=========================================" << endl;

	cout << "Задание 5.2" << endl;
	int var5_2;
	cout << "Введите число: ";
	cin >> var5_2;

	if (isPrime(var5_2)) {
		cout << "Число простое" << endl;
	}
	else {
		cout << "Число не простое" << endl;
	}

	cout << endl;
	cout << "=========================================" << endl;

	cout << "Задание 6.1" << endl;
	int var5, var6;
	cout << "Введите два числа: ";
	cin >> var5 >> var6;
	cout << "До: var1 = " << var5 << ", var2 = " << var6 << endl;

	int* pvar5 = &var5;
	int* pvar6 = &var6;

	ptrExchange(pvar5, pvar6);

	cout << "После: var1 = " << var5 << ", var2 = " << var6 << endl;

	cout << endl;
	cout << "=========================================" << endl;

	cout << "Задание 6.2" << endl;
	const int size2 = 5;
	int* arr6_2 = new int[size2];
	
	cout << "Массив:" << endl;
	for (int i = 0; i < size2; i++) {
		arr6_2[i] = rand() % 10 + 1;
		cout << arr6_2[i] << " ";
	}
	ptrSum(arr6_2, size2);

	delete[] arr6_2;

	cout << endl;
	cout << "=========================================" << endl;

	cout << "Задание 7.1" << endl;
	char str[100];
	cout << "Введите строку: ";
	cin.getline(str, 100);
	StrLen(str);

	cout << endl;
	cout << "=========================================" << endl;

	cout << "Задание 7.2" << endl;
	char str1[100];
	cout << "Введите строку: ";
	cin.getline(str, 100);

	int vowelCount = 0;
	for (int i = 0; str1[i] != '\0'; i++) {
		if (isVowel(str1[i])) {
			vowelCount++;
		}
	}
	cout << "Количество гласных: " << vowelCount << endl;
	return 0;
}

