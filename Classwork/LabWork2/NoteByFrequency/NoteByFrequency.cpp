#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    const double C4 = 261.63;
    const double D4 = 293.66;
    const double E4 = 329.63;
    const double F4 = 349.23;
    const double G4 = 392.00;
    const double A4 = 440.00;
    const double B4 = 493.88;

    double frequency;

    cout << "Введите частоту звука: ";
    cin >> frequency;

    string note;

    if (abs(frequency - C4) <= 1.0) {
        note = "C4";
    }
    else if (abs(frequency - D4) <= 1.0) {
        note = "D4";
    }
    else if (abs(frequency - E4) <= 1.0) {
        note = "E4";
    }
    else if (abs(frequency - F4) <= 1.0) {
        note = "F4";
    }
    else if (abs(frequency - G4) <= 1.0) {
        note = "G4";
    }
    else if (abs(frequency - A4) <= 1.0) {
        note = "A4";
    }
    else if (abs(frequency - B4) <= 1.0) {
        note = "B4";
    }
    else {
        cout << "Ноты, соответствующей введенной частоте, не существует." << endl;
        return 0;
    }

    cout << "Соответствующая нота: " << note << endl;

    return 0;
}
