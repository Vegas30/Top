// Ex4_2 Простые числа.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Создать программу, которая выводит на экран простые числа в диапазоне от 2 до 1000. (Число называется простым, если оно делится только на 1 и на само себя без остатка; причем число 1 простым не считается). */

#include <iostream>

bool isPrime(int number) 
{

    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() 
{
    setlocale(LC_ALL, "ru");

    std::cout << "Простые числа в диапазоне от 2 до 1000:" << std::endl;

    for (int i = 2; i <= 1000; i++) {
        if (isPrime(i)) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
