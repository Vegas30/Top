// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// 

#include <iostream>
using namespace std;

size_t mystrlen(const char* str) 
{
	size_t length = 0;

	while (str[length] != '\0') {
		length++;
	}

	return length;
}

char* mystrcpy(char* str1, const char* str2) 
{
	char* result = str1; // Сохраняем указатель на начало str1

	while ((*str1++ = *str2++) != '\0') {
	
		// Копируем символ из str2 в str1 и перемещаем указатели вперед
	}

	return result; // Возвращаем указатель на начало str1
}

char* mystrcat(char* str1, const char* str2)
{
	char* result = str1; // Сохраняем указатель на начало str1

// Перемещаем указатель str1 до его завершающего нуль-символа
	while (*str1 != '\0') {
		str1++;
	}

	// Копируем символы из str2 в str1 до завершения str2
	while (*str2 != '\0') {
		*str1++ = *str2++;
	}

	*str1 = '\0'; // Устанавливаем завершающий нуль-символ в конце объединенной строки

	return result; // Возвращаем указатель на начало str1

}


char* mystrchr(char* str, char s) {
	while (*str != '\0') {
		if (*str == s) {
			return str; // Нашли символ s, возвращаем указатель на него
		}
		str++; // Перемещаем указатель вперед
	}
	return nullptr; // Символ s не найден, возвращаем nullptr
}

char* mystrstr(char* str1, const char* str2) {
	char* p = str1;
	const char* q = str2;

	while (*p != '\0') {
		char* temp = p;
		while (*temp == *q && *temp != '\0' && *q != '\0') {
			temp++;
			q++;
		}
		if (*q == '\0') {
			return p;
		}
		p++;
		q = str2;
	}
	return nullptr;
}

//char* mystrstr(char* str1, char* str2) {
//	if (*str2 == '\0') {
//		// Если str2 - пустая строка, возвращаем указатель на начало str1
//		return str1;
//	}
//
//	while (*str1 != '\0') {
//		char* p1 = str1;
//		char* p2 = str2;
//
//		while (*p1 == *p2 && *p2 != '\0') {
//			p1++;
//			p2++;
//		}
//
//		if (*p2 == '\0') {
//			// Найдено вхождение подстроки str2
//			return str1;
//		}
//
//		str1++;
//	}
//
//	return 0; // Подстрока str2 не найдена
//}


int main()
{
	setlocale(LC_ALL, "ru");

	const char* myCString = "Пример строки";
	size_t length = mystrlen(myCString);

	std::cout << "Длина строки: " << length << std::endl;
	
	//--------------------------------------------------

	char destination[100]; // Создаем буфер для копирования строки
	const char* source = "Пример строки";

	mystrcpy(destination, source);

	std::cout << "Скопированная строка: " << destination << std::endl;

	//--------------------------------------------------

	char str1[100] = "Hello, ";
	const char* str2 = "World!";

	mystrcat(str1, str2);

	std::cout << "Объединенная строка: " << str1 << std::endl;

	//--------------------------------------------------

	char str[] = "Hello, World!";
	char searchChar = 'o';

	char* result = mystrchr(str, searchChar);

	if (result != nullptr) {
		std::cout << "Символ '" << searchChar << "' найден по адресу: " << static_cast<void*>(result) << std::endl;
	}
	else {
		std::cout << "Символ '" << searchChar << "' не найден." << std::endl;
	}

	//--------------------------------------------------

	char str1_2[] = "Это пример строки для поиска подстроки";
	const char str2_2[] = "пример";

	char* result2 = mystrstr(str1_2, str2_2);

	if (result != nullptr) {
		std::cout << "Подстрока '" << str2_2 << "' найдена по адресу: " << static_cast<void*>(result) << std::endl;
	}
	else {
		std::cout << "Подстрока '" << str2_2 << "' не найдена." << std::endl;
	}


	return 0;
}









