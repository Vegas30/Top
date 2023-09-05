// Ex2_6 Делится без остатка.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Пользователь вводит целое число. Необходимо вывести все числа, на которые заданное число делится без остатка. */


#include <iostream>

int main() 
{   
    setlocale(LC_ALL, "ru");

    long long number;
    std::cout << "Введите целое число: ";
    std::cin >> number;

    std::cout << "Числа, на которые " << number << " делится без остатка:" << std::endl;

    for (long long i = 1; i <= number; i++) {
        if (number % i == 0) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
