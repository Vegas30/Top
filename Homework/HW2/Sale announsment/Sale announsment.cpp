
#include <iostream>
#include <format>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	string sentence1, sentence2, tel;
	sentence1 = "Продам щенков.";
	sentence2 = "Порода: Ротвейлер";
	tel = "222-22-22";

	cout << format(" {:^7}\n", string(31, '_'));
	cout << format("|{:^31}|\n", sentence1);
	cout << format("|{:^31}|\n", sentence2);
	cout << format("|{:^31}|\n", tel);
	cout << format("|{:^7}|\n", string(31, '_'));

	cout << format("|{:^7}|{:^7}|{:^7}|{:^7}|\n", " ", " ", " ", " ");
	cout << format("|{:^7}|{:^7}|{:^7}|{:^7}|\n", 222, 222, 222, 222);
	cout << format("|{:^7}|{:^7}|{:^7}|{:^7}|\n", -22, -22, -22, -22);
	cout << format("|{:^7}|{:^7}|{:^7}|{:^7}|\n", -22, -22, -22, -22);
	cout << format("|{:^7}|{:^7}|{:^7}|{:^7}|\n", string(7, '_'), string(7, '_'), string(7, '_'), string(7, '_'));
	return 0;
}

