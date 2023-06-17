#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int big_bottles_amount, small_bottles_amount;
    float big_bottles_cost = 0.25;
    float small_bottles_cost = 0.10;
    float summ;

    cout << "Введите количество\nбутылок большого размера: ";
    cin >> big_bottles_amount;
    cout << "\nВведите количество\nбутылок маленького размера: ";
    cin >> small_bottles_amount;

    summ = (big_bottles_amount * big_bottles_cost) + (small_bottles_amount * small_bottles_cost);
    cout << "Сумма к получению: " << summ << "$" << endl;


}
