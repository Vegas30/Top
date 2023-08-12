#include <iostream>

// Функция для сортировки первой половины массива по убыванию
void insertionSortDescending(int arr[], int start, int end) {
    for (int i = start + 1; i <= end; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= start && arr[j] < key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

// Функция для сортировки второй половины массива по возрастанию
void insertionSortAscending(int arr[], int start, int end) {
    for (int i = start + 1; i <= end; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= start && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

// Функция для сортировки первой половины по убыванию, а второй - по возрастанию
void sortHalfArray(int arr[], int size) {
    if (size <= 1) {
        return; // Массив слишком маленький, сортировка не требуется
    }

    int mid = size / 2;
    insertionSortDescending(arr, 0, mid - 1); // Сортировка первой половины по убыванию
    insertionSortAscending(arr, mid, size - 1); // Сортировка второй половины по возрастанию
}

int main() 
{

    setlocale(LC_ALL, "Rus");

    int arr[] = { 9, 4, 7, 2, 5, 8, 1, 6, 3, 0 };
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Исходный массив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    sortHalfArray(arr, size);

    std::cout << "Отсортированный массив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
