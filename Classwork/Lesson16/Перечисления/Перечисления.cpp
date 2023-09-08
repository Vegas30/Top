// Перечисления.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>

	using namespace std;

	enum menuItems
	{
		ENTER_DATA = 1,
		OUTPUT_DATA = 2,
		QUIT = 3
	};


	int main()
	{
		int userChoice;
		char userLogin[20] = "admin";

		do {
			cout << "Your choice:\n";
			cout << "1 — enter data (login)\n";
			cout << "2 — output data\n";
			cout << "3 — quit\n";
			cin >> userChoice;
			switch (userChoice) {
			case ENTER_DATA:
			{
				cout << "Please, enter data \n";
				cin >> userLogin;
				break;
			}
			case OUTPUT_DATA:
			{
				cout << "Your login:" << userLogin << "\n";
				break;
			}
			case QUIT:
			{
				cout << "See you!";
				break;
			}
			default:
				cout << "Wrong menu item!";
			}
		} while (userChoice != 3);

		return 0;
	}
