#include <iostream>
#include <iomanip>
#include <format>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    double check_amount, tips, taxes_procent, tax_payable, totalAmount;

    cout << format("{:>30}:", "Введите сумму заказа");
    cin >> check_amount;

    cout << format("{:>30}:", "Введите размер налога в %");
    cin >> taxes_procent;

    tax_payable = (check_amount / 100) * taxes_procent;
    tips = (check_amount / 100) * 18;
    totalAmount = check_amount + tax_payable + tips;

    cout << format("{:>30}:{:<10.2f}", "Сумма заказа", check_amount) << endl;
    cout << format("{:>30}:{:<10.2f}", "Сумма налога", tax_payable) << endl;
    cout << format("{:>30}:{:<10.2f}", "Сумма чаевых", tips) << endl;
    cout << format("{:>30}:{:<10}", string(20, '-'), string(10, '-')) << endl;
    cout << format("{:>30}:{:<10.2f}", "Итого с вас", totalAmount) << endl;




}