#include "get_ASCII.h"
#include<iostream>
using namespace std;


int get_ASCII()
{
    int symbol1 = 0;
    char symbol = 0;
    cout << "¬ведите цифры (* дл€ окончани€): " << endl;
    while (symbol != '*') {
        cout << " ¬вести цифру с клавиатуры: " << endl;
        cin >> symbol;
        symbol1 = char(symbol);
        if (symbol != '*') {
            cout << "номер в ASCII = " << symbol1;
        }
    }
    return 0;
}