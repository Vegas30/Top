// Задание 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Написать функцию, которая получает указатель на статический массив и его размер. Функция распределяет положительные, отрицательные и нулевые элементы в отдельные динамический массивы. */

#include <iostream>

void distributeElements(int* staticArr, int size, int*& positiveArr, int& positiveSize,
    int*& negativeArr, int& negativeSize, int*& zeroArr, int& zeroSize) {
    positiveSize = 0;
    negativeSize = 0;
    zeroSize = 0;

    // Считаем количество положительных, отрицательных и нулевых элементов
    for (int i = 0; i < size; ++i) {
        if (staticArr[i] > 0) {
            ++positiveSize;
        }
        else if (staticArr[i] < 0) {
            ++negativeSize;
        }
        else {
            ++zeroSize;
        }
    }

    // Выделяем память для динамических массивов
    positiveArr = new int[positiveSize];
    negativeArr = new int[negativeSize];
    zeroArr = new int[zeroSize];

    // Заполняем динамические массивы
    int posIndex = 0, negIndex = 0, zeroIndex = 0;
    for (int i = 0; i < size; ++i) {
        if (staticArr[i] > 0) {
            positiveArr[posIndex] = staticArr[i];
            ++posIndex;
        }
        else if (staticArr[i] < 0) {
            negativeArr[negIndex] = staticArr[i];
            ++negIndex;
        }
        else {
            zeroArr[zeroIndex] = staticArr[i];
            ++zeroIndex;
        }
    }
}

int main() 
{   
    setlocale(LC_ALL, "ru");

    const int size = 10;
    int staticArr[size] = { 3, -5, 0, 8, -2, 0, 10, -7, 4, 0 };

    int* positiveArr;
    int positiveSize;

    int* negativeArr;
    int negativeSize;

    int* zeroArr;
    int zeroSize;

    distributeElements(staticArr, size, positiveArr, positiveSize, negativeArr, negativeSize, zeroArr, zeroSize);

    std::cout << "Положительные элементы: ";
    for (int i = 0; i < positiveSize; ++i) {
        std::cout << positiveArr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Отрицательные элементы: ";
    for (int i = 0; i < negativeSize; ++i) {
        std::cout << negativeArr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Нулевые элементы: ";
    for (int i = 0; i < zeroSize; ++i) {
        std::cout << zeroArr[i] << " ";
    }
    std::cout << std::endl;

    // Освобождаем память
    delete[] positiveArr;
    delete[] negativeArr;
    delete[] zeroArr;

    return 0;
}
