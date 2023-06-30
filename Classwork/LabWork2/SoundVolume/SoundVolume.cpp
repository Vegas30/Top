
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	
	int noise;
	cout << "Введите уровень шума в децибелах: ";
	cin >> noise;

	if (noise < 40)
	{
		cout << "Уровень шума ниже минимального." << endl;
	}
	else if (noise == 40)
	{
		cout << "Уровень соответствует \"Тихой комнате.\"" << endl;
	}
	else if (noise == 70)
	{
		cout << "Уровень соответствует \"Будильник.\"" << endl;
	}


}
