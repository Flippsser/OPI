#include "get_ASCII.h"
#include<iostream>
using namespace std;


int get_ASCII()
{
    int symbol1 = 0;
    char symbol = 0;
    cout << "������� ����� (* ��� ���������): " << endl;
    while (symbol != '*') {
        cout << " ������ ����� � ����������: " << endl;
        cin >> symbol;
        symbol1 = char(symbol);
        if (symbol != '*') {
            cout << "����� � ASCII = " << symbol1;
        }
    }
    return 0;
}