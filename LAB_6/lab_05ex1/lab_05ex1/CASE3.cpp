#include "case3.h"
#include<iostream>
using namespace std;
int case3()
{
    int a1 = 0, b1 = 0, diff = 0;
    char a = 0, b;
    cout << "������� ������������������ (* ����� enter ��� ���������): " << endl;
    while (a != '*') {
        cout << " ������ ����� � ����������: " << endl;
        cin >> a;
        a1 = char(a);
        if (a != '*')
            cout << "a1 = " << a1;
    }
    return 0;
}