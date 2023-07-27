#include <iostream>

using namespace std;

int sumOfDigits(int number) 
{
    int sum = 0;
    while (number > 0) 
    {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }
    return sum;
}

int main() {
    int number;

    cout << "Введите число: ";
    cin >> number;

    int result = sumOfDigits(number);

    cout << "Сумма цифр числа " << number << " равна: " << result << "\n";

    return 0;
}
