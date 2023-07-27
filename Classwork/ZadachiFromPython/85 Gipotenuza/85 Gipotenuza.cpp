#include <iostream>

using namespace std;

double gipo(double a, double b)
{
	double res = sqrt(pow(a, 2) + pow(b, 2));
	return res;
}

int main()
{
	setlocale(LC_ALL, "Rus");

	double a, b, c;
	cout << "Введите длину катетов А и В: ";
	cin >> a >> b;
	c = gipo(a, b);
	cout <<  "Длина гипотенузы равна: " << c << endl;

}
