#include <iostream>
#include <clocale>
#include <algorithm>
#include <time.h>
#include <iomanip>
#include <cmath>

using namespace std;

void Program1()
{
	cout << endl << "*********Задание 1*********" << endl;
	srand(time(NULL));
	int n;
	int sum = 0;
	cout << "Введите размер массива: "; cin >> n;
	int* mas = new int[n];
	
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 100 - 50;
		cout << mas[i] << ' ';
		if (mas[i] > 0) sum += mas[i];
	}

	cout << endl << "Сумма положительных элементов равна " << sum <<endl;
	
	int min = abs(mas[0]);
	int max = abs(mas[0]);

	for (int i = 0; i < n;i++) {
		if (min > abs(mas[i])) min = abs(mas[i]);
		if (max < abs(mas[i])) max = abs(mas[i]);
	}
	
	bool b = false;
	int pr = 1;

	for (int i = 0; i < n; i++) {
		if ((abs(mas[i]) == min) || (abs(mas[i]) == max)) b = not(b);
		if ((abs(mas[i]) != min) && (abs(mas[i]) != max))
			if (b) pr *= mas[i];
	}

	cout<<"Произведение между модулями max и min: " << pr << endl;
	cout << "Min: " << min << endl << "Max: " << max << endl;
	
	int t;
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++) {
			if (mas[i] < mas[j]) {
				t = mas[j];
				mas[j] = mas[i];
				mas[i] = t;
			};
		}
	}

	for (int i = 0; i < n; i++) 
		cout << mas[i] << ' ';

	cout << endl;

}

void Program2() {
	cout << endl << "*********Задание 2*********" << endl << endl;
	cout.precision(2);
	const int n = 8;
	const int m = 10;
	float res;
	float A[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			res = (1.0 / (i + j + 2));
			A[i][j] = res;
			cout << setw(5) << (A[i][j]) << ' ';
		}
		cout << endl;
	}
}

void Program3() {
	cout << endl << "*********Задание 3*********" << endl << endl;
	int n;
	float s=0, sz, sc;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sz = 0.0;
		sc = 1;
		for (int j = 1; j <= i; j++) {
			sc = sc * j;
			sz = sz + (1.0 / j);
		}
		s += sc / sz;
	}
	s += 1;
	cout << s << endl;
}

void Program4() {
	cout << endl << "*********Задание 4*********" << endl << endl;
	double Xn, Xk, dX, e, nextX, Y;
	int n;
	int prec = 7;
	Xn = 1;
	
	cout << "Введите желаемое видимое количество знаков после запятой (предпочетаемо 7): "; cin >> prec;
	cout.precision(prec);
	cout << "Xнач не должно быть равно 1. Отображаемая точность до "<< prec <<" знаков после запятой " << endl;
	while (Xn == 1) {
		cout << ("Введите начальное значене Xнач: "); cin >> Xn;
	}
	
	cout << ("Введите конечное значение Xкон: "); cin >> Xk;
	cout << ("Введите шаг dX: "); cin >> dX;
	cout << ("Введите точность e: "); cin >> e;
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
	int input = -1;
	while (input != 0)
	{
		cout << endl << "Чтобы выйти из программы напишите 0" << endl << "Выберите программу написав цифру от 1 до 4: "; cin >> input;
		switch (input)
		{
		case 1: Program1(); break;
		case 2: Program2(); break;
		case 3: Program3(); break;
		case 4: Program4(); break;
		case 0: cout << endl << "Конец работы программы, спасибо за использование :)" << endl << endl; break;
		default: cout << "Программы под таким номером не существует!" << endl; break;
		}
	}
	system("PAUSE");
	return 0;
}