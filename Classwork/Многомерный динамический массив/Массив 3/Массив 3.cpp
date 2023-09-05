// Массив 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
	int i, j;

	int row = 5, col = 5;
	int** pArr = new int* [row];
	for (int i = 0; i < row; i++) {
		pArr[i] = new int[col];
		// заполнение строки двумерного динамического массива данными и вывод
		for (j = 0; j < col; j++)
		{
			pArr[i][j] = i * j;
			cout << pArr[i][j] << " ";

		}
		cout << "\n";


	}
	
}
