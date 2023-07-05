
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	while (true)
	{
		int noise;
		cout << "\nВведите уровень шума в децибелах или 0 для выхода: ";
		cin >> noise;

		if (noise == 0)
		{
			return 0;
		}
		else if (noise < 40)
		{
			cout << "Уровень шума ниже минимального." << endl;
		}
		else if (noise == 40)
		{
			cout << "Уровень соответствует \"Тихой комнате\"." << endl;
		}
		else if (noise > 40 && noise < 70)
		{
			cout << "Уровень шума между \"Тихой комнатой\" и \"Будильником\"" << endl;
		}
		else if (noise == 70)
		{
			cout << "Уровень соответствует \"Будильник.\"" << endl;
		}
		else if (noise > 70 && noise < 106)
		{
			cout << "Уровень шума между \"Будильником\" и \"Газовой газонокосилкой\"." << endl;
		}
		else if (noise == 106)
		{
			cout << "Уровень соответствует \"Газовой газонокосилке\"." << endl;
		}
		else if (noise >= 106 && noise < 130)
		{
			cout << "Уровень шума между \"Газовой газонокосилкой\" и \"Отбойным молотком\"." << endl;
		}
		else if (noise == 130)
		{
			cout << "Уровень соответствует \"Отбойный молоток\"." << endl;
		}
		else
		{
			cout << "Уровень шума больше максимального" << endl;
		}
	}

}
