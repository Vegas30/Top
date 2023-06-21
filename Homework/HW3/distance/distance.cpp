#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	float v, t, a, S;

	cout << "Введите значение скорости v: ";
	cin >> v;

	cout << "Введите значение ускорения a: ";
	cin >> a;

	cout << "Введите значение времени t: ";
	cin >> t;

	S = v * t + (a * pow(t, 2)) / 2;

	cout << "Пройденное расстояние S равно: " << S << endl;

	return 0;
}