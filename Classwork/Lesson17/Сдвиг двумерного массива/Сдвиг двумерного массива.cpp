// Сдвиг двумерного массива.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>

const int MAX_ROWS = 10;
const int MAX_COLS = 10;

void shiftLeft(int arr[][MAX_COLS], int rows, int cols, int shiftAmount) {
    for (int row = 0; row < rows; ++row) {
        for (int shift = 0; shift < shiftAmount; ++shift) {
            int temp = arr[row][0]; // Сохраняем первый элемент строки
            for (int col = 0; col < cols - 1; ++col) {
                arr[row][col] = arr[row][col + 1]; // Сдвигаем элементы влево
            }
            arr[row][cols - 1] = temp; // Перемещаем первый элемент в конец строки
        }
    }
}

void printArray(int arr[][MAX_COLS], int rows, int cols) {
    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            std::cout << arr[row][col] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int rows, cols;
    std::cout << "Введите количество строк: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов: ";
    std::cin >> cols;

    if (rows <= 0 || rows > MAX_ROWS || cols <= 0 || cols > MAX_COLS) {
        std::cout << "Некорректные размеры массива." << std::endl;
        return 1;
    }

    int arr[MAX_ROWS][MAX_COLS];

    std::cout << "Введите элементы массива:" << std::endl;
    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            std::cin >> arr[row][col];
        }
    }

    int shiftAmount;
    std::cout << "Введите количество позиций для сдвига влево: ";
    std::cin >> shiftAmount;

    shiftLeft(arr, rows, cols, shiftAmount);

    std::cout << "Массив после сдвига:" << std::endl;
    printArray(arr, rows, cols);

    return 0;
}
