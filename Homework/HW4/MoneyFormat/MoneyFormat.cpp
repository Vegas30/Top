#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

	double amount;

	cout << "Введите дробное число через точку: ";
	cin >> amount;

	int dollars = floor(amount);
	int cents = (amount - dollars) * 100;

	cout << dollars << " долларов " << cents << " центов" << endl;

	return 0;

}
