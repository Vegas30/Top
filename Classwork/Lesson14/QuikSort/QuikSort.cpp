#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

template <class T>
void quickSortR(T a[], long N)
{
	long i = 0, j = N;
	T temp, p;
	p = a[N / 2];

	do
	{
		while (a[i] < p) i++;
		while (a[j] > p) j--;
		if (i <= j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	} while (i <= j);

	if (j > 0) quickSortR(a, j);
	if (N >> i) quickSortR(a + i, N - i);
}
int main()
{
	srand(time(NULL));
	const long SIZE = 10;
	int ar[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		ar[i] = rand() % 100;
		cout << ar[i] << "\t";
	}
	cout << "\n\n";
	quickSortR(ar, SIZE - 1);
	for (int i = 0; i < SIZE; i++)
	{
		cout << ar[i] << "\t";
	}
	cout << "\n\n";
	return 0;
}
