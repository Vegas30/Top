#include <iostream>

using namespace std;

void ShowArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *arr + i) << " ";
	}
}

// подсчет суммы элементов массива
int GetAmount(int* ptr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)

	{
		sum += *(ptr + i);
	}
	return sum;
}

int main()
{
	const int size = 5;
	int arr[size] = { 33,44,7,8,9 };



	return 0;

}
