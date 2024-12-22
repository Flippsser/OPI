#include "calculate_diff_hi_lo_ru.h"
#include<iostream>
using namespace std;


int calculate_diff_hi_lo_ru()
{
    int litter_up1 = 0, litter_down2 = 0, diff = 0;
    char litter1 = 0, litter2 = 0;
    cout << "¬ведите последовательность (** через enter дл€ окончани€): " << endl;
    while (litter1 != '*') {
        cout << "¬вести заглавную и строчную букву русского алфавита с клавиатуры: " << endl;
        cin >> litter1 >> litter2;
        litter_up1 = char(litter1);
        litter_down2 = char(litter2);
        diff = litter_down2 - litter_up1;
        if (litter1 != '*') {
            cout << "Diff = " << diff;
        }
    }
    return 0;
}