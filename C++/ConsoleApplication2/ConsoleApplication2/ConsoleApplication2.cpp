#include <iostream>
#include <clocale>
#include <fstream>
#include <cstdlib>
#include <cctype>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	ifstream file("1.txt");
	char c;
	string b;
	if (!file) {
		cout << "Файл не найден!\n";
	}
	else {
	getline(file,b);
	}
	cout << b;
	file.close();
	system("pause");
}