#include <iostream>
#include <string.h>
#include<clocale>
#include <stdio.h>
using namespace std;

void pr2()
{
    setlocale(LC_ALL, "Russian");
    char ch1[20] = "Строка 1";
    char ch2[20] = "Строка 2";
    string st,st3,st2;
    bool f;
    
    f = strcmp(ch1,ch2); //Проверка на равенство строк по содержимому
    if (f) {
        cout << f << endl;
        cout << "Строки не равны" << endl;
    }

    char ch3[100];
    strcpy_s(ch3, ch2);//Копирование строки 2 в строку 3
    cout << (ch3) << endl;

    strcat_s(ch3, " + какая-то строка"); //Конкатенация
    cout << ch3 << endl;

    cout << "size(ch3)=" << size(ch3) << endl; //Вывод размера строки (описанного массива)

    if (!st.size()) { //Проверяет пуста ли строка
        cout << "Пусто" << endl;
    }

    

    system("pause");
}