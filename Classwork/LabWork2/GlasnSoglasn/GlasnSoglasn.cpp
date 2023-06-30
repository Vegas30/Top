#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "Rus");

    char letter;
    cout << "Введите букву латинского алфавита: ";
    cin >> letter;

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
        cout << "Это гласная буква.\n";
    }
    else if (letter == 'y') {
        cout << "Эта буква может быть и гласной, и согласной.\n";
    }
    else {
        cout << "Это согласная буква.\n";
    }

    return 0;
}
