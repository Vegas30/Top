// Задание 1 Lift.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Lift
{
private:
	int lowerFloor = 1;
	int upperFloor = 5;
	bool isOn;
	bool isPower;
	int currentFloorNumber;
	int* floorRange;
	
public:

	Lift(const int* floorRange, );

	 
	void setFloorNumber(int floor)
	{
		floorNumber = floor;
	}

	void setOnOff(int sw)
	{
		isOn = sw;
	}



};


int main()
{


}
