#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	float L, R, S, pi;

	pi = 3.14; 

	cout << "Введите значение длины окружности L: ";
	cin >> L;

	R = L / (2 * pi);

	S = pi * pow(R, 2);

	cout << "Значение радиуса R равно: " << R << endl;
	cout << "Значение площади круга S равно: " << S << endl;

	return 0;

}