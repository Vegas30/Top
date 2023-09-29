#pragma once

#include <iostream>

class Student
{
private:
	// ФИО
	char* name;
	// число оценок
	int markCount;
	// оценки
	int* marks;

	// служебные функции
	void createName(const char* studentName);

public:
	// конструктор
	Student(const char* studentName,
		const int studentMarkCount,
		const int* studentMarks);

	// чтение закрытых членов класса
	const char* getName()
	{
		return name;
	}
	int getMark(int index)
	{
		return marks[index];
	}
	// запись закрытых членов класса
	void setName(const char* studentName);
	void setMark(int mark, int index);
	// вычисление среднего балла
	double getAver();
};