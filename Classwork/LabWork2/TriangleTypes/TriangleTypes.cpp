#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	double side1, side2, side3;

	cout << "Введите длину первой стороны треугольника: ";
	cin >> side1;

	cout << "Введите длину второй стороны треугольника: ";
	cin >> side2;

	cout << "Введите длину третьей стороны треугольника: ";
	cin >> side3;

	if (side1 == side2 && side2 == side3)
	{
		cout << "Треугольник является равносторонним." << endl;
	}
	else if (side1 == side2 || side1 == side3 || side2 == side3)
	{
		cout << "Треугольник является равнобедренным." << endl;
	}
	else
	{
		cout << "Треугольник является разносторонним." << endl;
	}

	return 0;


}
