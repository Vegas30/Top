#include<iostream>
#include<time.h>

using namespace std;

int main() 
{
	srand(time(NULL));
	int size;
	int* dar;
	// запрос размера массива с клавиатуры
	cout << "Enter size:\n";
	cin >> size;
	/* выделение памяти под массив с количеством
	элементов size
	*/
	dar = new int[size];
	// заполнение массива и показ на экран
	for (int i = 0; i < size; i++) {
		dar[i] = rand() % 100;
		cout << dar[i] << "\t";
	}
	cout << "\n\n";
	return 0;
}