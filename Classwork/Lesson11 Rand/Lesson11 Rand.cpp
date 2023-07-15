
#include <iostream>
#include <stdlib.h> // Подключаем один файл из библиотеки для исп rand()


using namespace std;

int main()
{
	while (true)
	{
		setlocale(LC_ALL, "Rus");

		srand(time(0));

		//int a;

		//a = rand();

		//cout << a << endl;

		//cout << "RAND_MAX = " << RAND_MAX << endl; // константа, хранящая максимальный предел из интервала случайных чисел
		//cout << "random number = " << rand() << endl; // запуск генератора случайных чисел
		//system("pause");
		//return 0;

		//cout << "1-random number = " << 1 + rand() % 3 << endl; // первый запуск генератора случайных чисел
		//cout << "2-random number = " << 1 + rand() % 3 << endl; // второй запуск генератора случайных чисел
		//cout << "3-random number = " << 1 + rand() % 3 << endl; // третий запуск генератора случайных чисел
		//cout << "4-random number = " << 1 + rand() % 3 << endl; // четвёртый запуск генератора случайных чисел
		//cout << "5-random number = " << 1 + rand() % 3 << endl; // пятый запуск генератора случайных чисел
		//cout << "6-random number = " << 1 + rand() % 3 << endl; // шестой запуск генератора случайных чисел
		//cout << "7-random number = " << 1 + rand() % 3 << endl; // седьмой запуск генератора случайных чисел
		//cout << "8-random number = " << 1 + rand() % 3 << endl; // восьмой запуск генератора случайных чисел
		//return 0;


		//int Matr[3][4]; // двумерный массив размером 3*4
		//int i, j;

		//for (i = 0; i < 3; i++)
		//	for (j = 0; j < 4; j++)
		//		Matr[i][j] = 0;

		//int arr[10];

		//srand(time(NULL));

		//for (int i = 0; i < 10; i++)
		//{
		//	arr[i] = rand() % 50; // элемент массива.
		//	cout << arr[i] << endl;
		//}



		//const int row = 3;
		//const int col = 4;

		//int arr[][col];

		//for (int i = 0; i < row; i++)
		//{
		//	for (int j = 0; j < col; j++)
		//	{
		//		arr[i][j] = rand() % 100;
		//		cout << arr[i][j] <<" ";
		//	}
		//	cout << "\n\n";
		//}
		//system("pause");




		const int row = 3;
		const int col = 3;

		int arr[row][col];

		for (int i = 0; i < row; i++)
		{
			
			for (int j = 0; j < col; j++)
			{
				arr[i][j] = rand() % 100;
				cout << arr[i][j] << " ";
			}
			cout << "\n\n";
		}

		//int max = 0;
		//for (int i = 0; i < row; i++)
		//{
		//	for (int j = 0; j < col; j++)
		//	{
		//		if (arr[i][j] > max)
		//		{
		//			max = arr[i][j];
		//		}
		//	}
		//	cout << "Максимальное число " << i + 1 << "-ой строки: "<< max << endl;
		//	max = 0;
		//}

		for (int i = 0; i < row; i++)
		{
			int max = arr[i][0];
			for (int j = 1; j < col; j++)
			{
				if (arr[i][j] > max)
				{
					max = arr[i][j];
				}
			}
			cout << "Максимальное число " << i + 1 << "-ой строки: "<< max << endl;
		}


		system("pause");
	}



}
