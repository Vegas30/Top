#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");


	int nominal;
	while (true)
	{
		cout << "Выход: 0\n";
		cout << "Введите номинал банкноты: ";
		cin >> nominal;

		switch (nominal)
		{
		case 1:
			cout << "Джордж Вашингтон\n";
			break;
		case 2:
			cout << "Томас Джефферсон\n";
			break;
		case 5:
			cout << "Авраам Линкольн\n";
			break;
		case 10:
			cout << "Александр Гамильтон\n";
			break;
		case 20:
			cout << "Эндрю Джексон\n";
			break;
		case 50:
			cout << "Улисс Грант\n";
			break;
		case 100:
			cout << "Бенжамин Франклин\n";
			break;
		case 0:
			cout << "Выход\n";
			return 0;
		default:
			cout << "Введеного номинала не существует, повторите попытку. ";
			break;
		}
	}
}
