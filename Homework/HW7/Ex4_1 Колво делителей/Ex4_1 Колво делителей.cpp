// Ex4_1 Колво делителей.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Написать программу, которая для чисел в диапазоне от A до B определяла количество их делителей. */

#include <iostream>

int countDivisors(int number) {
    int count = 0;

    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            count++;
        }
    }

    return count;
}

int main() 
{
    setlocale(LC_ALL, "ru");

    int A, B;
    std::cout << "Введите начальное целое число A: ";
    std::cin >> A;

    std::cout << "Введите конечное целое число B: ";
    std::cin >> B;

    std::cout << "Количество делителей для чисел от " << A << " до " << B << ":" << std::endl;

    for (int i = A; i <= B; i++) {
        int divisors = countDivisors(i);
        std::cout << "Число " << i << " имеет " << divisors << " делителей." << std::endl;
    }

    return 0;
}
