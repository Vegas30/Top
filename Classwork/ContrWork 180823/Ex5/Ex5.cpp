// Ex5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// создать функцию, позволяющую вставлять блок элементов в конец массива.
#include <iostream>

// Функция для вставки блока элементов в конец массива
void insertBlockToEnd(int*& arr, int& size, const int* block, int blockSize) {
    int newSize = size + blockSize; // Новый размер массива

    // Создание нового массива с учетом блока элементов
    int* newArray = new int[newSize];

    // Копирование старых элементов в новый массив
    for (int i = 0; i < size; ++i) {
        newArray[i] = arr[i];
    }

    // Копирование блока элементов в новый массив
    for (int i = 0; i < blockSize; ++i) {
        newArray[size + i] = block[i];
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

    int blockSize = 3;
    int block[] = { 6, 7, 8 };

    insertBlockToEnd(array, size, block, blockSize); // Вызов функции

    std::cout << "Массив после вставки блока элементов: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    delete[] array; // Освобождение памяти

    return 0;
}
