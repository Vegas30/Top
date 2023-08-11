#include <iostream>

void bubbleSort(int arr[], int size, bool descending = false) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if ((arr[j] > arr[j + 1] && !descending) || (arr[j] < arr[j + 1] && descending)) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = { 5, 2, 9, 1, 5, 6, 3, 8, 7, 4 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // Сортировка по возрастанию
    bubbleSort(arr, size, false);
    std::cout << "Sorted in ascending order: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Сортировка по убыванию
    bubbleSort(arr, size, true);
    std::cout << "Sorted in descending order: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
