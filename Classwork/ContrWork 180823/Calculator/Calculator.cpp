#include <iostream>

// Функции для операций
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return b != 0 ? a / b : 0; // Предотвращение деления на ноль
}

int main() {
    setlocale(LC_ALL, "ru");
    // Массив указателей на функции
    double (*operations[])(double, double) = { add, subtract, multiply, divide };

    std::cout << "Выберите операцию:" << std::endl;
    std::cout << "1. Сложение" << std::endl;
    std::cout << "2. Вычитание" << std::endl;
    std::cout << "3. Умножение" << std::endl;
    std::cout << "4. Деление" << std::endl;

    int choice;
    std::cin >> choice;

    if (choice >= 1 && choice <= 4) {
        double a, b;
        std::cout << "Введите первое число: ";
        std::cin >> a;
        std::cout << "Введите второе число: ";
        std::cin >> b;

        double result = operations[choice - 1](a, b);

        std::cout << "Результат: " << result << std::endl;
    }
    else {
        std::cout << "Некорректный выбор операции." << std::endl;
    }

    return 0;
}
