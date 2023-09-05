// Ex4_5 Зарплата.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Написать программу, которая запрашивает сумму заработной платы 12-ти сотрудников за Март, Апрель и Май. Необходимо определить: 1) выплату по каждому сотруднику за квартал; 2) общую выплату по всем сотрудникам за квартал. */

#include <iostream>

int main() 
{   
    setlocale(LC_ALL, "ru");

    const int numEmployees = 12;
    const int numMonths = 3;

    double salary[numEmployees][numMonths];
    double totalQuarterlyPayment = 0.0;

    // Ввод данных
    for (int i = 0; i < numEmployees; ++i) {
        std::cout << "Введите зарплату для сотрудника " << i + 1 << ":\n";
        for (int j = 0; j < numMonths; ++j) {
            std::cout << "Зарплата за месяц " << j + 1 << ": ";
            std::cin >> salary[i][j];
        }
    }

    // Вывод результатов
    std::cout << "\nВыплата по каждому сотруднику за квартал:\n";
    for (int i = 0; i < numEmployees; ++i) {
        double quarterlyPayment = 0.0;
        for (int j = 0; j < numMonths; ++j) {
            quarterlyPayment += salary[i][j];
        }
        std::cout << "Сотрудник " << i + 1 << ": " << quarterlyPayment << "\n";
        totalQuarterlyPayment += quarterlyPayment;
    }

    std::cout << "\nОбщая выплата по всем сотрудникам за квартал: " << totalQuarterlyPayment << "\n";

    return 0;
}
