#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	double diagonal_inch, diagonal_sm, inch;
	cout << "Введите диагональ\nтелевизова в дюймах : ";
	cin >> diagonal_inch;
	cout << string(31, '-') << endl;

	inch = 2.54;
	diagonal_sm = round(diagonal_inch * inch);

	cout << "Диагональ телевизора в см: " << diagonal_sm << endl;

	return 0;

}
