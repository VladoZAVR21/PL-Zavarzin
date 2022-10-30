#include <iostream>
#include <string>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	struct fio {
		char fname[20];
		char sname[20];
		char tname[20];
	};
	struct student {
		fio fio;
		int age;
		int score;
	};
	struct student group[1];

	strcpy_s(group[0].fio.fname, "Ivan\n");
	strcpy_s(group[0].fio.sname, "Ivanov\n");
	strcpy_s(group[0].fio.tname, "Ivanovich\n");


	cout << group[0].fio.fname << endl << group[0].fio.sname << endl << group[0].fio.tname << endl;
	system("pause");
}
