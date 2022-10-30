#include <iostream>
#include <string>
using namespace std;

void lol(string s) {
    for (int i = s.length(); i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << s[j];
        }
        cout << endl;
    }
}

int main()
{
    string a;
    cin >> a;
    lol(a);
    system("pause");
}