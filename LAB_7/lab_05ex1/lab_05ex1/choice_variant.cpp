#include <iostream>
#include<Windows.h>
#include "calculate_diff_hi_lo_en.h"
#include "calculate_diff_hi_lo_ru.h"
#include "get_ASCII.h" 
using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    int variant;
    cout << "Выберрите вариант 1or2or3" << endl;
    cin >> variant;
    switch (variant)
    {
    case 1: calculate_diff_hi_lo_en(); break;
    
    case 2: calculate_diff_hi_lo_ru(); break;
   
    case 3: get_ASCII(); break;

    default: cout << " Необходимо ввести корректный вариант "; break;
    
    }
    return 0;
}
