#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	//cout << "Computing the size of some C++ inbuilt variable types"
	//	<< endl;
	//cout << "Size of bool: " << sizeof(bool) << endl;
	//cout << "Size of char: " << sizeof(char) << endl;
	//cout << "Size of unsigned short int: " << sizeof(unsigned short)
	//	<< endl;
	//cout << "Size of short int: " << sizeof(short) << endl;
	//cout << "Size of unsigned long int: " << sizeof(unsigned long)
	//	<< endl;
	//cout << "Size of long: " << sizeof(long) << endl;
	//cout << "Size of int: " << sizeof(int) << endl;
	//cout << "Size of unsigned long long: "
	//	<< sizeof(unsigned long long)<< endl;
	//cout << "Size of long long: " << sizeof(long long) << endl;
	//cout << "Size of unsigned int: " << sizeof(unsigned int) << endl;
	//cout << "Size of float: " << sizeof(float) << endl;
	//cout << "Size of double: " << sizeof(double) << endl;
	//cout << "The output changes with compiler, hardware and OS"
	//	<< endl;



	//const int N = 12;

	//int group[N];

	//group[0] = 10;
	//group[1] = 9;
	//group[2] = 8;
	//group[3] = 7;
	//group[4] = 6;
	//group[5] = 5;
	//group[6] = 4;
	//group[7] = 3;
	//group[8] = 2;
	//group[9] = 0;
	//group[10] = 11;
	//group[11] = 12;

	//int num;
	//cout << "Введите номер студента от 1-12: " << endl;
	//cin >> num;

	//cout << "Оценка: " << group[num - 1] << endl;

	//return 0;




		//// Объявление массива строк
		//string месяцы[] = { "Январь", "Февраль", "Март", "Апрель", "Май" };

		//// Получение размера массива
		//int размер = sizeof(месяцы) / sizeof(месяцы[0]);

		//// Вывод элементов массива
		//cout << "Месяцы года:\n";
		//for (int i = 0; i < размер; i++) {
		//	cout << месяцы[i] << " ";
		//}

	//int mark[3];

	//const int num = 4;
	//int mark_1[num];

	//mark_1[0] = 1;
	////mark_1[1] = 3;
	////mark_1[2] = 4;
	//mark_1[3] = 2;
	//int size = sizeof(mark_1) / sizeof(mark_1[0]);

	//cout <<"Размер массива: "<<  size << endl;

	//for (int i = 0; i < size; i++)
	//{
	//	cout << mark_1[i] << endl;
	//}


	int numbers[] = { 5, 2, 8, 1, 9 };
	int size = sizeof(numbers) / sizeof(numbers[0]);

	int min_value = numbers[0];
	int max_value = numbers[0];

	for (int i = 1; i < size; i++) {
		if (numbers[i] < min_value) {
			min_value = numbers[i];
		}
		if (numbers[i] > max_value) {
			max_value = numbers[i];
		}
	}

	cout << "Minimum value: " << min_value << endl;
	cout << "Maximum value: " << max_value << endl;

	return 0;





}