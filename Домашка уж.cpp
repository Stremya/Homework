#include <iostream>
#include <cctype> // для isalpha isdigit ispunct
using namespace std;
/*
int main()
{
    char a;
    setlocale(LC_ALL, "ru");
    cout << "Введите символ: ";
    cin >> a;
    if (isalpha(a)) {
        cout << "Это буква";
    }
    else if (isdigit(a)) {
        cout << "Это цифра";
    }
    else if (ispunct(a)) {
        cout << "Это знак препинания";
    }
    else {
        cout << "Это другое";
    }
    return 0;
}
*/

/*
int main() {
    int op;
    int op1;
    int minute;
    int megafon = 2, mts = 3, yota = 1;
    int cost;
    setlocale(LC_ALL, "ru");
    cout << "1. Мегафон\n2. МТС\n3. Йота" << endl;
    cout << "Введите мобильного оператора с которого звоните: ";
    cin >> op;
    switch (op) {
    case 1:
        cout << "1. Мегафон\n2. МТС\n3. Йота" << endl;
        cout << "Введите мобильный оператор на который звоните: ";
        cin >> op1;
        switch (op1) {
        case 1:
            cout << "Введите количество минут разговора" << endl;
            cin >> minute;
            cout << "Т.к одинаковые операторы звонок был бесплатным";
            break;
        case 2:
            cout << "Введите количество минут разговора" << endl;
            cin >> minute;
            cost = minute * megafon;
            cout << "Звонок стоил - " << cost << " рублей" << endl;
            break;
        case 3:
            cout << "Введите количество минут разговора" << endl;
            cin >> minute;
            cost = minute * megafon;
            cout << "Звонок стоил - " << cost << " рублей" << endl;
            break;
        }
        break;
    case 2:
        cout << "1. МТС\n2. Мегафон\n3. Йота" << endl;
        cout << "Введите мобильный оператор на который звоните: ";
        cin >> op1;
        switch (op1) {
        case 1:
            cout << "Введите количество минут разговора" << endl;
            cin >> minute;
            cout << "Т.к одинаковые операторы звонок был бесплатным";
            break;
        case 2:
            cout << "Введите количество минут разговора" << endl;
            cin >> minute;
            cost = minute * mts;
            cout << "Звонок стоил - " << cost << " рублей" << endl;
            break;
        case 3:
            cout << "Введите количество минут разговора" << endl;
            cin >> minute;
            cost = minute * mts;
            cout << "Звонок стоил - " << cost << " рублей" << endl;
            break;
        }
        break;
    case 3:
        cout << "1. Йота\n2. МТС\n3. Мегафон" << endl;
        cout << "Введите мобильный оператор на который звоните: ";
        cin >> op1;
        switch (op1) {
        case 1:
            cout << "Введите количество минут разговора" << endl;
            cin >> minute;
            cout << "Т.к одинаковые операторы звонок был бесплатным";
            break;
        case 2:
            cout << "Введите количество минут разговора" << endl;
            cin >> minute;
            cost = minute * yota;
            cout << "Звонок стоил - " << cost << " рублей" << endl;
            break;
        case 3:
            cout << "Введите количество минут разговора" << endl;
            cin >> minute;
            cost = minute * yota;
            cout << "Звонок стоил - " << cost << " рублей" << endl;
            break;
        }
        break;
    }
    return 0;
}
*/

int main() {
    int choice;
    double code;
    double salary, salary1;
    int bl;
    double a; // за 1 строку кода
    double debuff, debuff1, debuff2;
    setlocale(LC_ALL, "ru");
    a = 50.0 / 100.0;
    cout << "Выберете из 3 пунктов:\n1. Сколько строк кода нужно написать Васе\n2. Сколько раз Вася может опоздать\n3. Сколько денег заплатят Васе" << endl;
    cin >> choice;
    switch (choice) {
    case 1:
        cout << "Введите желаемый доход Васи: ";
        cin >> salary;
        cout << "Введите количество опозданий Васи: ";
        cin >> bl;
        salary1 = salary;

        debuff = bl / 3;
        debuff1 = 20 * debuff;
        salary1 += debuff1;
        code = salary1 / a;
        cout << "Чтобы заработать " << salary << "$ Васе нужно написать " << code << " строк кода" << endl;
        break;
    case 2:
        cout << "Введите сколько строк кода написал Вася: ";
        cin >> code;
        cout << "Введите желаемый объем зарплаты Васи: ";
        cin >> salary;
        salary1 = code * a;
        if (salary1 <= salary) {
            cout << "Васе нельзя опаздывать" << endl;
        }
        else if (salary1 >= salary) {
            bl = salary1 - salary;
            bl /= 20;
            cout << "Вася может опоздать " << bl << " раз" << endl;
        }
        break;
    case 3:
        cout << "Введите количество строк кода написанные Васей: ";
        cin >> code;
        cout << "Введите количество опозданий Васи: ";
        cin >> bl;
        salary1 = code * a;
        debuff = bl * 20;
        salary1 -= debuff;
        if (salary1 <= 0) {
            cout << "Васе не заплатят" << endl;
        }
        else {
            cout << "Васе заплатят " << salary1 << "$" << endl;
        }
        break;
    }
    
    
   

    return 0;
}
