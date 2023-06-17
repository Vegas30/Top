#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    float length, width, square, akr;
    cout << "Введите длину участка в футах: ";
    cin >> length;
    cout << "\nВведите ширину участка в футах: ";
    cin >> width;

    square = length * width;
    akr = 43560;
    square /= akr;
    cout << "Площадь участка: " << square << " акров\n";
}