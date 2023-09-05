// Задание 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Написать функцию, которая получает указатель на динамический массив и его размер. Функция должна удалить из массива все простые числа и вернуть указатель на новый динамический массив. */

#include <iostream>
#include <cmath>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    int sqrtNum = static_cast<int>(std::sqrt(num));
    for (int i = 2; i <= sqrtNum; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

double* removePrimes(double* arr, int& size) {
    int primeCount = 0;
    for (int i = 0; i < size; ++i) {
        if (isPrime(static_cast<int>(arr[i]))) {
            ++primeCount;
        }
    }

    double* newArr = new double[size - primeCount];
    int newArrIndex = 0;

    for (int i = 0; i < size; ++i) {
        if (!isPrime(static_cast<int>(arr[i]))) {
            newArr[newArrIndex] = arr[i];
            ++newArrIndex;
        }
    }

    size = size - primeCount;
    delete[] arr;

    return newArr;
}

int main() 
{
    setlocale(LC_ALL, "ru");

    int size = 10;
    double* arr = new double[size] { 2, 5, 8, 7, 11, 15, 20, 23, 30, 37 };

    std::cout << "Исходный массив:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    arr = removePrimes(arr, size);

    std::cout << "Массив после удаления простых чисел:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;

    return 0;
}
