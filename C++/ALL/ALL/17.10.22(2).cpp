#include <iostream>
#include<clocale>
#include <string.h>
using namespace std;
void pr1(){
    char str[100]="яблоко";
    char str_2[100]="груша";
    char str_3[100]="апельсин";
    string s("Mystroka");
    string st;
    strcpy_s(str_2, str);  // Копирование в  str_2 значения из  str. 
    cout<<str_2<<endl;//Вывод: "яблоко"
    cout << strcmp(str, str_2) << endl; //Проверяет равенство str и str_2. Строки равны, так как мы копировали значения из str в str_2. Вывод: 0
    cout << strcmp(str_3, str) << endl;//Проверяет равенство str и str_3.Строки не равны(Апельсин>яблоко). Вывод: -1
    cout << strcat_s(str, str_3) << endl;//Сложение строк str и str_3. Вывод: яблокоапельсин
    cout<<s.size()<<endl;//Длина строки s. Вывод: 8
    if (!st.size()){//Проверяет пуста ли строка
      cout<<"Пусто"<<endl;//Вывод:Пусто
    }
}