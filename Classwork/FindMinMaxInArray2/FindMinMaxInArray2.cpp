#include <iostream>
#include <Windows.h>
#include <stdlib.h>

using namespace std;

void findMinMax(int arr[], int size) 
{
    //int size = sizeof(arr)/sizeof(arr[0])
    if (size <= 0) {
        cout << "Ошибка: передан пустой массив.\n";
        return;
    }

    int minValue = arr[0];
    int minIndex = 0;
    int maxValue = arr[0];
    int maxIndex = 0;

    for (int i = 1; i < size; ++i) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }

        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }
    cout << "Минимальное значение: " << minValue << ", его индекс: " << minIndex << endl;
    cout << "Максимальное значение: " << maxValue << ", его индекс: " << maxIndex << endl;
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	srand(time(0));
    const int size = 10;
	int arr[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 200; 
		cout << arr[i] << endl;

	}

    int minValue, minIndex, maxValue, maxIndex;
    findMinMax(arr, size);



}
