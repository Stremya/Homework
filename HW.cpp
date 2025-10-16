#include <iostream>
using namespace std;
/*
int main() {
    int answer, lvl, thgs = 0;
    setlocale(LC_ALL, "ru");
    cout << "Выберите уровень сложности(1 - 3): ";
    cin >> lvl;
    switch (lvl) {
    case 1:
        cout << "Выбран лёгкий уровень сложности" << endl;
        for (int i = 2; i <= 5; i++) {
            for (int j = 2; j <= 5; j++) {
                cout << i << " * " << j << " = ";
                cin >> answer;
                if (answer == i * j) {
                    cout << "Верно!" << endl;
                    thgs++;
                }
                else {
                    cout << "Неверно!" << endl;
                    
                }
            }
        }
        break;
    case 2:
        cout << "Выбран средний уровень сложности" << endl;
        for (int i = 7; i <= 12; i++) {
            for (int j = 5; j <= 9; j++) {
                cout << i << " * " << j << " = ";
                cin >> answer;
                if (answer == i * j) {
                    cout << "Верно!" << endl;
                    thgs++;
                }
                else {
                    cout << "Неверно!" << endl;
                   
                }
            }
        }
        break;
    case 3:
        cout << "Выбран сложный уровень сложности" << endl;
        for (int i = 14; i <= 20; i++) {
            for (int j = 5; j <= 9; j++) {
                cout << i << " * " << j << " = ";
                cin >> answer;
                if (answer == i * j) {
                    cout << "Верно!" << endl;
                    thgs++;
                }
                else {
                    cout << "Неверно!" << endl;
                   
                }
            }
        }
        break;
    default:
        cout << "Такого уровня сложности нет!";
        break;
    }
    switch (lvl) {
    case 1:
        if (thgs >= 1 && thgs <= 3) {
            cout << "Ваши знания на 1 балл" << endl;
        }
        else if (thgs >= 4 && thgs <= 7) {
            cout << "Ваши знания на 2 балла" << endl;
        }
        else if (thgs >= 8 && thgs <= 11) {
            cout << "Ваши знания на 3 балла" << endl;
        }
        else if (thgs >= 12 && thgs <= 15) {
            cout << "Ваши знания на 4 балла" << endl;
        }
        else if (thgs == 16) {
            cout << "Ваши знания на 5 баллов" << endl;
        }
        break;
    case 2:
        if (thgs >= 1 && thgs <= 7) {
            cout << "Ваши знания на 1 балл" << endl;
        }
        else if (thgs >= 8 && thgs <= 14) {
            cout << "Ваши знания на 2 балла" << endl;
        }
        else if (thgs >= 15 && thgs <= 21) {
            cout << "Ваши знания на 3 балла" << endl;
        }
        else if (thgs >= 22 && thgs <= 28) {
            cout << "Ваши знания на 4 балла" << endl;
        }
        else if (thgs >= 29 && thgs <= 30) {
            cout << "Ваши знания на 5 баллов" << endl;
        }
        break;
    case 3:
        if (thgs >= 1 && thgs <= 8) {
            cout << "Ваши знания на 1 балл" << endl;
        }
        else if (thgs >= 9 && thgs <= 16) {
            cout << "Ваши знания на 2 балла" << endl;
        }
        else if (thgs >= 17 && thgs <= 24) {
            cout << "Ваши знания на 3 балла" << endl;
        }
        else if (thgs >= 25 && thgs <= 32) {
            cout << "Ваши знания на 4 балла" << endl;
        }
        else if (thgs >= 33 && thgs <= 35) {
            cout << "Ваши знания на 5 баллов" << endl;
        }
        break;
    }
    return 0;
}
*/

int main() {
    int n;
    setlocale(LC_ALL, "ru");
    cout << "Введите половину высоты ромба (n): ";
    cin >> n;

    
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    
    for (int i = n - 1; i >= 1; i--) {
        
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}