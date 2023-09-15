// Черновик.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    int value = 253;

    for (int i = 0; i < sizeof(int); i++)
        printf("%hhd ", *(((unsigned char*)&value) + i));

}
