#include <iostream>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Rus");

    int N;
    const int distancePerDay = 15; 
    const int increasePerDay = 2; 

    cout << "Введите количество дней N: ";
    cin >> N;

    if (N <= 0) 
    {
        cout << "Ошибка: Количество дней должно быть больше нуля.\n";
        return 1;
    }

    int totalDistance = 0;
    int currentDistance = distancePerDay;

    for (int day = 1; day <= N; ++day) 
    {
        totalDistance += currentDistance;
        currentDistance += increasePerDay;
    }

    cout << "Общее расстояние, которое проползет улитка через " << N << " дней: " << totalDistance << " см.\n";

    return 0;
}
