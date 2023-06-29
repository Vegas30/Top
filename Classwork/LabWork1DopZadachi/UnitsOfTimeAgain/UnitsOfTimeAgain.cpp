#include <iostream>
#include <iomanip>
#include <format>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int days, hours, minutes, seconds;
	cout << "Введите количество секунд: ";
	cin >> seconds;

	days = seconds / 86400;
	seconds -= days*86400;
	hours = seconds / 3600;
	seconds -= hours * 3600;
	minutes = seconds / 60;
	seconds -= minutes * 60;

	cout << format("{:02}:{:02}:{:02}:{:02}", days, hours, minutes, seconds) << endl;

}