﻿// Структура.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
struct Item {
	char title[20];
	unsigned int qty;
	float price;
};
int main()
{
	int i = 0;
	FILE* in;
	Item myshop[10];
	const char* path = "D:\\examples\\data.txt";
	if (fopen_s(&in, path, "r") != NULL)
		cout << "The file cannot be opened";
	else
	{
		while (!feof(in)) {
			fscanf_s(in, "%s", myshop[i].title,
				sizeof(myshop[i].title));
			fscanf_s(in, "%u", &myshop[i].qty,
				sizeof(myshop[i].qty));
			fscanf_s(in, "%f", &myshop[i].price,
				sizeof(myshop[i].price));
			cout << myshop[i].title << " "
				<< myshop[i].qty << " "
				<< myshop[i].price << "\n";;
			i++;
		}
	}
	return 0;
}