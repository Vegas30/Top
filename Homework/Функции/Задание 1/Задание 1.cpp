// Задание 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Написать функцию, которая принимает два
параметра: основание степени и показатель степени, и
вычисляет степень числа на основе полученных данных */

#include <iostream>

// Функция для вычисления степени числа
double power(double base, int exponent) {
    if (exponent == 0) {
        return 1; // Любое число в степени 0 равно 1
    }
    else if (exponent > 0) {
        double result = 1.0;
        for (int i = 0; i < exponent; ++i) {
            result *= base;
        }
        return result;
    }
    else {
        // Если показатель степени отрицателен, используем обратное значение основания
        return 1.0 / power(base, -exponent);
    }
}

int main() {
    double base;
    int exponent;

    std::cout << "Enter the base: ";
    std::cin >> base;

    std::cout << "Enter the exponent: ";
    std::cin >> exponent;

    double result = power(base, exponent);
    std::cout << base << " raised to the power of " << exponent << " is " << result << std::endl;

    return 0;
}

