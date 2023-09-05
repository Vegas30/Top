// Задание 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Используя два указателя на массив целых чисел, скопировать один массив в другой. Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разименования. */

#include <iostream>

int main() 
{
    setlocale(LC_ALL, "ru");
    const int arraySize = 5; // Размер массивов
    int sourceArray[arraySize] = { 1, 2, 3, 4, 5 }; // Исходный массив
    int destinationArray[arraySize]; // Массив, в который будем копировать

    // Указатели на начало исходного и целевого массивов
    int* sourcePtr = sourceArray;
    int* destinationPtr = destinationArray;

    // Копирование массива с использованием арифметики указателей и оператора разыменования
    for (int i = 0; i < arraySize; ++i) {
        *destinationPtr = *sourcePtr; // Копируем значение из исходного массива в целевой
        sourcePtr++; // Сдвигаем указатель на следующий элемент исходного массива
        destinationPtr++; // Сдвигаем указатель на следующий элемент целевого массива
    }

    // Вывод результатов
    std::cout << "Исходный массив: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << sourceArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Скопированный массив: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << destinationArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
