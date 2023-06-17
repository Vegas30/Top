#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int days_amount;
	double feed_amount_in_day, required_feed_amount;

	cout << "Расход корма за 1 день (г.): ";
	cin >> feed_amount_in_day;
	cout << "Количество дней: ";
	cin >> days_amount;
	cout << string(31, '-') << endl;

	required_feed_amount = feed_amount_in_day * days_amount;
	required_feed_amount /= 1000; // переводим в килограммы 

	printf("Объем корма на %i дней: %.1f кг.\n", days_amount, required_feed_amount);

	return 0;
}