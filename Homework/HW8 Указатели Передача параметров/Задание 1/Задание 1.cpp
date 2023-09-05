// Задание 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Написать следующие функции для работы с динамическим массивом:
1) Функция распределения динамической памяти.
2) Функция инициализации динамического массива. 
3) Функция печати динамического массива. 
4) Функция удаления динамического массива. 
5) Функция добавления элемента в конец массива. 
6) Функция вставки элемента по указанному индексу.
7) Функция удаления элемента по указанному индексу. */

#include <iostream>

// Функция распределения динамической памяти
double* allocateMemory(int size) {
    return new double[size];
}

// Функция инициализации динамического массива
void initializeArray(double* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = 0.0;
    }
}

// Функция печати динамического массива
void printArray(double* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Функция удаления динамического массива
void deleteArray(double* arr) {
    delete[] arr;
}

// Функция добавления элемента в конец массива
double* appendElement(double* arr, int& size, double element) {
    double* newArr = new double[size + 1];
    for (int i = 0; i < size; ++i) {
        newArr[i] = arr[i];
    }
    newArr[size] = element;
    ++size;
    delete[] arr;
    return newArr;
}

// Функция вставки элемента по указанному индексу
double* insertElement(double* arr, int& size, int index, double element) {
    if (index < 0 || index > size) {
        return arr; // Возврат без изменений, если индекс некорректен
    }

    double* newArr = new double[size + 1];
    for (int i = 0; i < index; ++i) {
        newArr[i] = arr[i];
    }
    newArr[index] = element;
    for (int i = index; i < size; ++i) {
        newArr[i + 1] = arr[i];
    }
    ++size;
    delete[] arr;
    return newArr;
}

// Функция удаления элемента по указанному индексу
double* removeElement(double* arr, int& size, int index) {
    if (index < 0 || index >= size) {
        return arr; // Возврат без изменений, если индекс некорректен
    }

    double* newArr = new double[size - 1];
    for (int i = 0; i < index; ++i) {
        newArr[i] = arr[i];
    }
    for (int i = index + 1; i < size; ++i) {
        newArr[i - 1] = arr[i];
    }
    --size;
    delete[] arr;
    return newArr;
}

int main() {
    int size = 0;
    double* arr = allocateMemory(size);

    // Пример использования функций
    arr = appendElement(arr, size, 5.0);
    printArray(arr, size);

    arr = appendElement(arr, size, 10.0);
    printArray(arr, size);

    arr = insertElement(arr, size, 1, 7.5);
    printArray(arr, size);

    arr = removeElement(arr, size, 0);
    printArray(arr, size);

    deleteArray(arr);

    return 0;
}
