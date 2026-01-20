#include <iostream>
#include <string>

using namespace std;

// Задание 1
/*
string* StrInEnd(string* arr, int& OldSize, const string& newStr) {
	int newSize = OldSize + 1;
	string* newArr = new string[newSize];

	for (int i = 0; i < OldSize; i++) {
		newArr[i] = arr[i];
	}

	newArr[OldSize] = newStr;

	delete[] arr;

	OldSize = newSize;

	return newArr;
}

int main() {
	int row = 2;
	
	string* str_arr = new string[row];

	string str1, str2, str3;
	cout << "Enter 1 string: ";
	cin >> str1;
	cout << "Enter 2 string: ";
	cin >> str2;

	str_arr[0] = str1;
	str_arr[1] = str2;

	cout << endl;
	cout << "Array:" << endl;
	for (int i = 0; i < row; i++) {
		cout << str_arr[i] << endl;
	}
	
	string new_str;
	cout << "Enter string in end: ";
	cin >> new_str;

	str_arr = StrInEnd(str_arr, row, new_str);

	cout << endl;
	cout << "New Array:" << endl;
	for (int i = 0; i < row; i++) {
		cout << str_arr[i] << endl;
	}

	delete[] str_arr;
	return 0;
}
*/

// Задание 2
/*
string* StrInBeginning(string* arr, int& OldSize, const string& newStr) {
	int newSize = OldSize + 1;
	string* newArr = new string[newSize];

	newArr[0] = newStr;

	for (int i = 0; i < OldSize; i++) {
		newArr[i + 1] = arr[i];
	}

	delete[] arr;

	OldSize = newSize;

	return newArr;
}

int main() {
	int row = 2;

	string* str_arr = new string[row];

	string str1, str2, str3;
	cout << "Enter 1 string: ";
	cin >> str1;
	cout << "Enter 2 string: ";
	cin >> str2;

	str_arr[0] = str1;
	str_arr[1] = str2;

	cout << endl;
	cout << "Array:" << endl;
	for (int i = 0; i < row; i++) {
		cout << str_arr[i] << endl;
	}

	string new_str;
	cout << "Enter string in beginning: ";
	cin >> new_str;

	str_arr = StrInBeginning(str_arr, row, new_str);

	cout << endl;
	cout << "New Array:" << endl;
	for (int i = 0; i < row; i++) {
		cout << str_arr[i] << endl;
	}

	delete[] str_arr;
	return 0;
}
*/

// Задание 3
/*
// Вставляет строку в указанную позицию 
string* insertStringAt(string* oldArr, int& size, const string& newStr, int index) {
	
	if (index < 0 || index > size) {
		cout << "Error: the index is out of range [0, " << size << "]\n";
		return oldArr;
	}

	int newSize = size + 1;
	string* newArr = new string[newSize];

	for (int i = 0; i < index; ++i) {
		newArr[i] = oldArr[i];
	}

	newArr[index] = newStr;

	for (int i = index; i < size; ++i) {
		newArr[i + 1] = oldArr[i];
	}

	delete[] oldArr;

	size = newSize;

	return newArr;
}

// функция для вывода
void printArray(string* arr, int size) {
	for (int i = 0; i < size; ++i) {
		cout << i << ": \"" << arr[i] << "\"\n";
	}
}

int main() {
	int size = 3;
	string* arr = new string[size];
	arr[0] = "First";
	arr[1] = "Second";
	arr[2] = "Third";

	cout << "The original array:\n";
	printArray(arr, size);

	string newStr;
	int pos;
	cout << "\nEnter a string for insert: ";
	getline(cin, newStr);
	cout << "Enter position (from 0 to " << size << "): ";
	cin >> pos;

	arr = insertStringAt(arr, size, newStr, pos);

	cout << "\nNew array:\n";
	printArray(arr, size);

	delete[] arr;
	return 0;
}
*/

// Задание 4
// 
// Удаляет строку по указанному индексу
string* DeleteStr(string* arr, int& size, int index) {
	if (index <= 0 || index > 4) {
		cout << "Error: the index is out of range [0 - " << size - 1 << "]" << endl; 
		return arr;
	}

	string* newArr = new string[size - 1];

	for (int i = 0; i < index; i++) {
		newArr[i] = arr[i];
	}
	for (int i = index + 1; i < size; i++) {
		newArr[i] = arr[i];
	}

	delete[] arr;
	size--;
	return newArr;
}


int main() {
	int size = 5;
	string* arr = new string[size];
	
	string frst, scnd, third, fth, fifth;
	cout << "Enter first string: ";
	cin >> frst;
	cout << "Enter second string: ";
	cin >> scnd;
	cout << "Enter third string: ";
	cin >> third;
	cout << "Enter fourth string: ";
	cin >> fth;
	cout << "Enter fifth string: ";
	cin >> fifth;
	arr[0] = frst;
	arr[1] = scnd;
	arr[2] = third;
	arr[3] = fth;
	arr[4] = fifth;

	cout << "The original array:" << endl;
	for (int i = 0; i < size; i++) {
		cout << i << ": " << arr[i] << endl;
	}

	int index;
	cout << "Enter which line you want to delete(0-4): ";
	cin >> index;
	arr = DeleteStr(arr, size, index);

	cout << endl;
	cout << "New array:" << endl;
	for (int i = 0; i < size; i++) {
		cout << i << ": " << arr[i] << endl;
	}

	delete[] arr;

	return 0;
}
