#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
	const int ROWS = 5;
	const int COLS = 8;
	// Инициализация генератора случайных чисел с помощью текущего времени
	srand(static_cast<unsigned>(time(nullptr)));

	// Создаем массив размером ROWS x COLS
	int array[ROWS][COLS];

	// Создаем массив, чтобы отслеживать уже использованные числа
	bool used[100] = { false };

	// Заполняем массив уникальными случайными числами
	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLS; ++j) {
			int randomNum;
			do {
				randomNum = rand() % 100; // Генерируем случайное число до 100
			} while (used[randomNum]); // Проверяем, было ли оно уже использовано
			array[i][j] = randomNum;
			used[randomNum] = true; // Отмечаем число как использованное
		}
	}

	// Выводим массив на экран
	for (int i = 0; i < ROWS; ++i) {
		for (int j = 0; j < COLS; ++j) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
