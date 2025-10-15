#include <iostream>
using namespace std;
/*
int main() {
	int a = 0;
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			a = i * j;
			cout << i << " * " << j << " = " << a << "\t";
		}
		cout << endl;
	}
	return 0;
}
*/
/*
int main() {
	int n;
	setlocale(LC_ALL, "ru");
	cout << "Введите границу:";
	cin >> n;

	for (int i = 2; i <= n; i++) {
		bool a = true;
		for (int j = 2; j*j < i; j++) {
			if (i % j == 0) {
				a = false;
				break;
			}
		}
		if (a) {
			cout << i << " ";
		}
	}
	return 0;
}
*/
/*
int main() {
	int M, N;
	setlocale(LC_ALL, "ru");
	cout << "Введите количество строк M: ";
	cin >> M;
	cout << "Введите количество строк N: ";
	cin >> N;

	int num = 1;

	for (int i = 0; i < M; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < N; j++) {
				cout << num << "\t";
				num++;
			}
		}
		else {
			int start = num + N - 1;
			for (int j = 0; j < N; j++) {
				cout << (start - j) << "\t";
			}
			num += N;
		}
		cout << endl;
	}
	
	
	return 0;
}
*/

int main() {
	int N;
	setlocale(LC_ALL, "ru");
	cout << "Введите N (от 1 до 4): ";
	cin >> N;

	if (N < 1 || N > 4) {
		cout << "Поддерживаются только N = 1, 2, 3, 4.\n";
		return 1;
	}

	if (N == 1) {
		cout << "1\n";
	}
	else if (N == 2) {
		for (int a = 1; a <= 2; a++) {
			for (int b = 1; b <= 2; b++) {
				if (b != a) cout << a << " " << b << "\n";
			}
		}
	}
	else if (N == 3) {
		for (int a = 1; a <= 3; a++) {
			for (int b = 1; b <= 3; b++) {
				if (b == a) continue;
				for (int c = 1; c <= 3; c++) {
					if (c == a || c == b) continue;
					cout << a << " " << b << " " << c << "\n";
				}
			}
		}
	}
	else if (N == 4) {
		for (int a = 1; a <= 4; a++) {
			for (int b = 1; b <= 4; b++) {
				if (b == a) continue;
				for (int c = 1; c <= 4; c++) {
					if (c == a || c == b) continue;
					for (int d = 1; d <= 4; d++) {
						if (d == a || d == b || d == c) continue;
						cout << a << " " << b << " " << c << " " << d << "\n";
					}
				}
			}
		}
	}

	return 0;
}