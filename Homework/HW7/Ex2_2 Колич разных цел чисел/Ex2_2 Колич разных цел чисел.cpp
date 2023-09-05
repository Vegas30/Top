// Ex2_2 Колич разных цел чисел.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Посчитать количество целых чисел в диапазоне от 100 до 999, у которых все цифры разные. */

#include <iostream>

bool hasUniqueDigits(int number) {
    bool digitsUsed[10] = { false }; // Массив для отметки использованных цифр

    while (number > 0) {
        int digit = number % 10;
        if (digitsUsed[digit]) {
            return false; // Найдена повторяющаяся цифра
        }
        digitsUsed[digit] = true;
        number /= 10;
    }

    return true; // Все цифры разные
}

int main() 
{
    setlocale(LC_ALL, "ru");

    int count = 0;

    for (int i = 100; i <= 999; i++) {
        if (hasUniqueDigits(i)) {
            count++;
        }
    }

    std::cout << "Количество чисел с разными цифрами от 100 до 999: " << count << std::endl;

    return 0;
}
