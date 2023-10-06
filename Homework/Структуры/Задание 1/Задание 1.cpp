// Задание 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct ComplexNumber 
{
	double real;
	double imaginary;
};

// Функция для сложения комплексных чисел
ComplexNumber add(const ComplexNumber& num1, const ComplexNumber& num2) 
{
	ComplexNumber result;
	result.real = num1.real + num2.real;
	result.imaginary = num1.imaginary + num2.imaginary;
	return result;
}

// Функция для вычитания комплексных чисел
ComplexNumber subtract(const ComplexNumber& num1, const ComplexNumber& num2)
{
	ComplexNumber result;
	result.real = num1.real - num2.real;
	result.imaginary = num1.imaginary - num2.imaginary;
	return result;
}

// Функция для умножения комплексных чисел
ComplexNumber multiply(const ComplexNumber& num1, const ComplexNumber& num2)
{
	ComplexNumber result;
	result.real = num1.real * num2.real - num1.imaginary * num2.imaginary;
	result.imaginary = num1.real * num2.imaginary + num1.imaginary * num2.real;
	return result;
}

// Функция для деления комплексных чисел
ComplexNumber divide(const ComplexNumber& num1, const ComplexNumber& num2)
{
	ComplexNumber result;
	double denominator = num2.real * num2.real + num2.imaginary * num2.imaginary;
	result.real = (num1.real * num2.real + num1.imaginary * num2.imaginary) / denominator;
	result.imaginary = (num1.imaginary * num2.real - num1.real * num2.imaginary) / denominator;
	return result;
}

int main()
{
	setlocale(LC_ALL, "ru");

	ComplexNumber num1 = { 3.0, 2.0 };  // Пример первого комплексного числа: 3 + 2i
	ComplexNumber num2 = { 1.0, 4.0 };  // Пример второго комплексного числа: 1 + 4i

	ComplexNumber sum = add(num1, num2);
	std::cout << "Сумма: " << sum.real << " + " << sum.imaginary << "i" << std::endl;

	ComplexNumber difference = subtract(num1, num2);
	std::cout << "Разность: " << difference.real << " + " << difference.imaginary << "i" << std::endl;

	ComplexNumber product = multiply(num1, num2);
	std::cout << "Произведение: " << product.real << " + " << product.imaginary << "i" << std::endl;

	ComplexNumber quotient = divide(num1, num2);
	std::cout << "Частное: " << quotient.real << " + " << quotient.imaginary << "i" << std::endl;

	return 0;
}
