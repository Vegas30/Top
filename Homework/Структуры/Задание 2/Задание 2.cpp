// Задание 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

struct Car 
{
    double length;
    double clearance;
    double engineVolume;
    double enginePower;
    double wheelDiameter;
    std::string color;
    std::string transmissionType;
};

// Функция для установки значений свойств автомобиля
void setCarProperties(Car& car, double length, double clearance, double engineVolume, double enginePower,
    double wheelDiameter, const std::string& color, const std::string& transmissionType) 
{
    car.length = length;
    car.clearance = clearance;
    car.engineVolume = engineVolume;
    car.enginePower = enginePower;
    car.wheelDiameter = wheelDiameter;
    car.color = color;
    car.transmissionType = transmissionType;
}

// Функция для отображения значений свойств автомобиля
void displayCarProperties(const Car& car) 
{
    std::cout << "Длина: " << car.length << " м" << std::endl;
    std::cout << "Клиренс: " << car.clearance << " м" << std::endl;
    std::cout << "Объем двигателя: " << car.engineVolume << " л" << std::endl;
    std::cout << "Мощность двигателя: " << car.enginePower << " л.с." << std::endl;
    std::cout << "Диаметр колес: " << car.wheelDiameter << " дюймов" << std::endl;
    std::cout << "Цвет: " << car.color << std::endl;
    std::cout << "Тип коробки передач: " << car.transmissionType << std::endl;
}

// Функция для поиска значений свойств автомобиля по цвету
bool searchCarByColor(const Car& car, const std::string& targetColor) 
{
    return car.color == targetColor;
}

int main() 
{
    setlocale(LC_ALL, "ru");

    Car myCar;
    setCarProperties(myCar, 4.5, 0.15, 2.0, 150, 17, "черный", "автоматическая");

    std::cout << "Свойства моего автомобиля:" << std::endl;
    displayCarProperties(myCar);

    std::string targetColor = "черный";
    if (searchCarByColor(myCar, targetColor)) 
    {
        std::cout << "Автомобиль такого цвета найден!" << std::endl;
    }
    else 
    {
        std::cout << "Автомобиль такого цвета не найден." << std::endl;
    }

    return 0;
}
