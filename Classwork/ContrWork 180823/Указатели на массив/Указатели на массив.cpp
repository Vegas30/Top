#include <iostream>

// Функция для сложения элементов двух массивов и сохранения результата в третьем массиве
void sumArrays(const int* arrA, const int* arrB, int* arrC, int size) {
    for (int i = 0; i < size; ++i) {
        arrC[i] = arrA[i] + arrB[i];
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    const int size = 5; // Размер массивов

    int arrayA[size] = { 1, 2, 3, 4, 5 };
    int arrayB[size] = { 10, 20, 30, 40, 50 };
    int arrayC[size];

    sumArrays(arrayA, arrayB, arrayC, size); // Вызов функции для сложения

    // Вывод массива C (суммы массивов A и B)
    std::cout << "Массив C (сумма массивов A и B): ";
    for (int i = 0; i < size; ++i) {
        std::cout << arrayC[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
