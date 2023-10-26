// Exercise_2_ChessBoard.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int main() {
    setlocale(LC_ALL, "ru");

    int boardSize; // Размер клетки (ширина и высота)
    int rows, cols; // Количество строк и столбцов на доске

    // Ввод размера клетки
    std::cout << "Введите размер клетки: ";
    std::cin >> boardSize;

    // Ввод количества строк и столбцов
    std::cout << "Введите количество строк: ";
    std::cin >> rows;
    std::cout << "Введите количество столбцов: ";
    std::cin >> cols;

    // Генерация шахматной доски
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            // Вывод белых клеток
            for (int k = 0; k < boardSize; ++k) {
                std::string line(boardSize, '*');
                std::cout << line;
            }

            // Вывод черных клеток
            for (int k = 0; k < boardSize; ++k) {
                std::string line(boardSize, '-');
                std::cout << line;
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
