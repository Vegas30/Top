#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	int days;
	
	cout << "Введите количество дней: ";
	cin >> days;
	
	int weeks = days / 7; // вычисляем количество полных недель
	int remainingDays = days % 7; // вычисляем количество оставшихся дней
	
	cout << days << " дней = " << weeks << " недель и " << remainingDays << " дней" << endl;
	
	return 0;

}