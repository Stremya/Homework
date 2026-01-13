#include <iostream>

using namespace std;

/*
// Считает сколько минимально запровок путешевственник посетит до Москвы
void CalcDistance(int S, int L, int D) {
	bool GasStation = false;
	for (int i = 1; GasStation != true; i++) {
		if (S >= L) {
			GasStation = true;
			cout << "Путешевственнику хватает емкости бака до Москвы" << endl;
			cout << "Минимальное количество запровок - " << i << endl;
		}
		else {
			cout << "Путешевственнику не хватает емкости бака от Питербурга до Москвы" << endl;

			cout << "Введите расстояние от " << i << " заправки до " << i + 1 << " заправки: ";
			cin >> D;
			if (D > S) {
				cout << "Ошибка. Слишком большое расстояние до ближайшей заправки" << endl;
				return;
			}

			cout << "Путешевственник поехал до ближайшей заправки" << endl;
			L -= D;
			cout << "Оставшееся расстояние до Москвы от ближайшей заправки: " << L << endl;

		}
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	int S, L, D = 0;
	cout << "Введите расстояние, которое может проехать машина с полным баком: ";
	cin >> S;
	cout << "Введите расстояние от Питербурга до Москвы: ";
	cin >> L;

	CalcDistance(S, L, D);
	return 0;
}
*/

// Считает сколько заседаний посетит шеф за день

void Meetings(int a) {
	double day = 960;
	for (int j = 1; day >= 0; j++) {
		cout << "Введите время " << j << " заседания в минутах(не менее часа): ";
		cin >> a;
		if (a > 60) {
			cout << "Ошибка. Заседание не должно быть больше часа(60)" << endl;
			return;
		}
		day -= (a + 30);
		cout << "Осталось времени за день " << day << " минут" << endl;
		if (day <= 0) {
			cout << "Шеф посетил " << j << " заседаний" << endl;
		}
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	
	int inv = 0;
	Meetings(inv);

	return 0;
}