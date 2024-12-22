#include <iostream>
#include<Windows.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    int a1 = 0, b1 = 0, diff = 0,x;
    char a, b;
    cout << "Введите 1or2or3"<<endl;
    cin >> x;
    switch (x)
    {
    case 1: {
        cout << "Ввести заглавную и строчную букву латинского алфавита с клавиатуры: ";
        cin >> a >> b;
        a1 = char(a);
        b1 = char(b);
        diff = b1 - a1;
        cout << "Diff = " << diff;
        break;
    }
    case 2: {
        cout << "Ввести заглавную и строчную букву русского алфавита с клавиатуры: ";
        cin >> a >> b;
        a1 = char(a);
        b1 = char(b);
        diff = b1 - a1;
        cout << "Diff = " << diff;
        break;
    }
    case 3: {
        cout << " Ввести цифру с клавиатуры: ";
        cin >> a;
        a1 = char(a);
        cout << "a1 = " << a1;
        break;
    }

    default: {
        cout << " Необходимо ввести корректный вариант ";
        break;
    }
    }
    return 0;
}
