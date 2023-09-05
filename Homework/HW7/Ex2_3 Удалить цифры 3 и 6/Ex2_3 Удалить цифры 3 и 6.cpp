// Ex2_3 Удалить цифры 3 и 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Пользователь вводит любое целое число. Необходимо из этого целого числа удалить все цифры 3 и 6 и вывести обратно на экран. */

#include <iostream>

int removeDigits(int number, int digitToRemove) {
    int result = 0;
    int multiplier = 1;

    while (number > 0) {
        int digit = number % 10;
        if (digit != digitToRemove) {
            result += digit * multiplier;
            multiplier *= 10;
        }
        number /= 10;
    }

    return result;
}

int main()
{
    setlocale(LC_ALL, "ru");

    int inputNumber;
    std::cout << "Введите целое число: ";
    std::cin >> inputNumber;

    int numberWithout36 = removeDigits(inputNumber, 3); // Удаляем цифру 3
    numberWithout36 = removeDigits(numberWithout36, 6); // Удаляем цифру 6

    std::cout << "Число без цифр 3 и 6: " << numberWithout36 << std::endl;

    return 0;
}
