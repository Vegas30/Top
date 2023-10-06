// Длина каждой строки.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;
int main()
{
	const char* path = "C:\\Users\\RenamedUser\\source\\repos\\Vegas30\\Top\\Classwork\\Lesson 20_09_23\\Структура\\text.txt";
	int c;
	int len = 0, cnt = 0;
	FILE* in;
	if (fopen_s(&in, path, "r") != NULL)
		cout << "The file cannot be opened";
	else
	{
		while (!feof(in)) {
			c = fgetc(in);
			if (c == '\n') {
				cnt++;
				cout << "String " << cnt
					<< " length=" << len
					<< "\n";
				len = 0;
			}
			else
			{
				len++;
			}
		}
		if (len)
		{
			cnt++;
			cout << "String " << cnt << " length="
				<< len << "\n";
		}
	}
	return 0;
}