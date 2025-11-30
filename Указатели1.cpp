#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Определяет наибольшее из двух чисел
int MaxVal(int* pa, int* pb) {
	int max = *pa;
	if (*pb > *pa) max = *pb;
	return max;
}

// Определяет знак числа
void SignOfCount(int* pa) {
	if (*pa > 0) {
		cout << "Число " << *pa << " положительно" << endl;
	}
	else if (*pa < 0) {
		cout << "Число " << *pa << " отрицательно" << endl;
	}
	else {
		cout << "Число " << *pa << " равно 0" << endl;
	}
}

// Обмен значениями двух переменных
void Exchange(int* pa, int* pb) {
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}

// Примитивный калькулятор
void Calculator(int* pa, int* pb, char* op) {
	int sum, diff, comp, div;
	switch (*op) {
	case '+':
		sum = *pa + *pb;
		cout << "Ответ: " << sum << endl;
		break;
	case '-':
		diff = *pa - *pb;
		cout << "Ответ: " << diff << endl;
		break;
	case '*':
		comp = *pa * *pb;
		cout << "Ответ: " << comp << endl;
		break;
	case '/':
		div = *pa / *pb;
		cout << "Ответ: " << div << endl;
		break;
	default:
		cout << "Такого действия нет" << endl;
	}
}

// Сумма элементов в массиве
int SumMatrix(int* arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(arr + i); // Арифметика указателей
	}
	return sum;
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(0));

	cout << "Задание 1" << endl << endl;
	int val1, val2;
	cout << "Введите два числа: ";
	cin >> val1 >> val2;
	cout << "Наибольшее число из " << val1 << " и " << val2 << " - " << MaxVal(&val1, &val2) << endl;

	cout << "---------------------------------" << endl;
	cout << "Задание 2" << endl << endl;

	int num;
	cout << "Введите число: ";
	cin >> num;
	SignOfCount(&num);

	cout << "---------------------------------" << endl;
	cout << "Задание 3" << endl << endl;

	int num1, num2;
	cout << "Введите два числa: ";
	cin >> num1 >> num2;
	cout << "Изначальные данные:\nПервая переменная - " << num1 << "\nВторая переменная - " << num2 << endl;
	Exchange(&num1, &num2);
	cout << "Конечные данные:\nПервая переменная - " << num1 << "\nВторая переменная - " << num2 << endl;

	cout << "---------------------------------" << endl;
	cout << "Задание 4" << endl << endl;

	int count1, count2;
	char op;
	cout << "Введите первое число: ";
	cin >> count1;
	cout << "Введите второе число: ";
	cin >> count2;
	cout << "Введите действие между ними: ";
	cin >> op;
	Calculator(&count1, &count2, &op);

	cout << "---------------------------------" << endl;
	cout << "Задание 5" << endl << endl;

	const int size = 10;
	int arr[size];

	cout << "Массив:" << endl;
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 10 + 1;
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Сумма всех элементов в массиве равна " << SumMatrix(arr, size) << endl;

	return 0;
}

