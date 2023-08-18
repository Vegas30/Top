// Ex3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// написать функцию, принимающую в качестве аргумента, указатели на два массива (A и B) и размеры массивов. Функция проверяет , является ли массив B подмножеством массива A и возвращает указатель на начало найденного фрагмента, лиюо возвращает 0 в противном случае.


#include <iostream>

// Функция для проверки, является ли массив B подмножеством массива A
const int* findSubset(const int* arrA, int sizeA, const int* arrB, int sizeB) {
    for (int i = 0; i <= sizeA - sizeB; ++i) {
        int j;
        for (j = 0; j < sizeB; ++j) {
            if (arrA[i + j] != arrB[j]) {
                break;
            }
        }
        if (j == sizeB) {
            return &arrA[i]; // Возвращаем указатель на начало найденного фрагмента
        }
    }
    return nullptr; // Возвращаем nullptr, если подмножество не найдено
}

int main() {
    setlocale(LC_ALL, "ru");
    const int sizeA = 8;
    const int sizeB = 3;

    int arrayA[sizeA] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int arrayB[sizeB] = { 3, 4, 5 };

    const int* subsetStart = findSubset(arrayA, sizeA, arrayB, sizeB); // Вызов функции

    if (subsetStart) {
        std::cout << "Массив B является подмножеством массива A, начиная с индекса: " << subsetStart - arrayA << std::endl;
    }
    else {
        std::cout << "Массив B не является подмножеством массива A." << std::endl;
    }

    return 0;
}
