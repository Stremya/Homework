#include <iostream>
#include <string>
#include <cctype>
#include <cmath>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    string input;
    cout << "Введите значение (можно с буквами, например 'b 5'): ";
    getline(cin, input);

    string digits = "";
    bool hasMinus = false;
    bool hasLetters = false;

    // Фильтрация символов
    for (char c : input) {
        if (isdigit(c)) {
            digits += c;
        }
        else if (c == '-' && digits.empty()) {
            hasMinus = true;
        }
        else if (isalpha(c)) {
            hasLetters = true;
        }
    }

    if (digits.empty()) {
        cout << "Ошибка: цифры не найдены.\n";
        return 1;
    }

    int number = stoi(digits);
    if (hasMinus) number = -number;

    cout << "Вы ввели: " << number << " (Только номер)\n";
    cout << "Квадрат числа: " << number * number << "\n";

    if (hasLetters) cout << "Примечание: во вводе присутствовали буквы, они были проигнорированы.\n";

    return 0;
}