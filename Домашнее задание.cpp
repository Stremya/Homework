#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
// Задание 1
// Сортировка номеров
void Sort(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j + 1] > arr[j]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	
	const int size = 5;
	int arr1[size];
	int arr2[size];
	bool IsCorrect = false;

	int choice;
	do {
		cout << "========= МЕНЮ =========" << endl;
		cout << "1. Ввести данные\n";
		cout << "2. Вывести данные\n";
		cout << "3. Отсортировать мобильные номера телефонов\n";
		cout << "4. Отсортировать домашние номера телефонов\n";
	    cout << "5. Выход" << endl;
		cout << "Ваш выбор: ";
		cin >> choice;
		switch (choice) {
		// Ввод данных 
		case 1:
			cout << endl;
			IsCorrect = true;
			for (int i = 0; i < size; i++) {
				cout << "Введите мобильный номер для " << i + 1 << " пользователя: ";
				cin >> arr1[i];
				cout << "Введите домашний номер для " << i + 1 << " пользователя: ";
				cin >> arr2[i];
			}
			cout << endl;
			break;
		// Вывод данных
		case 2:
			cout << endl;
			if (IsCorrect) {
				cout << "ID Мобильный Домашний номер" << endl;
				for (int i = 0; i < size; i++) {
					cout << i + 1 << " " << arr1[i] << " " << arr2[i] << endl;
				}
			}
			else {
				cout << "Сначала введите данные!" << endl;
				break;
			}
			cout << endl;
			break;
        // Сортировка мобильных номеров	
		case 3:
			cout << endl;
			if (IsCorrect) {
				Sort(arr1, size);
				cout << "Мобильные номера отсортированы" << endl;
			}
			else {
				cout << "Сначала введите данные!" << endl;
				break;
			}
			cout << endl;
			break;
		// Сортировка домашних номеров
		case 4:
			cout << endl;
			if (IsCorrect) {
				Sort(arr2, size);
				cout << "Домашние номера отсортированы" << endl;
			}
			else {
				cout << "Сначала введите данные!" << endl;
				break;
			}
			cout << endl;
			break;
		case 5:
			cout << endl;
			cout << "Выход" << endl;
		default:
			cout << endl;
			cout << "Такого варианта нет!" << endl;
		}
	} while (choice != 5);

	return 0;
 }
 */

/*
//Задание 2
// Глобальная переменная для количества перестановок
int swaps = 0;
// Улучшенная пузырьковая сортировка
void BubbleSortPlus(int arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		int swap = false;
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swap = true;
				swaps++;
			}
		}
		// Если перестановок не было - выход
		if (!swap) break;
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(0));

	const int size = 10;
	int arr[size];

	cout << "Изначальнй массив:" << endl;
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100 + 1;
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Отсортированный массив:" << endl;
	BubbleSortPlus(arr, size);
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Количество перестановок: " << swaps << endl;
	return 0;
}
*/

/*
// Задание 3
// Функция: перевернуть часть массива от начала до индекса k (включительно)
void flip(int arr[], int k) {
	int start = 0;
	int end = k;
	while (start < end) {
		// Меняем местами arr[start] и arr[end]
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

// Функция: найти индекс самого большого элемента в первых n элементах
int findMaxIndex(int arr[], int n) {
	int max_idx = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] > arr[max_idx]) {
			max_idx = i;
		}
	}
	return max_idx;
}

// Основная функция сортировки оладий
void pancakeSort(int arr[], int n) {
	for (int curr_size = n; curr_size > 1; curr_size--) {
		// Находим, где самый большой оладушек в текущей зоне
		int max_idx = findMaxIndex(arr, curr_size);

		// Если он уже на дне — ничего не делаем
		if (max_idx != curr_size - 1) {
			// Шаг 1: если он не наверху — перевернуть, чтобы поднять наверх
			if (max_idx != 0) {
				flip(arr, max_idx);
			}
			// Шаг 2: перевернуть всю текущую зону — чтобы большой оладушек упал на дно
			flip(arr, curr_size - 1);
		}
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	const int N = 4;
	int pancakes[N] = { 3, 1, 4, 2 }; 

	cout << "Исходная стопка: ";
	for (int i = 0; i < N; i++) {
		cout << pancakes[i] << " ";
	}
	cout << endl;

	pancakeSort(pancakes, N);

	cout << "Отсортированная стопка: ";
	for (int i = 0; i < N; i++) {
		cout << pancakes[i] << " ";
	}
	cout << endl;

	return 0;
}
*/

// Задание 4
// усовершенствованная пузырьковая сортировка + счётчик перестановок
int bubbleSortPlus(int arr[], int size) {
	int swaps = 0;
	for (int i = 0; i < size - 1; ++i) {
		bool swapped = false;
		for (int j = 0; j < size - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swaps++;
				swapped = true;
			}
		}
		if (!swapped) break; // оптимизация — если ничего не менялось
	}
	return swaps;
}

// сортировка выбором + счётчик перестановок
int selectionSort(int arr[], int size) {
	int swaps = 0;
	for (int i = 0; i < size - 1; ++i) {
		int min_idx = i;
		for (int j = i + 1; j < size; ++j) {
			if (arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}
		if (min_idx != i) {  // если нашли меньший — меняем
			int temp = arr[i];
			arr[i] = arr[min_idx];
			arr[min_idx] = temp;
			swaps++;
		}
	}
	return swaps;
}

// заполнить массив случайными числами
void fillRandom(int arr[], int size) {
	for (int i = 0; i < size; ++i) {
		arr[i] = rand() % 10000;  // числа от 0 до 9999
	}
}

// скопировать массив (чтобы не портить оригинал)
void copyArray(int src[], int dest[], int size) {
	for (int i = 0; i < size; ++i) {
		dest[i] = src[i];
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(0));

	const int SIZE = 1000;
	const int NUM_TESTS = 10;

	int original[SIZE]; // исходный массив
	int temp[SIZE];     // временный массив для копии

	long long totalSwapsBubble = 0;
	long long totalSwapsSelection = 0;

	cout << "Тестируем 10 массивов по " << SIZE << " элементов...\n";

	for (int test = 0; test < NUM_TESTS; ++test) {
		// Заполняем исходный массив случайными числами
		fillRandom(original, SIZE);

		// Копируем в temp — чтобы тестировать оба метода на одном и том же массиве
		copyArray(original, temp, SIZE);
		int swapsBubble = bubbleSortPlus(temp, SIZE);

		// Копируем снова — чтобы метод выбора работал на чистом массиве
		copyArray(original, temp, SIZE);
		int swapsSelection = selectionSort(temp, SIZE);

		cout << "Тест " << test + 1 << ": пузырьковая = " << swapsBubble
			<< ", выбор = " << swapsSelection << endl;

		totalSwapsBubble += swapsBubble;
		totalSwapsSelection += swapsSelection;
	}

	double avgBubble = (double)totalSwapsBubble / NUM_TESTS;
	double avgSelection = (double)totalSwapsSelection / NUM_TESTS;

	cout << "\n=========================\n";
	cout << "Среднее число перестановок:\n";
	cout << "Пузырьковая сортировка: " << avgBubble << endl;
	cout << "Метод выбора: " << avgSelection << endl;

	return 0;
}