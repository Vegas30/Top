// Позиции крайних элементов и сортировка.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Стандарт языка С++ 20

#include <iostream>
#include <cstdlib>
#include <ctime>

void findAndSortRange(int arr[], int size) {
    int leftNegIndex = -1;
    int rightNegIndex = -1;

    // Find the positions of the extreme negative elements
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            if (leftNegIndex == -1) {
                leftNegIndex = i;
            }
            rightNegIndex = i;
        }
    }

    if (leftNegIndex == -1 || rightNegIndex == -1) {
        // No negative elements found
        return;
    }

    // Sort the elements between the extreme negative elements
    for (int i = leftNegIndex + 1; i < rightNegIndex; ++i) {
        int currentValue = arr[i];
        int j = i - 1;
        while (j >= leftNegIndex && arr[j] > currentValue) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = currentValue;
    }
}

int main() {
    // Initialize the random number generator
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    const int size = 20;
    int arr[size];

    // Fill the array with random numbers from -20 to 20
    for (int i = 0; i < size; ++i) {
        arr[i] = std::rand() % 41 - 20;
    }

    // Display the original array
    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Find the positions of the extreme negative elements and sort the range between them
    findAndSortRange(arr, size);

    // Display the array with the sorted range
    std::cout << "Array with sorted range between leftmost and rightmost negative elements: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
