// Ex1_2 Колич целых чисел.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Посчитать количество целых чисал в диапазоне от 100 до 999, у которых есть две одинаковые цифры. */

#include <iostream>

bool hasDuplicateDigits(int number) {
    int digits[10] = { 0 }; // Массив для подсчета цифр

    while (number > 0) {
        int digit = number % 10;
        digits[digit]++;
        if (digits[digit] >= 2) {
            return true; // Найдены две одинаковые цифры
        }
        number /= 10;
    }

    return false; // Нет двух одинаковых цифр
}

int main() 
{
    setlocale(LC_ALL, "ru");

    int count = 0;

    for (int i = 100; i <= 999; i++) {
        if (hasDuplicateDigits(i)) {
            count++;
        }
    }

    std::cout << "Количество чисел с двумя одинаковыми цифрами от 100 до 999: " << count << std::endl;

    return 0;
}
