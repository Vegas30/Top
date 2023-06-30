#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "Rus");

    string month;
    cout << "Введите название месяца: ";
    cin >> month;

    int days;

    if (month == "январь" || month == "март" || month == "май" || month == "июль" ||
        month == "август" || month == "октябрь" || month == "декабрь") {
        days = 31;
    }
    else if (month == "апрель" || month == "июнь" || month == "сентябрь" || month == "ноябрь") {
        days = 30;
    }
    else if (month == "февраль") {
        cout << "Введите год: ";
        int year;
        cin >> year;

        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            days = 29;
        }
        else {
            days = 28;
        }
    }
    else {
        cout << "Неверное название месяца.\n";
        return 0;
    }

    cout << "Количество дней в " << month << ": " << days << endl;

    return 0;
}
