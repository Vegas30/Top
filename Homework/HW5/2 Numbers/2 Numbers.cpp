#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "Rus");

    int a;
    cout << "Введите натуральное число a (a<100): ";
    cin >> a;

    if (a >= 100) {
        cout << "Число не удовлетворяет условию (a<100).";
        return 0;
    }

    int sum = 0;
    int count = 0;

    for (int number = a; number > 0; number /= 10) {
        int digit = number % 10;
        sum += digit;
        count++;
    }

    cout << "Количество цифр: " << count << endl;
    cout << "Сумма цифр: " << sum << endl;

    return 0;
}