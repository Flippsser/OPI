#include "case1.h"
#include<iostream>
using namespace std;
int case1()
{
    int a1 = 0, b1 = 0, diff = 0;
    char a=0, b;
    cout << "¬ведите последовательность (** через enter дл€ окончани€): " << endl;
    while (a != '*') {
        cout << "¬вести заглавную и строчную букву русского алфавита с клавиатуры: " << endl;
        cin >> a >> b;
        a1 = char(a);
        b1 = char(b);
        diff = b1 - a1;
        if (a != '*')
            cout << "Diff = " << diff;
    }
    return 0;
}