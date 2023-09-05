// Задание 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Написать программу, которая сравнивает число перестановок элементов при использовании сортировки "пузырьком"(использовать усовершенствованную версию с анализом количества перестановок на каждом шагу, если это количество равно нулю, то продолжать сортировку нет смысла - массив отсортирован) и методом выбора. Выполнитьеё тестирование на 10 разных массивах(заполнить тысячью случайных элементов), вычислить среднее число перестановок для каждого метода после тестирования. */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int bubbleSortWithSwapsCount(int arr[], int size) {
    int swapsCount = 0;
    bool swapped;

    for (int i = 0; i < size - 1; ++i) {
        swapped = false;

        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
                ++swapsCount;
            }
        }

        if (!swapped) {
            break; // Если на данной итерации не было перестановок, массив уже отсортирован
        }
    }

    return swapsCount;
}

int selectionSortWithSwapsCount(int arr[], int size) {
    int swapsCount = 0;

    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;

        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            std::swap(arr[i], arr[minIndex]);
            ++swapsCount;
        }
    }

    return swapsCount;
}

int main() {
    const int ARRAY_SIZE = 1000;
    const int TEST_CASES = 10;

    int bubbleSortTotalSwaps = 0;
    int selectionSortTotalSwaps = 0;

    srand(time(nullptr));

    for (int test = 1; test <= TEST_CASES; ++test) {
        int arr1[ARRAY_SIZE];
        int arr2[ARRAY_SIZE];

        for (int i = 0; i < ARRAY_SIZE; ++i) {
            arr1[i] = arr2[i] = rand();
        }

        bubbleSortTotalSwaps += bubbleSortWithSwapsCount(arr1, ARRAY_SIZE);
        selectionSortTotalSwaps += selectionSortWithSwapsCount(arr2, ARRAY_SIZE);
    }

    double avgBubbleSortSwaps = static_cast<double>(bubbleSortTotalSwaps) / TEST_CASES;
    double avgSelectionSortSwaps = static_cast<double>(selectionSortTotalSwaps) / TEST_CASES;

    std::cout << "Average swaps for Bubble Sort: " << avgBubbleSortSwaps << std::endl;
    std::cout << "Average swaps for Selection Sort: " << avgSelectionSortSwaps << std::endl;

    return 0;
}

