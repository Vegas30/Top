#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int d;
    cout << "Введите кол-во денег: ";
    cin >> d;
    int p = 2;
    int s = 0;

    while (d > 0) {
        d -= p;
        s++;
    }
    cout << "Можно купить " << s << " мороженых" << endl;

}
