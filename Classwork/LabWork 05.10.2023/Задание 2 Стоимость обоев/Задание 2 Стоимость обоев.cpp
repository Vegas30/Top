// Задание 2 Стоимость обоев.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <cmath>

class Room {
private:
    std::string name;
    double length;
    double width;
    bool ceiling;
    double ceilingHeight;

public:
    Room(std::string n, double l, double w, bool c, double h) : name(n), length(l), width(w), ceiling(c), ceilingHeight(h) {}

    double calculatePerimeter() const {
        return 2 * (length + width);
    }

    int calculateNumberOfStrips(double rollWidth) const {
        double usableHeight = ceiling ? ceilingHeight + 0.1 : ceilingHeight;
        double stripsInRoom = calculatePerimeter() / (rollWidth / 100); // Переводим ширину обоев из см в метры
        return std::ceil(stripsInRoom); // Округляем вверх, так как не можем купить часть полосы
    }
};

class WallpaperRoll {
private:
    std::string name;
    double length;
    double width;
    double price;

public:
    WallpaperRoll(std::string n, double l, double w, double p) : name(n), length(l), width(w), price(p) {}

    double calculateArea() const {
        return length * width; // Площадь рулона в квадратных метрах
    }

    int calculateNumberOfRolls(int numberOfStrips) const {
        double stripsInRoll = width / 100; // Переводим ширину обоев из см в метры
        return std::ceil(numberOfStrips / stripsInRoll); // Округляем вверх, так как не можем купить часть рулона
    }

    double calculateCost(int numberOfRolls) const {
        return price * numberOfRolls;
    }
};

int main() 
{

    Room room("Living Room", 6.0, 5.0, true, 2.7); // Высота потолка 2.7 метра

    WallpaperRoll wallpaper("Floral Pattern", 10.0, 0.53, 25.99); // Размер рулона в метрах

    int stripsNeeded = room.calculateNumberOfStrips(wallpaper.calculateArea());
    int rollsNeeded = wallpaper.calculateNumberOfRolls(stripsNeeded);

    double totalCost = wallpaper.calculateCost(rollsNeeded);

    std::cout << "Total number of strips needed: " << stripsNeeded << std::endl;
    std::cout << "Total number of rolls needed: " << rollsNeeded << std::endl;
    std::cout << "Total cost of wallpaper: $" << totalCost << std::endl;

    return 0;
}

