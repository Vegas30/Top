// Lesson 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	const int n = 10;
	char arr[n];
	FILE* out;
	const char* path = "outfile.txt";
	for (int i = 0; i < n; i++)
	{
		//arr[i] = static_cast<char>(std::rand() % 26 + 65);
		arr[i] = i + 5;
	}
	if ((fopen_s(&out, path, "wb")) != NULL)
		cout << "The file could not be created";
	else
	{
		for (int i = 0; i < n; i++)
		{
			fprintf(out, "%1c ", arr[i]);
			fprintf(out, "\n");
		}
		fclose(out);
	}
	return 0;
}