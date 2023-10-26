// Exercise_3_StringClass.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstring>

class String {
private:
    char* str;
    static int count; // Статическая переменная-член для отслеживания количества созданных объектов

public:
    // Конструктор по умолчанию
    String() : str(new char[81]) {
        count++;
        strcpy_s(str, 81, "");
    }

    // Конструктор для создания строки произвольного размера
    String(int size) : str(new char[size + 1]) {
        count++;
        strcpy_s(str, size + 1, "");
    }

    // Конструктор, который создает строку и инициализирует ее строкой, полученной от пользователя
    String(const char* s) : str(new char[strlen(s) + 1]) {
        count++;
        strcpy_s(str, strlen(s) + 1, s);
    }

    // Деструктор
    ~String() {
        delete[] str;
        count--;
    }

    // Статическая функция-член для возвращения количества созданных объектов строк
    static int getCount() {
        return count;
    }

    // Функция для ввода строки с клавиатуры
    void input() {
        std::cout << "Введите строку: ";
        std::cin.getline(str, 80);
    }

    // Функция для вывода строки на экран
    void display() const {
        std::cout << str << std::endl;
    }
};

int String::count = 0; // Инициализация статической переменной-члена

int main() {
    setlocale(LC_ALL, "ru");
    String defaultString; // Вызов конструктора по умолчанию
    String customSizeString(50); // Вызов конструктора с произвольным размером
    String userInputString; // Вызов конструктора с вводом от пользователя

    userInputString.input();

    std::cout << "Строка 1: ";
    defaultString.display();
    std::cout << "Строка 2: ";
    customSizeString.display();
    std::cout << "Строка, введенная пользователем: ";
    userInputString.display();

    std::cout << "Количество созданных объектов строк: " << String::getCount() << std::endl;

    return 0;
}
