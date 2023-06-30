#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "Rus");

    int humanAge;
    cout << "Введите возраст собаки в человеческих годах: ";
    cin >> humanAge;

    if (humanAge < 0) {
        cout << "Ошибка: введено отрицательное число.\n";
        return 0;
    }

    int dogAge;
    if (humanAge <= 2) {
        dogAge = humanAge * 10.5;
    }
    else {
        dogAge = 21 + (humanAge - 2) * 4;
    }

    cout << "Возраст собаки в годах: " << dogAge << endl;

    return 0;
}
