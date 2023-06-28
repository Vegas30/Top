#include <iostream>

using namespace std;

int main() {
    int number;

    setlocale(LC_ALL, "Rus");

    cout << "Введите целое число: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << number << " - четное число" << endl;
    }
    else {
        cout << number << " - нечетное число" << endl;
    }

    return 0;
}