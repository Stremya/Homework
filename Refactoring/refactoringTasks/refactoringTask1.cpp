#include <iostream>
#include <string>
#include <cctype>
#include <cmath>

using namespace std;

// Выделение метода: парсинг числа из строки
int parseNumber(const string& input, bool& hasLetters) {
    string digits = "";
    bool hasMinus = false;
    hasLetters = false;

    for (char c : input) {
        if (isdigit(c)) digits += c;
        else if (c == '-' && digits.empty()) hasMinus = true;
        else if (isalpha(c)) hasLetters = true;
    }

    int num = digits.empty() ? 0 : stoi(digits);
    return hasMinus && num != 0 ? -num : num;
}

int main() {
    setlocale(LC_ALL, "ru");
    string input;
    cout << "Введите значение: ";
    getline(cin, input);

    bool hasLetters = false;
    int number = parseNumber(input, hasLetters);

    if (number == 0 && input.find_first_of("0123456789") == string::npos) {
        cout << "Ошибка: цифры не найдены.\n";
        return 1;
    }

    cout << "Вы ввели: " << number << " (Только номер)\n";
    cout << "Квадрат числа: " << pow(number, 2) << "\n";
    if (hasLetters) cout << "Примечание: буквы проигнорированы.\n";

    return 0;
}