// Ex1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Написать функцию, которая получает указель на массив и его размер, и возвращает сумму и произведение его элементов в двух параметрах-указателях.

#include <iostream>

// Функция для вычисления суммы и произведения элементов массива
void calculateSumAndProduct(const int* arr, int size, int* sum, int* product) {
    *sum = 0;
    *product = 1;

    for (int i = 0; i < size; ++i) {
        *sum += arr[i];
        *product *= arr[i];
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    const int size = 5; // Размер массива

    int myArray[size] = { 2, 3, 5, 7, 11 };
    int sum, product;

    calculateSumAndProduct(myArray, size, &sum, &product); // Вызов функции

    std::cout << "Сумма элементов массива: " << sum << std::endl;
    std::cout << "Произведение элементов массива: " << product << std::endl;

    return 0;
}
