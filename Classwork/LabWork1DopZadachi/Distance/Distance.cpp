#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	const int inch_in_feet = 12;
	const int feet_in_yard = 3;
	const int feet_in_miles = 5280;
	double distance_in_feet, dist_in_inches, dist_in_yards, dist_in_miles;

	cout << "Введите расстояние в футах: ";
	cin >> distance_in_feet;

	dist_in_inches = distance_in_feet * inch_in_feet;
	dist_in_yards = distance_in_feet / feet_in_yard;
	dist_in_miles = distance_in_feet / feet_in_miles;


	cout << "Расстояние в дюймах: " << fixed << setprecision(3) << dist_in_inches << " дюймов" << endl;
	cout << "Расстояние в ярдах: " << fixed << setprecision(3) << dist_in_yards << " ярдов" << endl;
	cout << "Расстояние в милях: " << fixed << setprecision(3) << dist_in_miles << " миль" << endl;


	return 0;




}
