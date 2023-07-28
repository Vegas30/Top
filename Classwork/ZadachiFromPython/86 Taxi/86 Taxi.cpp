#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;

double calculateTaxiFare(double distanceInKilometers) 
{
    const double baseFare = 4.00;
    const double ratePerMeter = 0.25 / 140.0; // Стоимость за метр
    double distanceInMeters = distanceInKilometers * 1000.0;

    double fare = baseFare + (ratePerMeter * distanceInMeters);
    return fare;
}

int main()
{
	setlocale(LC_ALL, "Rus");

    double distanceInKilometers;

    // Запрашиваем у пользователя расстояние поездки в километрах
    cout << "Введите расстояние поездки в километрах: ";
    cin >> distanceInKilometers;

    if (distanceInKilometers < 0) {
        cout << "Ошибка: Расстояние не может быть отрицательным.\n";
        return 1;
    }

    double totalFare = calculateTaxiFare(distanceInKilometers);

    cout << fixed << setprecision(2) << "Итоговая сумма оплаты такси: $" << totalFare << endl;

    return 0;



}
