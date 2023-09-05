// Задание 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Написать функцию, которая получает в качестве параметров 2 целых числа и возвращает сумму чисел
из диапазона между ними */

#include <iostream>

// Функция для вычисления суммы чисел в диапазоне между двумя числами
int sumInRange(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    int result = sumInRange(num1, num2);
    std::cout << "Sum of numbers in the range [" << num1 << ", " << num2 << "] is " << result << std::endl;

    return 0;
}

