#include <iostream>
#include <clocale>
#include <time.h>

using namespace std;

void BubbleSort() {
	srand(time(NULL));
	int n,t;
	cin >> n;
	int* mas = new int[n];
	for (int i = 0; i < n; i++) {
		mas[i] = rand() % 101;
		cout << mas[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i; j < n; j++) {
			if (mas[i]<mas[j]) {
				t = mas[i];
				mas[i] = mas[j];
				mas[j] = t;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << mas[i] << ' ';
	}
}



int main()
{
	//BubbleSort();
		double x1, x2, dx, e;
		cin >> x1;
		cin >> x2;
		cin >> dx;
		cin >> e;
		int n;
		double S;
		for (double i = x1; i <= x2; i += dx) {
			S = 0.00;
			n = 0;
			cout << i;
			while (2.0 * S < e) {
				S += (1 / ((2 * n + 1) * pow(i, (2 * n + 1))));
				n += 1;
			}
			cout << endl << "Summa: " << S * 2 << " kolvo: " << n << endl;

		}



	cout << endl;
	system("PAUSE");
	return 0;
}