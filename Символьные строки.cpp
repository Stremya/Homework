#include <iostream>
using namespace std;

// Задание 1
/*
int main() {
	char text[100];
	cout << "Enter a suggestion(on English): ";
	cin.getline(text, 100); // cin.getline() - для ввода 

	for (int i = 0; text[i] != '\0'; i++) {
		if (text[i] == ' ') {
			text[i] = '\t';
		}
	}
	cout << "Result: " << text << endl;

	return 0;
}
*/

// Задание 2
/*
int main() {
	char text[100];
	cout << "Enter a suggestion(on English): ";
	cin.getline(text, 100);

	int symbols = 0;
	for (int i = 0; text[i] != '\0'; i++) {
		symbols++;
	}
	cout << "Symbols in text: " << symbols << endl;
	return 0;
}
*/

// Задание 3
/*
int main() {
	char sugg[100];
	cout << "Enter a suggestion(on English): ";
	cin.getline(sugg, 100);

	int words = 1;
	for (int i = 0; sugg[i] != '\0'; i++) {
		if (sugg[i] == ' ') {
			words++;
		}
	}
	cout << "Words in suggestion: " << words << endl;
	return 0;
}
*/

// Задание 4

int main() {
	char text[100];
	cout << "Enter a suggestion(on English): ";
	cin.getline(text, 100);

	int len = 0;
	while (text[len] != '\0') len++;

	bool isPalindrom = true;
	for (int i = 0; i < len / 2; i++) {
		if (text[i] != text[len - 1 - i]) {
			isPalindrom = false;
		}
	}

	if (isPalindrom) {
		cout << "Word " << text << " is Palindrom" << endl;
	}
	else {
		cout << "Word " << text << " is no Palindrom" << endl;
	}
	return 0;
}