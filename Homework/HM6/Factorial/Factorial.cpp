/* Дано натуральное число n. Написать программу, которая вычисляет факториал неотрицательных целых чисел n (т.е. число целое и больше 0). */

#include <iostream>


using namespace std;

unsigned long long factorial(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1; // Факториал 0 и 1 равен 1
    }
    else 
    {
        return n * factorial(n - 1); // Рекурсивно вычисляем факториал
    }
}

int main()
{
    setlocale(LC_ALL, "Rus");
    

    int n;

    cout << "Введите натуральное число n: ";
    cin >> n;

    if (n >= 0) 
    {
        unsigned long long result = factorial(n);
        cout << "Факториал числа " << n << " равен: " << result << "\n";
    }
    else 
    {
        cout << "Ошибка: Введенное число не является натуральным.\n";
    }

    return 0;
}
