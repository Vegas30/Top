#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    float length, width, square;
    cout << "Введите длину комнаты: ";
    cin >> length;
    cout << "\nВведите ширину комнаты: ";
    cin >> width;

    square = length * width;
    cout << "Площадь комнаты: " << square << " метров\n";
}
