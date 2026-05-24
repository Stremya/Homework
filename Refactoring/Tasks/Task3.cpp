#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int n;
    cout << "¬ведите N: ";
    cin >> n;
    int sum = 0;
    int i = 1;
    while (i <= n) {
        sum = sum + (i * i);
        i = i + 1;
    }
    cout << "—умма: " << sum << endl;
    return 0;
}