// Треугольный 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int m1 = 5, m2 = 5;
	int i, j, k;
	int** pXArr = new int* [m1];
	k = m2;

	for (i = 0; i < m1; i++, k--) {
		pXArr[i] = new int[k];
	}

	for ( i = 0; i < m1; i++, m2--)
	{
		for (j = 0; j < m2; j++) 
		{
			pXArr[i][j] = 5;
			cout << pXArr[i][j] << " ";
		}
		cout << "\n";
	}

	for (i = 0; i < m1; i++)
	{
		delete[]pXArr[i];
	}
	delete[]pXArr;

	return 0;
}

