#include <iostream>
#include <clocale>

using namespace std;

class Book {
    char avtor[100];
    char name[100];
    char creator[100];
    int year;
    int paper;
public:
    Book();
    char* Get_Avtor();
    char* Get_Creator();
    int Get_Year();
    void show();
};

Book::Book() {
    cout << "==============================" << endl;
    cout << "Введите Автора: "; cin >> avtor;
    cout << "Введите Название книги: "; cin >> name;
    cout << "Введите Издательство: "; cin >> creator;
    cout << "Введите Год: "; cin >> year;
    cout << "Введите Количество страниц: "; cin >> paper;
}

char* Book::Get_Avtor() { return avtor; };
char* Book::Get_Creator() { return creator; };
int Book::Get_Year() { return year; };

void Book::show() {
    cout << "==============================" << endl;
    cout << "Автор: " << avtor << endl;
    cout << "Название книги: " << name << endl;
    cout << "Издательство: " << creator << endl;
    cout << "Год: " << year << endl;
    cout << "Количество страниц: " << paper << endl;
}

void Spis_Book_Avtor(Book spis[], int n) {
    int i;
    char avtor[100];
    cout << "Введите Автора: ";
    cin >> avtor;
    for (i = 0; i < n; i++)
        if (strcmp(spis[i].Get_Avtor(), avtor) == 0)
            spis[i].show();
}

void Spis_Book_Creator(Book spis[], int n) {
    int i;
    char creator[100];
    cout << "Введите Издательство: ";
    cin >> creator;
    for (i = 0; i < n; i++)
        if (strcmp(spis[i].Get_Creator(), creator) == 0)
            spis[i].show();
}
void Spis_Book_AfterYear(Book spis[], int n) {
    int i, year;
    int ;
    cout << "Введите год: ";
    cin >> year;
    for (i = 0; i < n; i++)
        if (spis[i].Get_Year() > year)
            spis[i].show();
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Book* spis;
    int n;
    cout << "Введите количество книг "; cin >> n;
    spis = new Book[n];
    
    cout << "***Список по автору***" << endl;
    Spis_Book_Avtor(spis, n);
    cout << "***Список по издательству***" << endl;
    Spis_Book_Creator(spis, n);
    cout << "***Список книг после заданного года***" << endl;
    Spis_Book_AfterYear(spis, n);

    system("PAUSE");
    return 0;
}