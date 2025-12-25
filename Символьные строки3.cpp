#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <cctype>
#include <unordered_set>
#include <stdexcept>
using namespace std;

// Задание 1
/*
string reverseWithAlgorithm(string str) {
    reverse(str.begin(), str.end()); // переворачивает строку на месте
    return str;                      // возвращаем результат
}

int main() {
    string s = "Hello";
    cout << reverseWithAlgorithm(s) << endl; // вызов через алгоритм
    return 0;
}
*/

// Задание 2
/*
// Структура для хранения результатов подсчёта
struct CountResult {
    int letters = 0;   // буквы (русские и английские)
    int digits = 0;    // цифры
    int spaces = 0;    // пробельные символы
    int others = 0;    // всё остальное
};

// Функция подсчёта символов в строке
CountResult countChars(const string& str) {
    CountResult res; // инициализируем структуру
    for (char c : str) { // перебираем каждый символ
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
            (c >= 'а' && c <= 'я') || (c >= 'А' && c <= 'Я')) {
            res.letters++; // если это буква — считаем
        }
        else if (c >= '0' && c <= '9') {
            res.digits++; // если цифра
        }
        else if (c == ' ' || c == '\t' || c == '\n') {
            res.spaces++; // если пробел, табуляция или перевод строки
        }
        else {
            res.others++; // всё остальное
        }
    }
    return res; // возвращаем результаты
}

int main() {
    CountResult r = countChars("Привет 123 !");
    cout << "Букв: " << r.letters << endl;
    return 0;
}
*/


// Задание 3
/*
// Удаляет дубликаты, сохраняя порядок
string removeDuplicates(const string& str) {
    unordered_set<char> seen; // множество уже встреченных символов
    string result;            // результирующая строка

    for (char c : str) {
        if (seen.count(c) == 0) { // если символ ещё не встречался
            seen.insert(c);       // запоминаем его
            result += c;          // добавляем в результат
        }
    }
    return result; // возвращаем строку без дубликатов
}

int main() {
    cout << removeDuplicates("programming") << endl; // → "progamin"
    return 0;
}
*/

// Задание 4
/*
// Проверяет, начинается ли строка с заданного префикса
bool startsWith(const string& str, const string& prefix) {
    if (prefix.size() > str.size()) return false; // префикс длиннее — невозможно
    for (int i = 0; i < prefix.size(); i++) {
        if (str[i] != prefix[i]) return false; // если символ не совпадает — false
    }
    return true; // все символы совпали
}

// Проверяет, заканчивается ли строка заданным суффиксом
bool endsWith(const string& str, const string& suffix) {
    if (suffix.size() > str.size()) return false;
    int start = str.size() - suffix.size(); // позиция начала суффикса в строке
    for (int i = 0; i < suffix.size(); i++) {
        if (str[start + i] != suffix[i]) return false;
    }
    return true;
}

int main() {
    string s = "document.pdf";
    cout << startsWith(s, "doc") << endl;  // 1 (true)
    cout << endsWith(s, ".pdf") << endl;   // 1 (true)
    return 0;
}
*/

// Задание 5
/*
// Преобразует "Иванов Иван Петрович" → "Иванов И.П."
string formatName(const string& fullName) {
    stringstream ss(fullName); // поток для разбивки на слова
    vector<string> parts;      // вектор для хранения слов
    string word;

    while (ss >> word) { // читаем слово за словом
        parts.push_back(word); // добавляем в вектор
    }

    if (parts.empty()) return ""; // если нет слов — возвращаем пустую строку

    string result = parts[0]; // первое слово — фамилия (без изменений)

    for (int i = 1; i < parts.size(); i++) { // остальные — инициалы
        if (!parts[i].empty()) {
            result += " " + string(1, parts[i][0]) + "."; // берём первую букву
        }
    }
    return result;
}

int main() {
    setlocale(LC_ALL, "ru");
    cout << formatName("Сидоров Андрей") << endl; // → "Сидоров А."
    return 0;
}
*/

// Задание 6
/*
// Форматирует номер в вид: +7 (XXX) XXX-XX-XX
string formatPhoneNumber(const string& phone) {
    string digits;
    // Извлекаем только цифры
    for (char c : phone) {
        if (isdigit(c)) {
            digits += c;
        }
    }

    // Проверка длины (10 или 11 цифр допустимо)
    if (digits.length() != 10 && digits.length() != 11) {
        throw invalid_argument("Неверное количество цифр");
    }

    // Если 10 цифр — добавляем 7 в начало (делаем 11)
    if (digits.length() == 10) {
        digits = "7" + digits;
    }

    // Форматируем вручную
    return "+7 (" + digits.substr(1, 3) + ") " +
        digits.substr(4, 3) + "-" +
        digits.substr(7, 2) + "-" +
        digits.substr(9, 2);
}

int main() {
    setlocale(LC_ALL, "ru");
    try {
        cout << formatPhoneNumber("89161234567") << endl;
    }
    catch (exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}
*/

// Задание 7
// Очищает слово: убирает не-буквы и приводит к нижнему регистру
string cleanWord(string word) {
    string cleaned;
    for (char c : word) {
        if (isalpha(c)) {
            cleaned += tolower(c);
        }
    }
    return cleaned;
}

// Анализирует текст и выводит статистику
void analyzeText(const string& text) {
    stringstream ss(text);
    vector<string> words;
    string word;

    // Разбиваем текст на слова и очищаем их
    while (ss >> word) {
        string cleaned = cleanWord(word);
        if (!cleaned.empty()) {
            words.push_back(cleaned);
        }
    }

    if (words.empty()) {
        cout << "Нет слов\n";
        return;
    }

    cout << "Всего слов: " << words.size() << endl;

    // Находим самое длинное и короткое
    string longest = words[0], shortest = words[0];
    for (const string& w : words) {
        if (w.length() > longest.length()) longest = w;
        if (w.length() < shortest.length()) shortest = w;
    }
    cout << "Самое длинное: " << longest << endl;
    cout << "Самое короткое: " << shortest << endl;

    // Считаем частоту слов
    map<string, int> freq;
    for (const string& w : words) freq[w]++;

    // Находим самое частое
    string mostFrequent;
    int maxCount = 0;
    for (const auto& p : freq) {
        if (p.second > maxCount) {
            maxCount = p.second;
            mostFrequent = p.first;
        }
    }
    cout << "Самое частое: " << mostFrequent << " (" << maxCount << " раз)\n";

    // Уникальные слова в алфавитном порядке
    set<string> unique(freq.begin(), freq.end());
    cout << "Уникальные слова:\n";
    for (const string& w : unique) {
        cout << "- " << w << endl;
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    analyzeText("Привет привет мир!");
    return 0;
}