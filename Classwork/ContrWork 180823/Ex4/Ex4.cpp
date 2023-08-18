// Ex4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// написать функцию, которая получает указатель на динамический массив и его размер. Функция должна удалить из массива все отрицательные числа и вернуть указатель на новый динамический массив.
#include <iostream>

// Функция для удаления отрицательных чисел из массива
int* removeNegativeNumbers(const int* arr, int size, int& newSize) {
    int* resultArray = new int[size]; // Создание нового динамического массива
    newSize = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] >= 0) {
            resultArray[newSize] = arr[i];
            newSize++;
        }
    }

    return resultArray;
}

int main() {

    setlocale(LC_ALL, "ru");
    const int size = 7;

    int originalArray[size] = { 5, -2, 9, -1, 3, 0, -4 };
    int newSize;

    int* newArray = removeNegativeNumbers(originalArray, size, newSize); // Вызов функции

    std::cout << "Исходный массив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << originalArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Новый массив (без отрицательных чисел): ";
    for (int i = 0; i < newSize; ++i) {
        std::cout << newArray[i] << " ";
    }
    std::cout << std::endl;

    delete[] newArray; // Освобождение памяти

    return 0;
}
