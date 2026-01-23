#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

// Задание 1.1
/*
int sum(int n, int m) {
	return n + m;
}

int sub(int n, int m) {
	return n - m;
}

int mul(int n, int m) {
	return n * m;
}

int division(int n, int m) {
	return n / m;
}

int main() {
	int (*op)(int, int);

	int a, b;

	char symb;

	cout << "Enter a two counts: ";
	cin >> a >> b;
	cout << "Enter operation: ";
	cin >> symb;

	op = sum;

	while (symb != '0') {
		switch (symb) {
		case '+':
			op = sum;
			symb = '0';
			break;
		case '-':
			op = sub;
			symb = '0';
			break;
		case '*':
			op = mul;
			symb = '0';
			break;
		case '/':
			op = division;
			symb = '0';
			break;
		}
		int d = (*op)(a, b);
		cout << "Result: " << d << endl;
	}
	return 0;
}
*/

// Задание 1.2
/*
int compareStrings(const char* a, const char* b) {
	while (*a != '\0' && *b != '\0') {
		if (*a != *b) {
			return *a - *b;
		}
		a++;
		b++;
	}
	return *a - *b;
}

int main() {
	int (*comp)(const char*, const char*) = compareStrings;

	char str1[100], str2[100];
	cout << "Enter first string: ";
	cin.getline(str1, 100);

	cout << "Enter second string: ";
	cin.getline(str2, 100);

	int res = (comp)(str1, str2);

	if (res > 0) cout << "First string more" << endl;
	else if (res < 0) cout << "Second string more" << endl;
	else cout << "Equal" << endl;

	return 0;
}
*/

// Задание 2.1
/*
// Убывание
bool Decreasing(int a, int b) {
	return a < b;
}

// Возрастание
bool Increasing(int a, int b) {
	return a > b;
}

void bubbleSort(int arr[], int n, bool (*comp)(int, int)) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (comp(arr[j], arr[j + 1])) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
} 

int main() {
	int arr[] = { 5, 3, 7, 4 };
	int size = 4;

	cout << "The original array: ";
	for (int x : arr) cout << x << " ";
	cout << endl;

	bubbleSort(arr, size, Increasing);
	cout << "Ascending order: ";
	for (int x : arr) cout << x << " ";
	cout << endl;

	bubbleSort(arr, size, Decreasing);
	cout << "Decreasing order: ";
	for (int x : arr) cout << x << " ";
	cout << endl;

	return 0;
}
*/

// Задание 3.2
/*
int increment(int a) {
	return a + 1;
}

int square(int a) {
	return a * a;
}

int negate(int a) {
	return a * (-1);
}

int main() {
	int x;
	cout << "Enter number: ";
	cin >> x;

	int (*transformers[3])(int) = {increment, square, negate};

	cout << endl << "Results:" << endl;

	int result = x;

	for (int i = 0; i < 3; i++) {
		result = transformers[i](result);

		switch (i) {
		case 0:
			cout << "After magnification: " << result << endl;
			break;
		case 1:
			cout << "After squaring: " << result << endl;
			break;
		case 2:
			cout << "After conversion: " << result << endl;
			break;
		}
	}
	return 0;
}
*/

// Задание 4.2
/*
// через decltype
void First(int a, double b) {
	decltype(a * b) c = a * b;
	cout << "Through decltype: " << c << endl;
}

// Через auto
void Second(int a, double b) {
	auto c = a * b;
	cout << "Through auto: " << c << endl;
}

int main() {
	int a = 5;
	double b = 3.14;

	First(a, b);
	Second(a, b);
	
	return 0;
}
*/

// Задание 5.1
// Шаблонная функция с хвостовым возвращаемым типом
template <typename T, typename U>
auto sum(T a, U b) -> decltype(a + b) {
	return a + b;
}

int main() {
	int val1 = 5;
	double val2 = 2.5;

	auto result = sum(val1, val2);
	cout << "Result: " << result << endl;

	return 0;
}