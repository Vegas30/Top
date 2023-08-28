#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	// вечный цикл
	//int count;
	//for (count = 1; count > 0; count++)
	//{
	//    cout << "Число: " << count << endl;
	//}


	//for (int count = 1; count < 10; count++)
	//{
	//	if (count == 5)
	//	{
	//		break; // на 5 выходим
	//	}
	//	cout << "Число: " << count << endl;

	//}


	//for (int count = 1; count < 10; count++)
	//{
	//	if (count == 5)
	//	{
	//		continue; // пропускаем 5
	//	}
	//	    cout << "Число: " << count << endl;

	//}

	//int sum = 0;
	//int	hour = 0;

	//for (int count = 0; count < 12; count++)
	//{
	//	hour++;
	//	sum += hour;

	//	cout << "Час: " << hour << endl;

	//}
	//cout << "Пробьют: " << sum << endl;


	//int num, sum = 0;
	//for (;;) // бесконечный цикл
	//{
	//	cin >> num;
	//	sum += num;
	//	if (num == 0) {
	//		cout << sum << endl;
	//		return 0;
	//	}


	//}

	//int num;
	//cin >> num;
	//for (int i = 0; i < 10; i++)
	//{

	//	if (i % num == 0)
	//	{
	//		cout << i << endl;

	//	}
	//}

	for (int i = 0, j = 10; i < 10, j != 5; i++, j--)
	{
		cout << "Переменная i = " << i << endl;
		cout << "Переменная j = " << j << endl;
	}

	

}
