#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
template <class T>

void bubbleSort(T a[], long size)
{
	long i, j;
	T x;
	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
		{
			if (a[j - 1] > a[j])
			{
				x = a[j - 1];
				a[j - 1] = a[j];
				a[j] = x;
			}
		}
	}
}

int BinarySearch(int A[], int Lb, int Ub, int Key)
{
	int M;
	while (1)
	{
		M = (Lb + Ub) / 2;
		if (Key < A[M])
		{
			Ub = M - 1;
		}
		else if (Key > A[M])
		{
			Lb = M + 1;
		}
		else
		{
			return M;
		}
	if (Lb > Ub)
		return -1;
	}
}

int main()
{
	srand(time(NULL));
	const long SIZE = 10;
	int ar[SIZE];
	int key, ind;
	//до сортировки
	for (int i = 0; i < SIZE; i++)
	{
		ar[i] = rand() % 100;
		cout << ar[i] << "\t";
	}
	cout << "\n\n";

	bubbleSort(ar, 10);

	for (int = 0; i < SIZE; i++)
	{
		cout << ar[i] << "\t";
	
	}

	cout << "\n\n";
	


}
