#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	float R1, R2, R3, R0;

	cout << "Введите значение R1: ";
	cin >> R1;

	cout << "Введите значение R2: ";
	cin >> R2;

	cout << "Введите значение R3: ";
	cin >> R3;

	R0 = 1 / ((1 / R1) + (1 / R2) + (1 / R3));
	//R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);

	cout << "Значение сопротивления R0 равно: " << R0 << endl;

	return 0;
}