#include <iostream>

using namespace std;

// Функция: перенести n дисков с from на to, используя aux как вспомогательный
void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        cout << "Переместить диск 1 с " << from << " на " << to << endl;
        return;
    }

    // Шаг 1: переместить n-1 дисков с from на aux (используя to как вспомогательный)
    hanoi(n - 1, from, aux, to);

    // Шаг 2: переместить самый большой диск с from на to
    cout << "Переместить диск " << n << " с " << from << " на " << to << endl;

    // Шаг 3: переместить n-1 дисков с aux на to (используя from как вспомогательный)
    hanoi(n - 1, aux, to, from);
}

int main() {
    setlocale(LC_ALL, "ru");
    int n;
    cout << "Введите количество дисков: ";
    cin >> n;

    cout << "\nРешение Ханойской башни:\n";
    hanoi(n, 'A', 'C', 'B');  // A -> C, используя B

    return 0;
}