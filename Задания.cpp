#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

// Одномерные массивы
// Задание 4
/*
int main() {
	setlocale(LC_ALL, "ru");
	srand(time(0));
	const int size = 20;
	int arr[size];

	cout << "Старый массив:" << endl;
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 50 + 1;
		cout << arr[i] << " ";
	}

	int newsize = 0;
 	for (int i = 0; i < size; i++) {
		if (arr[i] % 2 == 0) {
			arr[newsize] = arr[i];
			newsize++;
		}
	}
	cout << endl << endl;
	cout << "Новый массив:" << endl;
	for (int i = 0; i < newsize; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
*/

// Задание 5
/*
int main() {
	srand(time(0));
	setlocale(LC_ALL, "ru");
	const int size = 10;
	char arr[size];

	for (int i = 0; i < size; i++) {
		arr[i] = 'a' + rand() % 26;
		cout << arr[i];
	}

	bool palindrom = true;

	for (int i = 0; i < size / 2; i++) {
		if (arr[i] != arr[size - 1 - i]) {
			palindrom = false;
			break;
		}
	}
	cout << endl << endl;
	if (palindrom) {
		cout << "Массив является палиндромом" << endl;
	}
	else {
		cout << "Массив не является палиндромом" << endl;
	}
	return 0;
}
*/

// Много мерные массивы
// Задание 4
/*
int main() {
	srand(time(0));
	setlocale(LC_ALL, "ru");

	const int row = 6;
	const int col = 6;
	int array[row][col];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (i == j) {
				array[i][j] = rand() % 20 + 1;
			}
			else if (i < j) {
				array[i][j] = rand() % 20 + 1;
			}
			else {
				array[i][j] = array[j][i];
			}
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}
*/

//Задание 5
/*
int main() {
	srand(time(0));
	setlocale(LC_ALL, "ru");

	const int row = 3;
	const int col = 3;
	int array[row][col];
	cout << "Массив:" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			array[i][j] = rand() % 9 + 1;
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;

	int min = array[0][0];
	int cordrow = 0, cordcol = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (array[i][j] < min) {
				min = array[i][j];
				cordrow = i;
				cordcol = j;
			}

		}
	}
	cout << "Минимальный элемент в массиве - " << min << " находится по координатам - " << cordrow << ":" << cordcol << endl;
	return 0;
}
*/

// Одномерный массив
/*
int main() {
	srand(time(0));
	setlocale(LC_ALL, "ru");
	const int size = 20;
	int original[size];
	int filtered[size]; 
	int filtered_count = 0; 

	
	cout << "Исходный массив:\n";
	for (int i = 0; i < size; i++) {
		original[i] = rand() % 101 - 50; 
		cout << original[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < size; i++) {
		if (original[i] > 0) {
			filtered[filtered_count] = original[i];
			filtered_count++;
		}
	}

	cout << "\nМассив после фильтрации (только положительные):\n";
	for (int i = 0; i < filtered_count; i++) {
		cout << filtered[i] << " ";
	}
	cout << endl;

	cout << "Количество положительных чисел: " << filtered_count << endl;

	return 0;
}
*/

/*
bool Prostoe(int n) {
	if (n <= 1) return false;
	if (n == 2) return true;
	if (n % 2 == 0) return false;

	for (int i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0) return false;
	}
}

int main() {
	srand(time(0));
	setlocale(LC_ALL, "ru");
	const int size = 15;
	int arr[size];
	int prime_count = 0;

	cout << "Массив:\n";
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100 + 1;
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < size; i++) {
		if (Prostoe(arr[i])) {
			prime_count++;
		}
	}

	cout << "Количество простых чисел: " << prime_count << endl;
	return 0;
}
*/

// Многомерные массивы
/*
int main() {
	srand(time(0));
	setlocale(LC_ALL, "ru");
	const int size = 5;
	int array[size][size];

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			array[i][j] = rand() % 5 + 1;
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

	bool is_symmetric = true;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (array[i][j] != array[j][i]) {
				is_symmetric = false;
				break;
			}
		}
		if (!is_symmetric) break;
	}

	if (is_symmetric) {
		cout << "\nМатрица симметрична относительно главной диагонали.\n";
	}
	else {
		cout << "\nМатрица НЕ симметрична.\n";
	}
	return 0;
}
*/

int main() {
	srand(time(0));
	setlocale(LC_ALL, "ru");
	const int size = 4;
	int original[size][size];
	int rotated[size][size];

	cout << "Исходный массив:\n";
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			original[i][j] = rand() % 20 + 1;
			cout << original[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			rotated[j][size - 1 - i] = original[i][j];
		}
	}

	cout << "\nМассив после:\n";
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << rotated[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}

