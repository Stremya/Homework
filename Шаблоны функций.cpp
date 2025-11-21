#include <iostream>
#include <cmath>
using namespace std;

/*
// Задание 1
template <typename T>
T Avrg(T arr[], int size) {
	T sum = T(0);
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum / size;
}

int main() {
    setlocale(LC_ALL, "ru");
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 1.5, 2.5, 3.5 };

	cout << "Среднее целых: " << Avrg(arr1, 5) << endl;
	cout << "Среднее дробных: " << Avrg(arr2, 3) << endl;

	return 0;
}
*/

/*
// Задание 2
// Линейное уравнение
template <typename T>
T Equation(T a, T b) {
	if (a == T(0)) {
		cout << "Линейное уравнение не имеет решения (a=0)" << endl;
		return T(0);
	}
	return -b / a;
}

// Квадратное уравнение 
template <typename T>
void Equation(T a, T b, T c) {
	if (a == T(0)) {
		cout << "Это не квадратичное уравнение (a=0)" << endl;
		return;
	}

	T D = b * b - 4 * a * c;

	if (D < T(0)) {
		cout << "Корней нет (D < 0)" << endl;
	}
	else if (D == T(0)) {
		T x = -b / (2 * a);
		cout << "Один корень: x = " << x << endl;
	}
	else {
		T sqrtD = sqrt(D);
		T x1 = (-b + sqrtD) / (2 * a);
		T x2 = (-b - sqrtD) / (2 * a);
		cout << "Два корня: x1 = " << x1 << ", x2 = " << x2 << endl;
	}
}

int main() {
    setlocale(LC_ALL, "ru");
	cout << "Линейное уравнение 2x + 4 = 0:" << endl;
	cout << "x = " << Equation(2.0, 4.0) << endl;

	cout << "\nКвадратное уравнение x^2 - 5x + 6 = 0:" << endl;
	Equation(1.0, -5.0, 6.0);

	return 0;
}
*/

/*
// Задание 3
double roundToPrecision(double value, int precision) {
	double factor = pow(10.0, precision);
	return round(value * factor) / factor;
}

int main() {
	setlocale(LC_ALL, "ru");
	double num = 3.1415926535;
	cout << "Исходное число: " << num << endl;
	cout << "Округлено до 2 знаков: " << roundToPrecision(num, 2) << endl;
	cout << "Округлено до 4 знаков: " << roundToPrecision(num, 4) << endl;

	return 0;
}
*/

/*
// Задание 4
// Максимум в одномерном массиве
template <typename T>
T findMax(T* arr, int size) {
	T max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

// Максимум в двухмерном массиве
template <typename T>
T findMax(T* arr, int row, int col) {
	T max = arr[0];
	for (int i = 0; i < row * col; i++) {
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

// Максимум в трехмерном массиве
template <typename T>
T findMax(T* arr, int depth, int row, int col) {
	T max = arr[0];
	for (int i = 0; i < depth * row * col; i++) {
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

int main() {
	setlocale(LC_ALL, "ru");

	int arr1[] = { 3, 5, 7, 2, 4 };

	int arr2[3][3] = {
		{2, 6, 4},
		{8, 2, 6}
	};

	int arr3[2][2][2] = {
		{{1, 3}, {5, 7}},
		{{9, 11}, {13, 15}}
	};

	cout << "Максимум в одномерном: " << findMax((int*)arr1, 5) << endl;
	cout << "Максимум в двумерном: " << findMax((int*)arr2, 3, 3) << endl;
	cout << "Максимум в трёхмерном: " << findMax((int*)arr3, 2, 2, 2) << endl;

	return 0;
}
*/


/*
// Задание 5
// Максимум двух целых
int findMax(int a, int b) {
	return (a > b) ? a : b;
}

// Максимум трёх целых
int findMax(int a, int b, int c) {
	return findMax(findMax(a, b), c);
}

int main() {
    setlocale(LC_ALL, "ru");
	cout << "Максимум из 8 и 3: " << findMax(8, 3) << endl;
	cout << "Максимум из 5, 12, 9: " << findMax(5, 12, 9) << endl;

	return 0;
}
*/