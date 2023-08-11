#include <iostream>
#include <algorithm>  // Для функции std::sort
#include <windows.h>

void sortArray(int arr[], int size, bool descending = false) 
{
    if (descending) {
        // Сортировка по убыванию
        std::sort(arr, arr + size, std::greater<int>());
    }
    else {
        // Сортировка по возрастанию
        std::sort(arr, arr + size);
    }
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int arr[] = { 5, 3, 8, 2, 7, 1, 4, 9, 6, 0 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // Сортировка массива по возрастанию
    sortArray(arr, size);

    std::cout << "Массив после сортировки по возрастанию:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Сортировка массива по убыванию
    sortArray(arr, size, true);

    std::cout << "Массив после сортировки по убыванию:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
