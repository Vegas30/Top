#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int days, hours, minutes, seconds;
	cout << "Введите количество дней: ";
	cin >> days;
	cout << "Введите количество часов: ";
	cin >> hours;
	cout << "Введите количество минут: ";
	cin >> minutes;
	cout << "Введите количество секунд: ";
	cin >> seconds;
	seconds += (days * 86400) + hours * 3600 + minutes * 60;
	cout << "Общее количество секунд: " << seconds << endl;

}
