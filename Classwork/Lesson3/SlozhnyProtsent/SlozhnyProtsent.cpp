// требуется стандарт языка C++20 иначе не будет работать format()
#include <iostream>
#include <format>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	const int procent = 4;
	double deposit_amount, year_profit;


	cout << format("{:>30}:","Введите сумму депозита");
	cin >> deposit_amount;

	double balance = deposit_amount;

	for (int i = 1; i <= 3; i++)
	{
		year_profit = balance / 100 * 4;
		balance += year_profit;

		cout << format("{:>30}:{:<10.2f}", format("Сумма на счету в конце {} года",i), balance ) << endl;
	}



}