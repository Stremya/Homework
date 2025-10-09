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

/*
int main() {
    int a = 0;
    for (int i = 0; i < 10; i++) {
        cout << "A" << i << " " << "B" << i << " " << "C" << i << " " << "D" << i << " " << "E" << i << " " << "F" << i << " " << "G" << i << " " << "H" << i << " " << "I" << i << " " << "J" << i << endl;
    }
    return 0;
}
*/

/*
int main() {
    int number, a;
    setlocale(LC_ALL, "ru");
    cout << "Введите число: ";
    cin >> number;
    for (; number > 0; number /= 10) {
        a = number % 10;
        cout << a;
    }
    return 0;
}
*/

/*
int main() {
    int number, a, sum = 0;
    setlocale(LC_ALL, "ru");
    cout << "Введите число: ";
    cin >> number;
    for (; number > 0; number /= 10) {
        a = number % 10;
        sum += a;
    }
    cout << sum;
    return 0;
}
*/

/*
int main() {
    int b = 15, days, sum = 0;
    setlocale(LC_ALL, "ru");
    cout << "Введите количество дней: ";
    cin >> days;
    for (int i = 0; i < days; i++) {
        sum += b;
        b += 2;
    }
    cout << "Улитка проползла " << sum << " см" << endl;
    return 0;
}
*/

/*
int main() {
    int coin;
    setlocale(LC_ALL, "ru");
    for (int i = 0; i < 9; i++) {
        cout << "1. орел\n0. решка\nВыберите сторону монеты:";
        cin >> coin;
        if (coin == 0) {
            cout << "Студент не пошел в колледж" << endl;
        }
        else if (coin == 1) {
            cout << "Студент пошел в колледж" << endl;
        }
        else {
            cout << "Ошибка. Такой стороны нет!";
        }
    }
    return 0;
}
*/

int main() {
    int month = 0, week = 0, whtsc, position = 0, wknd = 0;
    setlocale(LC_ALL, "ru");
    cout << "Введите номер месяца: ";
    cin >> month;
    cout << "Введите день недели: ";
    cin >> week;
    switch (month) {
    case 1:
        cout << "\n\t\t\t" << "Январь\n" << endl;
        break;
    case 2:
        cout << "\n\t\t\t" << "Февраль\n" << endl;
        break;
    case 3:
        cout << "\n\t\t\t" << "Март\n" << endl;
        break;
    case 5:
        cout << "\n\t\t\t" << "Май\n" << endl;
        break;
    case 7:
        cout << "\n\t\t\t" << "Июль\n" << endl;
        break;
    case 8:
        cout << "\n\t\t\t" << "Август\n" << endl;
        break;
    case 10:
        cout << "\n\t\t\t" << "Октябрь\n" << endl;
        break;
    case 12:
        cout << "\n\t\t\t" << "Декабрь\n" << endl;
        break;
    case 4:
        cout << "\n\t\t\t" << "Апрель\n" << endl;
        break;
    case 6:
        cout << "\n\t\t\t" << "Июнь\n" << endl;
        break;
    case 9:
        cout << "\n\t\t\t" << "Сентябрь\n" << endl;
        break;
    case 11:
        cout << "\n\t\t\t" << "Ноябрь\n" << endl;
        break;
    }
    cout << "\tПн\tВт\tСр\tЧт\tПт\tСб\tВс" << endl;
    
    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        whtsc = week - 1;
        
        for (int i = 0; i < whtsc; i++) {
            cout << "\t_";
            position++;
        }

        for (int i = 1; i <= 31; i++) {
            cout << "\t" << i;
            position++;
            if (position % 7 == 0) {
                cout << endl;
            } if (position % 6 == 0) {
                wknd++;
            }
            else if (position % 7 == 0) {
                wknd++;
            }
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        whtsc = week - 1;

        for (int i = 0; i < whtsc; i++) {
            cout << "\t_";
            position++;
        }

        for (int i = 1; i <= 30; i++) {
            cout << "\t" << i;
            position++;
            if (position % 7 == 0) {
                cout << endl;
            }  
            if (position % 6 == 0) {
                wknd++;
            }
            else if (position % 7 == 0) {
                wknd++;
            }
        }
        break;
    case 2:
        whtsc = week - 1;

        for (int i = 0; i < whtsc; i++) {
            cout << "\t_";
            position++;
        }

        for (int i = 1; i <= 28; i++) {
            cout << "\t" << i;
            position++;
            if (position % 7 == 0) {
                cout << endl;
            }  
            if (position % 6 == 0) {
                wknd++;
            }
            else if (position % 7 == 0) {
                wknd++;
            }
        }
        break;
    }
    cout << "\n\n" << "Количество выходных в месяце - " << wknd - 1;
    return 0;
}