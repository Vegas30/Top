// Треугольный массив.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main() {
    int numRows = 5; // Количество строк в треугольном массиве

    // Создание двумерного треугольного массива с использованием указателей
    int** triangleArray = new int* [numRows];

    // Заполнение и инициализация треугольного массива
    for (int i = 0; i < numRows; i++) 
    {
        triangleArray[i] = new int[i + 1]; // Выделяем память под каждую строку
        for (int j = 0; j <= i; j++) {
            triangleArray[i][j] = j + 1; // Заполняем значениями (это просто для примера)
        }
    }

    // Вывод треугольного массива
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            std::cout << triangleArray[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Освобождение памяти
    for (int i = 0; i < numRows; i++) {
        delete[] triangleArray[i];
    }
    delete[] triangleArray;

    return 0;
}
