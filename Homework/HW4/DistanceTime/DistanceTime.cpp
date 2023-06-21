#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	setlocale(LC_ALL, "Rus");

    double distance, time, speed, distance_in_km, time_sec;
    const int sec_in_min = 60;
    const int sec_in_hour = 3600;

    cout << "Вычисление скорости бега\n";
    cout << "Введите длину дистанции (метров): ";
    cin >> distance;
    cout << "Введите время (мин.сек): ";
    cin >> time;
    
    distance_in_km = distance / 1000;
    int minutes = floor(time);
    int seconds = (time - minutes) * 100;
    time_sec = minutes * 60 + seconds;

    speed = distance_in_km / (time_sec / sec_in_hour);
    

    cout << "Дистанция: " << distance << endl;
    cout << "Время: " << minutes << " мин " << seconds << " сек = " << time_sec << " сек" << endl;
    cout << "Скорость бегуна равна " << fixed << setprecision(2) << speed << " км/ч" << endl;
 

	return 0;

}