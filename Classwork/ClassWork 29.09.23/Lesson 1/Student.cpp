#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(const char* studentName,
	const int studentMarkCount,
	const int* studentMarks)
{
	// присваивание имени
	createName(studentName);
	// присваивание списка оценок
	marks = new int[studentMarkCount];
	for (int i = 0; i < studentMarkCount; i++)
	{
		marks[i] = studentMarks[i];
	}
	markCount = studentMarkCount;
}

// присваивание имени
void Student::createName(const char* studentName)
{
	int nameLength = strlen(studentName);
	name = new char[nameLength + 1];
	for (int i = 0; i <= nameLength; i++)
	{
		name[i] = studentName[i];
	}
}

// запись имени
void Student::setName(const char* studentName)
{
	delete[] name;
	createName(studentName);
}

// реализация метода вычисления среднего балла
double Student::getAver()
{
	double sum = 0;
	for (int i = 0; i < markCount; i++)
	{
		sum += marks[i];
	}
	return sum / markCount;
}

void Student::setMark(int mark, int index)
{
	// присваивание с проверкой оценки
	// проверка индекса
	if (index < 0 or index >= markCount)
	{
		return;
	}
	// присваивание с проверкой оценки
	if (mark < 1 or mark > 12)
	{
		mark = 0;
	}
	marks[index] = mark;
}