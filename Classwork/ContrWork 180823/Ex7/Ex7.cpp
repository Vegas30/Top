// Ex7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Создать функцию, позволяющую удалять блок элементов, начиная с произвольного индекса массива.


#include <iostream>

// Функция для удаления блока элементов из массива, начиная с заданного индекса
void removeBlockAtIndex(int*& arr, int& size, int index, int blockSize) {
    if (index < 0 || index >= size) {
        std::cout << "Некорректный индекс для удаления." << std::endl;
        return;
    }

    if (blockSize <= 0 || index + blockSize > size) {
        std::cout << "Некорректный размер блока для удаления." << std::endl;
        return;
    }

    int newSize = size - blockSize; // Новый размер массива

    // Создание нового массива с учетом удаления блока элементов
    int* newArray = new int[newSize];

    // Копирование элементов до заданного индекса
    for (int i = 0; i < index; ++i) {
        newArray[i] = arr[i];
    }

    // Копирование оставшихся элементов после удаления блока
    for (int i = index + blockSize; i < size; ++i) {
        newArray[i - blockSize] = arr[i];
    }

    // Освобождение памяти старого массива
    delete[] arr;

    // Обновление указателя и размера массива
    arr = newArray;
    size = newSize;
}

int main() {
    setlocale(LC_ALL, "ru");
    int size = 8;
    int* array = new int[size] {1, 2, 3, 4, 5, 6, 7, 8};

    int index = 2;
    int blockSize = 3;

    removeBlockAtIndex(array, size, index, blockSize); // Вызов функции

    std::cout << "Массив после удаления блока элементов: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    delete[] array; // Освобождение памяти

    return 0;
}
