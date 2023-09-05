// Массив 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	int i, j;

	/*  Переменные для описания характеристик массивов.
		m1 - кол-во строк, m2 - кол-во столбцов */

	int m1, m2;

	cout << "How many rows: \n";
	cin >> m1;

	int** pArr = new int* [m1];
	for (i = 0; i < m1; i++)
	{
		cout << "How many cells in row-" << i << "?\n";
		cin >> m2;
		pArr[i] = new int[m2];

		// заполнение строки двумерного динамического массива данными и вывод
		for (j = 0; j < m2; j++)
		{
			pArr[i][j] = i * j;
			cout << pArr[i][j] << " ";
		}
		cout << "\n";
	}

	//cout << pArr[1][1];

	for (i = 0; i < m1; i++)
	{
		delete[]pArr[i];
	}
	delete[]pArr;

	return 0;
}
