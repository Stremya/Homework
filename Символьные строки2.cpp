#include <iostream>

using namespace std;

/*
// Задание 1 
// Удаляет символ
void DelitingCharacter(char* text, int number) {
	// Проверка находится ли индекс в диапозоне
	int len = 0;
	while (text[len] != '\0') len++;

	if (number < 0 || number >= len) {
		cout << "Error, the index is out of range" << endl;
		return;
	}

	for (int i = number - 1; text[i] != '\0'; i++) {
		text[i] = text[i + 1];
	}
}

int main() {

	char text[100];
	cout << "Enter a suggestion: ";
	cin.getline(text, 100);

	int index;
	cout << "Enter the number: ";
	cin >> index;

	DelitingCharacter(text, index);

	cout << "Result:" << endl;
	cout << text << endl;

	return 0;
}
*/

/*
// Задание 2
// Удаляет заданный символ
void DelitingCharacter(char* text, char symbol) {
	int i = 0;
	while (text[i] != '\0') {
		if (text[i] == symbol) {
			int j = i;
			while (text[j] != '\0') {
				text[j] = text[j + 1];
				j++;
			}
		}
		else {
			i++;
		}
	}
}

int main() {
	char text[100];
	cout << "Enter a string: ";
	cin.getline(text, 100);

	char symbol;
	cout << "Enter a symbol: ";
	cin >> symbol;

	DelitingCharacter(text, symbol);

	cout << "Result:" << endl;
	cout << text << endl;
	return 0;
}
*/

/*
// Задание 3
// Вставляет указанный смивол в указанное место
void InsertCharacter(char* text, char symbol, int index) {
	int len = 0;
	while (text[len] != '\0') {
		len++;
	}

	if (index < 0 || index > len) {
		cout << "Error: index out of range" << endl;
		return;
	}

	for (int i = len; i >= index; i--) {
		text[i + 1] = text[i];
	}

	text[index] = symbol;
}


int main() {
	char text[100];
	cout << "Enter a string: ";
	cin.getline(text, 100);

	int index;
	char symbol;
	cout << "Enter the position to insert: ";
	cin >> index;
	cout << "Enter the character to insert: ";
	cin >> symbol;

	InsertCharacter(text, symbol, index);

	cout << "Result: " << text << endl;

	return 0;
}
*/

// Задание 4
/*
int main() {
	char text[256];
	cout << "Enter a string: ";
	cin.getline(text, 256);

	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == '.') {
			text[i] = '!';
		}
	}

	cout << "Result: " << text << endl;

	return 0;
}
*/

/*
// Задание 5
int main() {
	char text[256];
	char target;

	cout << "Enter a string: ";
	cin.getline(text, 256);

	cout << "Enter the desired character: ";
	cin >> target;

	int count = 0;
	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == target) {
			count++;
		}
	}

	cout << "Symbol " << target << "' it occurs " << count << " once." << endl;

	return 0;
}
*/

// Задание 6
int main() {
	char text[256];
	cout << "Enter a string: ";
	cin.getline(text, 256);

	int letters = 0;
	int digits = 0;
	int others = 0;

	for (int i = 0; text[i] != '\0'; i++) {
		char c = text[i];

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			letters++;
		}
		else if (c >= '0' && c <= '9') { 
			digits++;
		}
		else {
			others++;
		}
	}

	cout << "Number of letters: " << letters << endl;
	cout << "Number of digits: " << digits << endl;
	cout << "Number of remaining characters: " << others << endl;

	return 0;
}