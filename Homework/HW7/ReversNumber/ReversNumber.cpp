#include <iostream>

using namespace std;

void printDigitsReverse(int number) 
{
    if (number < 10) 
    {
        cout << number; // Базовый случай: число состоит из одной цифры
    }
    else 
    {
        cout << number % 10; // Выводим последнюю цифру числа
        printDigitsReverse(number / 10); // Рекурсивный вызов для оставшейся части числа
    }
}

int main() 
{

    setlocale(LC_ALL, "Rus");

    int number;

    // Запрашиваем у пользователя число
    cout << "Введите число: ";
    cin >> number;

    if (number <= 0) 
    {
        cout << "Ошибка: Введенное число должно быть больше нуля.\n";
        return 1;
    }

    cout << "Цифры числа " << number << " в обратном порядке: ";
    printDigitsReverse(number);
    cout << endl;

    return 0;
}
