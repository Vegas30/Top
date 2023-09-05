// Ex2_5 Куб суммы чисел.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Пользователь вводит число А. Программа должна определить, что куб суммы цифр этого число равен А*А. */

#include <iostream>

int sumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() 
{
    setlocale(LC_ALL, "ru");

    int A;
    std::cout << "Введите целое число A: ";
    std::cin >> A;

    int sum = sumOfDigits(A); // Вычисляем сумму цифр числа A
    int cubeSum = sum * sum * sum;

    if (cubeSum == A * A) {
        std::cout << "Куб суммы цифр числа " << A << " равен " << A * A << std::endl;
    }
    else {
        std::cout << "Куб суммы цифр числа " << A << " не равен " << A * A << std::endl;
    }

    return 0;
}
