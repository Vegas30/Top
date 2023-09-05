// Задание 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/* Написать функцию, выводящую на экран
переданную ей игральную карту */

#include<iostream>
#include<iomanip>	//для функций setw() и setfill()
using namespace std;

void showCard(int _suit, int _num)
{
	int filler = 6;                               // заполнение пробелами в setw()
	char upLeftCorner = 218, upRightCorner = 191, horizontalLine = 196, vertivalLine = 179, downLeftCorner = 192, downRightCorner = 217; //символы контура карти
	char  charCard[13] = { 'A','2','3','4','5','6','7','8','9','0','J','Q','K' };               //массив названий(номеров) карт
	_suit += 2;                                // код ASCII символа масти

	system("cls");
	cout << upLeftCorner << setfill(horizontalLine) << setw(8) << upRightCorner << endl;             //верхняя линия
	if (_num == 10)                               //карта Десятка
	{
		filler--;                               //автозаполнение
		cout << vertivalLine << "1" << charCard[_num - 1] << (char)_suit << setfill(' ') << setw(filler) << vertivalLine << endl;   
	}
	else
		cout << vertivalLine << charCard[_num - 1] << (char)_suit << setfill(' ') << setw(filler) << vertivalLine << endl;      
	cout << vertivalLine << setw(8) << vertivalLine << endl;
	cout << vertivalLine << setw(8) << vertivalLine << endl;
	cout << vertivalLine << setw(8) << vertivalLine << endl;
	cout << vertivalLine << setw(8) << vertivalLine << endl;
	cout << vertivalLine << setw(8) << vertivalLine << endl;
	cout << vertivalLine << setw(8) << vertivalLine << endl;
	if (_num == 10)                               
		cout << vertivalLine << setfill(' ') << setw(filler) << "1" << charCard[_num - 1] << (char)_suit << vertivalLine << endl;
	else
		cout << vertivalLine << setfill(' ') << setw(filler) << charCard[_num - 1] << (char)_suit << vertivalLine << endl;
	cout << downLeftCorner << setfill(horizontalLine) << setw(8) << downRightCorner << endl;            //нижняя линия

}

int main()
{
	int suit, num;                               //масть и номер карты
	while (1)                                
	{
		system("cls");
		cout << "Please enter suit\n1 - Hearts\n2 - Diamonds\n3 - Clubs\n4 - Spades" << endl;
		cin >> suit;                              //получение масти
		if (suit < 1 || suit > 4)
		{
			cout << "ERROR: Incorrect suit\n";
			system("pause");
			exit(1);
		}
		system("cls");
		cout << "Enter card\n1 - Ace \n2 - Two\n3 - Three\n4 - Four\n5 - Five\n6 - Six\n7 - Seven\n8 - Eight\n9 - Nine\n10 - Ten\n11 - Jacket\n12 - Quin\n13 - King" << endl;
		cin >> num;                               //получение номера
		if (num < 1 || num > 13)
		{
			cout << "ERROR: Incorrect card\n";
			system("pause");
			exit(2);
		}
		showCard(suit, num);                            

		system("pause");                             //пауза перед повтором цикла
	}
	return 0;
}


