// Ex6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// 
#include <iostream>

// Функция для вставки блока элементов в массив, начиная с заданного индекса
void insertBlockAtIndex(int*& arr, int& size, int index, const int* block, int blockSize) {
    if (index < 0 || index > size) {
        std::cout << "Некорректный индекс для вставки." << std::endl;
        return;
    }

    int newSize = size + blockSize; // Новый размер массива

    // Создание нового массива с учетом блока элементов
    int* newArray = new int[newSize];

    // Копирование элементов до заданного индекса
    for (int i = 0; i < index; ++i) {
        newArray[i] = arr[i];
    }

    // Копирование блока элементов в новый массив
    for (int i = 0; i < blockSize; ++i) {
        newArray[index + i] = block[i];
    }

    // Копирование оставшихся элементов после вставки блока
    for (int i = index; i < size; ++i) {
        newArray[blockSize + i] = arr[i];
    }

    // Освобождение памяти старого массива
    delete[] arr;

    // Обновление указателя и размера массива
    arr = newArray;
    size = newSize;
}

int main() {
    setlocale(LC_ALL, "ru");
    int size = 5;
    int* array = new int[size] {1, 2, 3, 4, 5};

    int index = 2;
    int blockSize = 3;
    int block[] = { 6, 7, 8 };

    insertBlockAtIndex(array, size, index, block, blockSize); // Вызов функции

    std::cout << "Массив после вставки блока элементов: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    delete[] array; // Освобождение памяти

    return 0;
}
