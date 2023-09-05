// Задание 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*  Число называется совершенным, если сумма
всех его делителей равна ему самому. Напишите функцию
поиска таких чисел во введенном интервале */

#include <iostream>

// Функция для определения совершенного числа
bool isPerfectNumber(int number) {
    int sum = 0;
    for (int i = 1; i <= number / 2; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum == number;
}

// Функция для поиска совершенных чисел в заданном интервале
void findPerfectNumbers(int start, int end) {
    std::cout << "Perfect numbers in the range [" << start << ", " << end << "]: ";
    for (int i = start; i <= end; ++i) {
        if (isPerfectNumber(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int lowerBound, upperBound;

    std::cout << "Enter the lower bound of the range: ";
    std::cin >> lowerBound;

    std::cout << "Enter the upper bound of the range: ";
    std::cin >> upperBound;

    findPerfectNumbers(lowerBound, upperBound);

    return 0;
}
