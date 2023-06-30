#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	double b, h, area;
	cout << "Введите длину основания треугольника: ";
	cin >> b;
	cout << "Введите высоту треугольника: ";
	cin >> h;

	area = (b * h) / 2;

	cout << "Площадь треугольника: " << area << endl;

}
