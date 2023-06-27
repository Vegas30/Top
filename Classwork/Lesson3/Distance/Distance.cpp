#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int distance_in_feet;
    const int inch_in_feet = 12;
    const int feet_in_yard = 3;
    const int feet_in_miles = 5280 ;
    double dist_in_inches, dist_in_yards, dist_in_miles;
    cout << "Введите расстояние в футах: ";
    cin >> distance_in_feet;

    dist_in_inches = distance_in_feet * inch_in_feet;


    std::cout << "Расстояние в дюймах: " << distance_in_feet * inch_in_feet << " дюймов" << std::endl;
    std::cout << "Расстояние в ярдах: " << distance_in_feet * << " ярдов" << std::endl;
    std::cout << "Расстояние в милях: " << distance_in_feet << " миль" << std::endl;


    return 0;




}
