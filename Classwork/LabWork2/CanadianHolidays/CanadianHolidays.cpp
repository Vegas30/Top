#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    int day;
    string month;

    cout << "Введите день и месяц: ";
    cin >> day >> month;

    if (day == 1 && (month == "январь" || month == "января")) 
    {
        cout << "Новый год" << endl;
    }

    else if (day == 1 && (month == "июль" || month == "июля"))
    {
        cout << "День Канады" << endl;
    }

    else if (day == 25 && (month == "декабрь" || month == "декабря"))
    {
        cout << "Рождество" << endl;
    }
    else
    {
        cout << "На эту дату праздники не приходятся.\n";
    }
}
