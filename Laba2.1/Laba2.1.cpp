
// Lab_02.cpp 
// < Куцалаба Назар > 
// Лабораторна робота № 2.1 
// Лінійні програми. 
// Варіант 13

#include <iostream>
using namespace std;
#include <Windows.h>
#include <cmath>
int main()
{
    SetConsoleCP(1251);

    SetConsoleOutputCP(1251);

    /* вхідні параметри*/ double alpha, beta;

    cout << " Введи альфа: ";
    cin >> alpha;
    cout << " Введи бетта:  ";
    cin >> beta;

    // Обчислення z1
   //double z1 = (sin(alpha) + cos(2 * beta - alpha)) /
        (cos(alpha) - sin(2 * beta - alpha));

    // Обчислення z2
    double z2 = (1 + sin(2 * beta)) / cos(2 * beta);

    /*результат обчислення 1 - го виразу*///cout << "z1 = " << z1 << endl;
    /*результат обчислення 2-го виразу*/cout << "z2 = " << z2 << endl;

    return 0;
}

