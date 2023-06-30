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

	int don = 0;
	int	hour = 0;

	for (int count = 0; count < 12; count++)
	{
		hour++;
		don += hour;

		cout << "Час: " << hour << endl;

	}
	cout << "Пробьют: " << don << endl;

}
