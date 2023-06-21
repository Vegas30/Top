#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int time_sec;
	float time_min, time_hour;
	const int sec_in_min = 60;
	const int min_in_hour = 60;

	cout << "Введите время в секундах: ";
	cin >> time_sec;


	time_min = round(time_sec / sec_in_min);
	time_hour = round(time_min / min_in_hour);

	cout << "Время в секундах: " << time_sec;
	cout << "\nВремя в минутах: " << time_min;
	cout << "\nВремя в часах: " << time_hour;

}
