#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int smartfon_battery, number_of_charges, powerbank_capacity;

	cout << "Введите емкость\nаккамулятора смартфона (мАч.) : ";
	cin >> smartfon_battery;
	cout << "Введите необходимое\nколичество зарядов смартфона (мАч.) : ";
	cin >> number_of_charges;
	cout << string(31, '-') << endl;

	powerbank_capacity = smartfon_battery * number_of_charges;

	cout << "Минимальная емкость для " << number_of_charges << " зарядов в мАч.: " << powerbank_capacity << endl;

	return 0;
}
