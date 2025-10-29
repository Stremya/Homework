#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int task1() {
	setlocale(LC_ALL, "ru");
	int custom;
	const int row = 3;
	const int col = 3;
	int arr[row][col];
    
	cout << "Введите первый элемент массива: " << endl;
	cin >> custom;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = custom;
			cout << arr[i][j] << " ";
			custom *= 2;
		}
		cout << endl;
	}
	return 0;
}

int task2() {
	setlocale(LC_ALL, "ru");
	int custom;
	const int row = 3;
	const int col = 3;
	int arr[row][col];

	cout << "Введите первый элемент массива: " << endl;
	cin >> custom;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = custom;
			cout << arr[i][j] << " ";
			custom += 1;
		}
		cout << endl;
	}
	return 0;
}


int task3() {
	srand(time(0));
	setlocale(LC_ALL, "ru");
	const int row = 2;
	const int col = 6;
	int arr[row][col];

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = rand() % 10 + 1;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	int sft;
	cout << "\nВведите количество сдвигов: ";
	cin >> sft;

	int drctn;
	cout << "Выберите направление (1 - вправо, 2 - влево): ";
	cin >> drctn;
	if (drctn > 2 || drctn < 1) {
		cout << "Такого напрвления нет";
		return 1;
	}

	if (sft % col == 0) {
		cout << "Элементы уже стоят на этих местах, сдвиг не требуется" << endl;
		return 1;
	}
	        
	else if (drctn == 1) {
		for (int i = 0; i < row; i++) {
			int arr0[col];
			for (int j = 0; j < col; j++) {
				arr0[(j + sft) % col] = arr[i][j];
			}
			for (int j = 0; j < col; j++) {
				arr[i][j] = arr0[j];
			}
		}
	}
	else if (drctn == 2) {
		for (int i = 0; i < row; i++) {
			int arr0[col];
			for (int j = 0; j < col; j++) {
				arr0[(j - sft + col) % col] = arr[i][j];
			}
			for (int j = 0; j < col; j++) {
				arr[i][j] = arr0[j];
			}
		}
	}

	cout << "\nМассив после сдвига\n";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

int main() {
	setlocale(LC_ALL, "ru");
	int choice;
	cout << "Выберите задание:\n1, 2, 3" << endl;
	cin >> choice;
	switch (choice) {
	case 1:
		cout << "Задание 1" << endl << endl;
		task1();
		break;
	case 2:
		cout << "Задание 2" << endl << endl;
		task2();
		break;
	case 3:
		cout << "Задание 3" << endl << endl;
		task3();
		break;
	}
	return 0;
}