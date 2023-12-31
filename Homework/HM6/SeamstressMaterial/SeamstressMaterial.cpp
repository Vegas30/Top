﻿/*  У швеи имеется ткань длиной L. Ей необходимо пошить подушки длиной P. Ширина ткани совпадает с шириной подушки. 
    Определить сколько подушек сможет пошить швея, если умножать и дельть она не умеет. */
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int L, P;

    cout << "Введите длину ткани: ";
    cin >> L;

    cout << "Введите длину подушки: ";
    cin >> P;

    int count = 0;

    // Пока длина ткани больше или равна длине подушки, вычитаем длину подушки из длины ткани
    while (L >= P) 
    {
        L -= P;
        count++;
    }

    cout << "Швея сможет пошить " << count << " подушек.\n";

    return 0;
}
