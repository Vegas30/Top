// Exercise_1_NumberSomeMagik.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main() {
    setlocale(LC_ALL, "ru");
    int number;
    int digitCount = 0;
    int digitSum = 0;
    int zeroCount = 0;
    float average = 0;

    std::cout << "Введите число: ";
    std::cin >> number;

    // Подсчет количества цифр, суммы и количества нулей
    int tempNumber = number;
    while (tempNumber != 0) {
        int digit = tempNumber % 10;
        digitCount++;
        digitSum += digit;
        if (digit == 0) {
            zeroCount++;
        }
        tempNumber /= 10;
    }

    // Расчет среднего арифметического
    if (digitCount != 0) {
        average = static_cast<float>(digitSum) / digitCount;
    }

    // Вывод результата
    int choice;
    std::cout << "Выберите операцию:" << std::endl;
    std::cout << "1. Количество цифр в числе" << std::endl;
    std::cout << "2. Сумма цифр" << std::endl;
    std::cout << "3. Среднее арифметическое цифр" << std::endl;
    std::cout << "4. Количество нулей в числе" << std::endl;
    std::cout << "0. Выйти" << std::endl;
    std::cout << "Ваш выбор: ";
    std::cin >> choice;

    switch (choice) {
    case 1:
        std::cout << "Количество цифр в числе: " << digitCount << std::endl;
        break;
    case 2:
        std::cout << "Сумма цифр: " << digitSum << std::endl;
        break;
    case 3:
        std::cout << "Среднее арифметическое цифр: " << average << std::endl;
        break;
    case 4:
        std::cout << "Количество нулей в числе: " << zeroCount << std::endl;
        break;
    case 0:
        std::cout << "До свидания!" << std::endl;
        break;
    default:
        std::cout << "Неверный ввод." << std::endl;
    }

    return 0;
}
