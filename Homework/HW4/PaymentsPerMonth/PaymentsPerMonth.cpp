#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>


using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");


	double amount, procent, payment, proc_in_month;

	cout << "Введите сумму в евро: ";
	cin >> amount;
	cout << "Введите процент годовых: ";
	cin >> procent;

	proc_in_month = procent / 12;

	payment = amount / 100 * proc_in_month;

	//cout.imbue(locale("de_DE.UTF-8"));
	//cout << "Сумма выплачиваемая в месяц: \u20AC" << showbase << put_money(payment *100)  << endl;
	
	cout << "Сумма выплачиваемая в месяц: " << fixed << setprecision(2) << payment << " евро" << endl;

	return 0;

}