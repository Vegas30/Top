#include <iostream>

using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        // Обмен значениями элементов с индексами start и end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Переходим к следующим элементам
        start++;
        end--;
    }
}

int main() {
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    if (size <= 0) {
        cout << "Ошибка: недопустимый размер массива.\n";
        return 1;
    }

    int* arr = new int[size];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    // Меняем порядок элементов массива
    reverseArray(arr, size);

    cout << "Массив с обратным порядком: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}
