#include <iostream>

void findMinMax(int arr[], int size, int& minValue, int& minIndex, int& maxValue, int& maxIndex) {
    if (size <= 0) {
        std::cout << "Ошибка: передан пустой массив.\n";
        return;
    }

    minValue = arr[0];
    minIndex = 0;
    maxValue = arr[0];
    maxIndex = 0;

    for (int i = 1; i < size; ++i) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }

        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }
}

int main() {
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Ошибка: недопустимый размер массива.\n";
        return 1;
    }

    int* arr = new int[size];
    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int minValue, minIndex, maxValue, maxIndex;
    findMinMax(arr, size, minValue, minIndex, maxValue, maxIndex);

    std::cout << "Минимальное значение: " << minValue << ", его индекс: " << minIndex << std::endl;
    std::cout << "Максимальное значение: " << maxValue << ", его индекс: " << maxIndex << std::endl;

    delete[] arr;
    return 0;
}
