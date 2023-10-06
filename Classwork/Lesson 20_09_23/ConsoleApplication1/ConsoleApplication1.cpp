// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	const char* path = "e:\\b_data.dat";
	const int n = 5;
	int arr[n];
	FILE* out;
	if (fopen_s(&out, path, "wb") != NULL)
		cout << "The file cannot be opened";
	else
	{
		for (int i = 0; i < 10; i++)
		{
			fwrite(&arr[i], sizeof(int), 1, out);
		}
	}
	return 0;
}