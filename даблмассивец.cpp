#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int task1() {
	srand(time(0));
	setlocale(LC_ALL, "ru");
	const int row = 3;
	const int col = 3;
	int arr[row][col];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = rand() % 10 + 1;
		}
	}

	int sum = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			sum += arr[i][j];
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	double avrg = (double)sum / ((double)row * (double)col);
	cout << "Сумма всех элементов в массиве - " << sum << endl;;
	cout << "Среднее значение всех элементов в массиве - " << avrg << endl;

	int max = arr[0][0];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (max < arr[i][j]) {
				max = arr[i][j];
			}
		}
	}
	cout << "Максимальное значение в массиве - " << max << endl;

	int min = arr[0][0];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (min > arr[i][j]) {
				min = arr[i][j];
			}
		}
	}
	cout << "Минимальное значение в массиве - " << min << endl;
	return 0;
}

int task2() {
	srand(time(0));
	setlocale(LC_ALL, "ru");
	const int row = 4;
	const int col = 3;
	int arr[row][col];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = rand() % 9 + 1;
		}
	}

	int sum_row[row] = {0};
	int sum_col[col] = {0};

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			sum_row[i] += arr[i][j];
			sum_col[j] += arr[i][j];
		}
    }

	int sum = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			sum += arr[i][j];
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << " | " << sum_row[i] << endl;
	}

	for (int j = 0; j < col + 1; j++) {
		cout << "--------";
	}
	cout << endl;
	for (int j = 0; j < col; j++) {
		cout << sum_col[j] << "\t";
	}
	cout << " | " << sum << endl;
	return 0;
}

int task3() {
	srand(time(0));
	setlocale(LC_ALL, "ru");
	const int row1 = 5;
	const int col1 = 10;
	int arr1[row1][col1];
	const int row2 = 5;
	const int col2 = 5;
	int arr2[row2][col2];

	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col1; j++) {
			arr1[i][j] = rand() % 51;
		}
	}

	cout << "Первый массив:" << endl;
	for (int i = 0; i < row1; i++) {
		for (int j = 0; j < col1; j++) {
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < row2; i++) {
		for (int j = 0; j < col2; j++) {
			arr2[i][j] = arr1[i][2 * j] + arr1[i][2 * j + 1];
		}
	}

	cout << "\nВторой массив:" << endl;
	for (int i = 0; i < row2; i++) {
		for (int j = 0; j < col2; j++){
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

int main() {
	setlocale(LC_ALL, "ru");
	cout << "Задание 1" << endl << endl;
	task1();
	cout << endl << "-----------------------------------------------------" << endl;
	cout << "Задание 2" << endl << endl;
	task2();
	cout << endl << "-----------------------------------------------------" << endl;
	cout << "Задание 3" << endl << endl;
	task3();

	return 0;
}