// Задание 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*  Написать функцию, которая определяет, является ли «счастливым» шестизначное число */

#include <iostream>

// Функция для определения, является ли число "счастливым"
bool isHappyNumber(int number) {
    int sumFirstThree = 0;
    int sumLastThree = 0;

    for (int i = 0; i < 6; ++i) {
        int digit = number % 10;
        if (i < 3) {
            sumFirstThree += digit;
        }
        else {
            sumLastThree += digit;
        }
        number /= 10;
    }

    return sumFirstThree == sumLastThree;
}

int main() {
    int num;

    std::cout << "Enter a six-digit number: ";
    std::cin >> num;

    if (num >= 100000 && num <= 999999) {
        if (isHappyNumber(num)) {
            std::cout << num << " is a happy number!" << std::endl;
        }
        else {
            std::cout << num << " is not a happy number." << std::endl;
        }
    }
    else {
        std::cout << "Please enter a valid six-digit number." << std::endl;
    }

    return 0;
}

