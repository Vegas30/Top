// Задание 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Используя указатель на массив целых чисел, изменить порядок следования элементов массива на противоположный. Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования. */

#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	const int arraySize = 5;
	int numbers[arraySize] = { 1, 2, 3, 4, 5 };

	std::cout << "Исходный массив: ";
	for (int i = 0; i < arraySize; ++i) {
		std::cout << numbers[i] << " ";
	}
	std::cout << std::endl;

	int* startPtr = numbers; // Указатель на начало массива
	int* endPtr = numbers + arraySize - 1; // Указатель на конец массива

	// Поменяем местами элементы массива, используя арифметику указателей
	while (startPtr < endPtr) {
		// Используем временную переменную для обмена значениями
		int temp = *startPtr;
		*startPtr = *endPtr;
		*endPtr = temp;

		// Сдвигаем указатели в сторону друг друга
		startPtr++;
		endPtr--;
	}

	std::cout << "Массив после изменения порядка: ";
	for (int i = 0; i < arraySize; ++i) {
		std::cout << numbers[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
