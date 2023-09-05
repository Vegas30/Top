// Задание 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Используя два указателя на массивы целых чисел, скопировать один массив в другой так, чтобы во втором массиве элементы находились в обратном порядке. Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.  */

#include <iostream>

int main() 
{   
    setlocale(LC_ALL, "ru");
    const int arraySize = 5;
    int sourceArray[arraySize] = { 1, 2, 3, 4, 5 };
    int destinationArray[arraySize];

    std::cout << "Исходный массив: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << sourceArray[i] << " ";
    }
    std::cout << std::endl;

    int* sourcePtr = sourceArray; // Указатель на начало исходного массива
    int* destinationPtr = destinationArray + arraySize - 1; // Указатель на конец целевого массива

    // Копирование и инвертирование элементов массива
    for (int i = 0; i < arraySize; ++i) {
        *destinationPtr = *sourcePtr;
        sourcePtr++;
        destinationPtr--;
    }

    std::cout << "Массив с обратным порядком элементов: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << destinationArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
