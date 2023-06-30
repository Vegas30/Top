#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    setlocale(LC_ALL, "Rus");

    double regularPrice = 3.49;  // Обычная цена за буханку хлеба
    double discount = 0.60;  // Скидка на вчерашний хлеб (60%)
    int quantity;

    cout << "Введите количество приобретенных вчерашних буханок хлеба: ";
    cin >> quantity;

    double discountedPrice = regularPrice * (1 - discount);  // Цена со скидкой
    double totalCost = quantity * discountedPrice;  // Общая стоимость

    cout << "Обычная цена за буханку: $" << fixed << setprecision(2) << regularPrice << endl;
    cout << "Цена со скидкой: $" << fixed << setprecision(2) << discountedPrice << endl;
    cout << "Общая стоимость приобретенного хлеба: $" << fixed << setprecision(2) << totalCost << endl;

    return 0;
}