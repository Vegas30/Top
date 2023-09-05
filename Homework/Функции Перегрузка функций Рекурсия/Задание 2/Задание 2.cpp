// Задание 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Написать рекурсивную функцию нахождения наибольшего общего делителя двух целых чисел

#include <iostream>

// Рекурсивная функция для нахождения НОД
int nod(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return nod(b, a % b);
    }
}

int main() {
    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    int result = nod(num1, num2);
    std::cout << "NOD of " << num1 << " and " << num2 << " is " << result << std::endl;

    return 0;
}
