// Задание 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Есть стопка оладий различного радиуса. Единственная операция, проводимая с ними - это просовывая лопатку между ними меняем порядок расположения оладий над лопаткой на обратный. Необходимо за минимальное количество таких операций отсортировать снизу вверх по убыванию радиуса.  */

#include <iostream>

void flip(int pancakes[], int index) {
    int left = 0;
    while (left < index) {
        std::swap(pancakes[left], pancakes[index]);
        ++left;
        --index;
    }
}

int findMaxIndex(const int pancakes[], int endIndex) {
    int maxIndex = 0;
    for (int i = 1; i <= endIndex; ++i) {
        if (pancakes[i] > pancakes[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

void pancakeSort(int pancakes[], int n) {
    for (int i = n - 1; i > 0; --i) {
        int maxIndex = findMaxIndex(pancakes, i);

        if (maxIndex != i) {
            if (maxIndex != 0) {
                flip(pancakes, maxIndex);
                std::cout << "Flip " << maxIndex + 1 << " ";
            }

            flip(pancakes, i);
            std::cout << "Flip " << i + 1 << " ";
        }
    }
}

int main() {
    int n;

    std::cout << "Enter the number of pancakes: ";
    std::cin >> n;

    int* pancakes = new int[n];

    std::cout << "Enter the radius of pancakes: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> pancakes[i];
    }

    pancakeSort(pancakes, n);

    std::cout << "\nSorted Pancake Stack: ";
    for (int i = 0; i < n; ++i) {
        std::cout << pancakes[i] << " ";
    }
    std::cout << std::endl;

    delete[] pancakes;

    return 0;
}

