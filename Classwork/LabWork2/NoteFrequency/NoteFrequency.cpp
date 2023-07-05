#include <iostream>
#include <cmath>

using namespace std;

int main() {

    setlocale(LC_ALL, "Rus");

    string note;
    int octave;

    cout << "Введите ноту (например, С) : ";
    cin >> note;

    cout << "и номер октавы(например, 4) : ";
    cin >> octave;

    double baseFrequency = 0.0;

    if (note == "C") baseFrequency = 261.63;
    else if (note == "D") baseFrequency = 293.66;
    else if (note == "E") baseFrequency = 329.63;
    else if (note == "F") baseFrequency = 349.23;
    else if (note == "G") baseFrequency = 392.00;
    else if (note == "A") baseFrequency = 440.00;
    else if (note == "B") baseFrequency = 493.88;
    else {
        cout << "Неверная нота!" << endl;
        return 0;
    }

    double frequency = baseFrequency / pow(2, 4 - octave);

    cout << "Частота ноты " << note << octave << " равна " << frequency << " Гц" << endl;

    return 0;
}
