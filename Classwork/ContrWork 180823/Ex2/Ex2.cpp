// Ex2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// написать функцию, которая получает указатель на массив и его размер, и возвращает количество отрицательных, положительных и нулевых элементов массива
#include <iostream>

// Функция для подсчета количества отрицательных, положительных и нулевых элементов массива
void countPositiveNegativeZero(const int* arr, int size, int* positiveCount, int* negativeCount, int* zeroCount) {
    *positiveCount = 0;
    *negativeCount = 0;
    *zeroCount = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            (*positiveCount)++;
        }
        else if (arr[i] < 0) {
            (*negativeCount)++;
        }
        else {
            (*zeroCount)++;
        }
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    const int size = 8; // Размер массива

    int myArray[size] = { 2, -3, 0, 7, -1, 0, 5, -8 };
    int positiveCount, negativeCount, zeroCount;

    countPositiveNegativeZero(myArray, size, &positiveCount, &negativeCount, &zeroCount); // Вызов функции

    std::cout << "Количество положительных элементов: " << positiveCount << std::endl;
    std::cout << "Количество отрицательных элементов: " << negativeCount << std::endl;
    std::cout << "Количество нулевых элементов: " << zeroCount << std::endl;

    return 0;
}
