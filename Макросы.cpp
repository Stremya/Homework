#include <iostream>
using namespace std;

// Макрос: меньшее из двух значений
#define MIN(a, b) ((a) < (b) ? (a) : (b))

// Макрос: большее из двух значений
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// Макрос: возведение в квадрат
#define SQUARE(x) ((x) * (x))

// Макрос: возведение в куб (пример для фиксированной степени)
#define CUBE(x) ((x) * (x) * (x))

// Проверка на чётность
#define IS_EVEN(x) (((x) % 2) == 0)

// Проверка на нечётность
#define IS_ODD(x) (((x) % 2) != 0)

int main() {
    int a = 7, b = 4;
    cout << "MIN(" << a << ", " << b << ") = " << MIN(a, b) << endl;      
    cout << "MAX(" << a << ", " << b << ") = " << MAX(a, b) << endl;      
    cout << "SQUARE(" << a << ") = " << SQUARE(a) << endl;               
    cout << "CUBE(" << a << ") = " << CUBE(a) << endl;                    
    cout << a << " is even? " << (IS_EVEN(a) ? "yes" : "no") << endl;     
    cout << a << " is odd? " << (IS_ODD(a) ? "yes" : "no") << endl;       

    return 0;
}