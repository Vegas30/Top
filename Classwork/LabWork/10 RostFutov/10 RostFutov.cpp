#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int height_feet, height_inch;
    double height_in_cm;
    const int inch_in_feet = 12;
    const double cm_in_inch = 2.54;


    cout << "Введите ваш рост\n" << "Футов: ";
    cin >> height_feet;

    cout << "Дюймов: ";
    cin >> height_inch;

    height_inch += height_feet * inch_in_feet;
    height_in_cm = height_inch * cm_in_inch;

    cout << "Ваш рост: " << height_in_cm << " см" << endl;


    return 0;




}
