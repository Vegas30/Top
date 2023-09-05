// Задание 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Написать программу, реализующую сортировку массива с помощью усовершенствованной сортировки пузырьковым методом.
   Усовершенствование состоит в том, чтобы анализировать количество перестановок на каждом шагу, если это количество равно нулю,
   то продолжать сортировку нет смысла - массив отсортирован. */


#include <iostream>

void improvedBubbleSort(int arr[], int size) {
    bool swapped;

    for (int i = 0; i < size - 1; ++i) {
        swapped = false;

        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

int main() {
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int* arr = new int[n];

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    improvedBubbleSort(arr, n);

    std::cout << "Sorted array: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;

    return 0;
}

