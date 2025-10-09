#include <iostream>
using namespace std;
/*
int main()
{
    int qntt = 0, count, score, sum = 0, zero = 0;
    double avrg;
    setlocale(LC_ALL, "ru");
    cout << "Введите число: ";
    cin >> count;
    for (;count > 0; count /= 10) {
        score = count % 10;
        qntt++;
        sum += score;
        avrg = (double)sum / (double)qntt;
        if (score == 0) {
            zero++;
        }
    }
    cout << "Количество цифр в числе - " << qntt << endl;
    cout << "Сумма цифр - " << sum << endl;
    cout << "Среднее значение цифр - " << avrg << endl;
    cout << "Количество нулей в числе - " << zero << endl;
    return 0;
}
*/

/*
int main() {
    for (int i = 1; i <= 32; i++) {
        int row = (i - 1) / 4;
        if (row % 2 == 0) {
            cout << "***___";
        }
        else {
            cout << "___***";
        }
        if (i % 4 == 0) {
            cout << endl;
        }
    }
    return 0;
}
*/

/*
int main() {
    int clients, choice, sum = 0, qntt, choice1, price;
    setlocale(LC_ALL, "ru");
    cout << "Введите количество человек: ";
    cin >> clients;
    for (int i = 1; i <= clients; i++) {
        do {
            cout << "Меню для клиента " << i << ":" << endl;
            cout << "1. Донат - 1$\n2. Кекс - 2$\n3. Эклер - 3$\n4. Кофе - 2$\n5. Молочный коктейль - 3$" << endl;
            cout << "Выбор клиента: ";
            cin >> choice;
            cout << "Введите количество: ";
            cin >> qntt;
            switch (choice) {
            case 1:
                cout << "Выбран Донат. Количество - " << qntt << endl;
                sum += 1 * qntt;
                break;
            case 2:
                cout << "Выбран Кекс. Количество - " << qntt << endl;
                sum += 2 * qntt;
                break;
            case 3:
                cout << "Выбран Эклер. Количество - " << qntt << endl;
                sum += 3 * qntt;
                break;
            case 4:
                cout << "Выбран Кофе. Количество - " << qntt << endl;
                sum += 2 * qntt;
                break;
            case 5:
                cout << "Выбран Молочный коктейль. Количество - " << qntt << endl;
                sum += 3 * qntt;
                break;
            }
            cout << "Желаете что нибудь добавить?\n1. да\n2. нет" << endl;
            cin >> choice1;
        } while (choice1 != 2);
    }
    cout << "Итоговая сумма заказа - " << sum << "$" << endl;
    return 0;
}
*/

int main() {
    int a = 0;
    for (int i = 0; i < 10; i++) {
        cout << "A" << i << " " << "B" << i << " " << "C" << i << " " << "D" << i << " " << "E" << i << " " << "F" << i << " " << "G" << i << " " << "H" << i << " " << "I" << i << " " << "J" << i << endl;
    }
    return 0;
}