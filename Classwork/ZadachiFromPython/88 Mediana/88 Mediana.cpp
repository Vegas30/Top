#include <iostream>
#include <algorithm>

double calculateMedian(double num1, double num2, double num3) {
    // Используем функцию std::minmax для нахождения минимального и максимального чисел
    double minNum = std::min({ num1, num2, num3 });
    double maxNum = std::max({ num1, num2, num3 });

    // Находим среднее число (медиану) из трех
    double median = num1 + num2 + num3 - minNum - maxNum;
    return median;
}

int main() {
    double num1, num2, num3;

    // Запрашиваем у пользователя три числа
    std::cout << "Введите три числа: ";
    std::cin >> num1 >> num2 >> num3;

    double median = calculateMedian(num1, num2, num3);

    std::cout << "Медиана: " << median << std::endl;

    return 0;
}
