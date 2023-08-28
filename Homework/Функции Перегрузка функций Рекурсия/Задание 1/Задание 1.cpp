#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>

const int MAX_SIZE = 10; // Максимальный размер матрицы

// Инициализация квадратной матрицы случайными числами (int)
void initializeMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    std::srand(std::time(0)); // Инициализация генератора случайных чисел

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = std::rand() % 100; // Заполняем случайными числами от 0 до 99
        }
    }
}

// Инициализация квадратной матрицы случайными числами (double)
void initializeMatrix(double matrix[MAX_SIZE][MAX_SIZE], int size) {
    std::srand(std::time(0)); // Инициализация генератора случайных чисел

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = static_cast<double>(std::rand()) / RAND_MAX; // Заполняем случайными действительными числами от 0 до 1
        }
    }
}

// Инициализация квадратной матрицы случайными символами (char)
void initializeMatrix(char matrix[MAX_SIZE][MAX_SIZE], int size) {
    std::srand(std::time(0)); // Инициализация генератора случайных чисел

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            matrix[i][j] = 'A' + std::rand() % 26; // Заполняем случайными символами от 'A' до 'Z'
        }
    }
}

// Вывод матрицы типа int на экран
void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

// Вывод матрицы типа double на экран
void printMatrix(double matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

// Вывод матрицы типа char на экран
void printMatrix(char matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

// Определение максимального и минимального элемента на типа (int) главной диагонали матрицы
void findDiagonalMinMax(int matrix[MAX_SIZE][MAX_SIZE], int size, int& minElement, int& maxElement) {
    minElement = matrix[0][0];
    maxElement = matrix[0][0];

    for (int i = 0; i < size; ++i) {
        if (matrix[i][i] < minElement) {
            minElement = matrix[i][i];
        }
        if (matrix[i][i] > maxElement) {
            maxElement = matrix[i][i];
        }
    }
}

// Определение максимального и минимального элемента типа (double) на главной диагонали матрицы
void findDiagonalMinMax(double matrix[MAX_SIZE][MAX_SIZE], int size, double& minElement, double& maxElement) {
    minElement = matrix[0][0];
    maxElement = matrix[0][0];

    for (int i = 0; i < size; ++i) {
        if (matrix[i][i] < minElement) {
            minElement = matrix[i][i];
        }
        if (matrix[i][i] > maxElement) {
            maxElement = matrix[i][i];
        }
    }
}

// Определение максимального и минимального элемента типа (char) на главной диагонали матрицы
void findDiagonalMinMax(char matrix[MAX_SIZE][MAX_SIZE], int size, char& minElement, char& maxElement) {
    minElement = matrix[0][0];
    maxElement = matrix[0][0];

    for (int i = 0; i < size; ++i) {
        if (matrix[i][i] < minElement) {
            minElement = matrix[i][i];
        }
        if (matrix[i][i] > maxElement) {
            maxElement = matrix[i][i];
        }
    }
}

// Сортировка элементов по возрастанию отдельно для каждой строки матрицы (int)
void sortRows(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; ++i) {
        std::sort(matrix[i], matrix[i] + size);
    }
}

// Сортировка элементов по возрастанию отдельно для каждой строки матрицы (double)
void sortRows(double matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; ++i) {
        std::sort(matrix[i], matrix[i] + size);
    }
}

// Сортировка элементов по возрастанию отдельно для каждой строки матрицы (char)
void sortRows(char matrix[MAX_SIZE][MAX_SIZE], int size) {
    for (int i = 0; i < size; ++i) {
        std::sort(matrix[i], matrix[i] + size);
    }
}

int main() {
    int size = 3; // Размер квадратной матрицы

    // Инициализация и заполнение матриц случайными числами
    int intMatrix[MAX_SIZE][MAX_SIZE];
    double doubleMatrix[MAX_SIZE][MAX_SIZE];
    char charMatrix[MAX_SIZE][MAX_SIZE];

    initializeMatrix(intMatrix, size);
    initializeMatrix(doubleMatrix, size);
    initializeMatrix(charMatrix, size);

    // Вывод матриц
    std::cout << "Integer Matrix:\n";
    printMatrix(intMatrix, size);

    std::cout << "Double Matrix:\n";
    printMatrix(doubleMatrix, size);

    std::cout << "Character Matrix:\n";
    printMatrix(charMatrix, size);

    // Определение максимального и минимального элемента на главной диагонали
    int intMin, intMax;
    findDiagonalMinMax(intMatrix, size, intMin, intMax);
    std::cout << "Integer Diagonal Min: " << intMin << ", Max: " << intMax << '\n';

    // Определение максимального и минимального элемента на главной диагонали
    double dMin, dMax;
    findDiagonalMinMax(doubleMatrix, size, dMin, dMax);
    std::cout << "Double Diagonal Min: " << dMin << ", Max: " << dMax << '\n';

    // Определение максимального и минимального элемента на главной диагонали
    char chMin, chMax;
    findDiagonalMinMax(charMatrix, size, chMin, chMax);
    std::cout << "Char Diagonal Min: " << chMin << ", Max: " << chMax << '\n';

    // ... (аналогично для других типов данных)

    // Сортировка элементов по возрастанию для каждой строки
    sortRows(intMatrix, size);
    sortRows(doubleMatrix, size);
    sortRows(charMatrix, size);

    // ... (аналогично для других типов данных)

    // Вывод матриц после сортировки
    std::cout << "Integer Matrix:\n";
    printMatrix(intMatrix, size);

    std::cout << "Double Matrix:\n";
    printMatrix(doubleMatrix, size);

    std::cout << "Character Matrix:\n";
    printMatrix(charMatrix, size);

    return 0;
}
