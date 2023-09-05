// Ex2_7 Два числа делятся без остатка.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Пользователь вводит два целых числа. Необходимо вывести все целые числа, на которые оба введеных числа делятся без остатка. */

#include <iostream>

int main() 
{
    setlocale(LC_ALL, "ru");

    int number1, number2;
    std::cout << "Введите первое целое число: ";
    std::cin >> number1;

    std::cout << "Введите второе целое число: ";
    std::cin >> number2;

    std::cout << "Числа, на которые оба числа " << number1 << " и " << number2 << " делятся без остатка:" << std::endl;

    int smallerNumber = (number1 < number2) ? number1 : number2;

    for (int i = 1; i <= smallerNumber; i++) {
        if (number1 % i == 0 && number2 % i == 0) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
