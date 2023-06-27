
#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251");
    setlocale(LC_ALL, "Russian");
    string name;

    cout << "Введите имя: ";
    cin >> name;
    cout << "Привет, " << name << "!" << endl;
}
