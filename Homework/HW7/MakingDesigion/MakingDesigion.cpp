#include <iostream>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Rus");

    int flips = 9;
    int headsCount = 0;

    cout << "Подбрасывайте монетку и введите результат (1 - орел, 0 - решка):\n";

    for (int i = 0; i < flips; ++i) 
    {
        int result;
        cout << "Подброс #" << i + 1 << ": ";
        cin >> result;

        if (result == 1) 
        {
            headsCount++;
        }
    }

    if (headsCount % 2 == 0) 
    {
        cout << "Принимается положительное решение.\n";
    }
    else {
        cout << "Принимается отрицательное решение.\n";
    }

    return 0;
}
