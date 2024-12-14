#include <iostream>
#include<Windows.h>
#include "case1.h"
#include "case2.h"
#include "case3.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    int a1 = 0, b1 = 0, diff = 0,x;
    char a=0, b=0;
    cout << "Введите 1or2or3"<<endl;
    cin >> x;
    switch (x)
    {
    case 1: case1(); break;
    
    case 2: case2(); break;
   
    case 3: case3(); break;
    

    default: {
        cout << " Необходимо ввести корректный вариант ";
        break;
    }
    }
    return 0;
}
