
#include <iostream>
#include <stdlib.h> // Подключаем один файл из библиотеки для исп rand()


using namespace std;

int main()
{
	while (true)
	{
		setlocale(LC_ALL, "Rus");

		//srand(time(0));

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

		int arr[10];

		srand(time(NULL));

		for (int i = 0; i < 10; i++)
		{
			arr[i] = rand() % 50; // элемент массива.
			cout << arr[i] << endl;
		}

		system("pause");
	}

}
