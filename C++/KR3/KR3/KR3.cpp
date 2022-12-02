#include <iostream>
#include <clocale>
#include <algorithm>
#include <time.h>
#include <iomanip>
#include <cmath>

using namespace std;

void Program1() {
	const int n = 255;
	char s[n];
	int slovo, count = 0;
	cout << "Введите строку: " << endl;
	cin.get(s, n);
	int i = 0;
	while (s[i] == ' ' && s[i] != '\0')
		i++;
	slovo = 0;
	while (s[i] != '\0') {
		if (s[i] != ' ' && slovo == 0)
		{
			slovo = 1;
			count++;
		}
		else if (s[i] == ' ')
			slovo = 0;
		i++;
	}
	cout << "Количество слов в строке " << count <<endl;
}

void Program2(double Xn, double Xk, double dX, double e, int prec) {
	int n;
	double nextX, Y;
	cout.precision(prec);

	cout << ("_________________________") << endl;
	cout << ("|    x  |    y  |   N   |") << endl;
	cout << ("|_______|_______|_______|") << endl;

	for (; Xn <= Xk; Xn += dX)
	{
		nextX = 1.0;
		Y = 0;
		n = 1;
		do {
			nextX = (1.0 / (n * pow(Xn, n)));
			Y = Y + nextX;
			n = n + 2;
		} while (abs(nextX) > e);
		cout << setw(8) << Xn << ' ' << 2 * Y << ' ' << n << endl;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	Program1();
	double Xn=1, Xk, dX, e, nextX, Y;
	int n;
	int prec = 7;
	cout << "Введите желаемое видимое количество знаков после запятой (предпочетаемо 7): "; cin >> prec;
	cout.precision(prec);
	cout << "Xнач не должно быть равно 1. Отображаемая точность до " << prec << " знаков после запятой " << endl;
	while (Xn == 1) {
		cout << ("Введите начальное значене Xнач: "); cin >> Xn;
	}

	cout << ("Введите конечное значение Xкон: "); cin >> Xk;
	cout << ("Введите шаг dX: "); cin >> dX;
	cout << ("Введите точность e: "); cin >> e;
	Program2(Xn, Xk, dX, e, prec);
	system("PAUSE");
	
	return 0;
}
