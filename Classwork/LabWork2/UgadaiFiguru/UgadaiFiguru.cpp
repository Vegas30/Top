#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "Rus");

    int numSides;
    cout << "Введите количество сторон фигуры: ";
    cin >> numSides;

    if (numSides < 3 || numSides > 10) {
        cout << "Введено недопустимое значение. Количество сторон должно быть от 3 до 10.\n";
        return 0;
    }

    string shapeName;
    switch (numSides) {
    case 3:
        shapeName = "Треугольник";
        break;
    case 4:
        shapeName = "Четырехугольник";
        break;
    case 5:
        shapeName = "Пятиугольник";
        break;
    case 6:
        shapeName = "Шестиугольник";
        break;
    case 7:
        shapeName = "Семиугольник";
        break;
    case 8:
        shapeName = "Восьмиугольник";
        break;
    case 9:
        shapeName = "Девятиугольник";
        break;
    case 10:
        shapeName = "Десятиугольник";
        break;
    }

    cout << "Фигура с " << numSides << " сторонами - " << shapeName << ".\n";

    return 0;
}
