
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	double rashod_MPG, rashod_LPK;
	const double lpg = 3.785; // литров в галлоне
	const double kmpm = 1.609; // километров в миле 

	cout << "Введите расход топлива в милях на галлон(MPG): ";
	cin >> rashod_MPG;

	rashod_LPK = (100 * lpg) / (rashod_MPG * kmpm);

	cout << "Расход топлива в литрах на 100км: " << rashod_LPK << endl;

	// второй способ
	//rashod_LPK = 235.215 / rashod_MPG;

	//cout << "Расход топлива в литрах на 100км: " << rashod_LPK << endl;
}
