// Exercise_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>
#include <Windows.h>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Конструктор класса
    Fraction(int num, int den) : numerator(num), denominator(den) {}

    // Функция для вывода дроби
    void display() {
        cout << numerator << "/" << denominator;
    }

    // Функция для сложения дробей
    Fraction add(const Fraction& other) const {
        int num = numerator * other.denominator + other.numerator * denominator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    // Функция для вычитания дробей
    Fraction subtract(const Fraction& other) const {
        int num = numerator * other.denominator - other.numerator * denominator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    // Функция для умножения дробей
    Fraction multiply(const Fraction& other) const {
        int num = numerator * other.numerator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    // Функция для деления дробей
    Fraction divide(const Fraction& other) const {
        int num = numerator * other.denominator;
        int den = denominator * other.numerator;
        return Fraction(num, den);
    }
};

int main() {

    setlocale(LC_ALL, "ru");

    Fraction fraction1(1, 2); // Дробь 1/2
    Fraction fraction2(3, 4); // Дробь 3/4

    // Примеры выполнения арифметических операций
    Fraction resultAdd = fraction1.add(fraction2); // Сложение
    Fraction resultSubtract = fraction1.subtract(fraction2); // Вычитание
    Fraction resultMultiply = fraction1.multiply(fraction2); // Умножение
    Fraction resultDivide = fraction1.divide(fraction2); // Деление

    // Вывод результатов
    cout << "Сложение: ";
    resultAdd.display();
    cout << endl;

    cout << "Вычитание: ";
    resultSubtract.display();
    cout << endl;

    cout << "Умножение: ";
    resultMultiply.display();
    cout << endl;

    cout << "Деление: ";
    resultDivide.display();
    cout << endl;

    return 0;
}
