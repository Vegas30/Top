//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//    ios state(nullptr);
//
//    cout << "The answer in decimal is: " << 42 << endl;
//
//    state.copyfmt(cout); // save current formatting
//    cout //<< "In hex: 0x" // now load up a bunch of formatting modifiers
//       // << hex
//        << uppercase
//        << setw(8)
//        << setfill('0')
//        << 42            // the actual value we wanted to print out
//        << endl;
//    cout.copyfmt(state); // restore previous formatting
//}

//#include <iostream>
//#include <iomanip>
//#include <locale>

//int main() {
//    double smallBottles, largeBottles;
//    const double smallBottlePrice = 0.10;
//    const double largeBottlePrice = 0.25;
//
//    std::cout.imbue(std::locale("en_US.UTF-8"));  // Установка локали для правильного форматирования
//
//    std::cout << "Введите количество бутылок объемом 1 литр и меньше: ";
//    std::cin >> smallBottles;
//
//    std::cout << "Введите количество бутылок больше 1 литра: ";
//    std::cin >> largeBottles;
//
//    double totalAmount = smallBottles * smallBottlePrice + largeBottles * largeBottlePrice;
//
//
//    std::cout << "Сумма, которую можно выручить: " << std::put_money(totalAmount);
//
//    return 0;
//}

//#include <iostream>
//#include <iomanip>
// 
//int main()
//{
//    long double mon = 123.45; // or std::string mon = "123.45";
// 
//    std::cout.imbue(std::locale("en_US.UTF-8"));
//    std::cout << std::showbase
//              << "en_US: " << std::put_money(mon)
//              << " or " << std::put_money(mon, true) << '\n';
// 
//    std::cout.imbue(std::locale("ru_RU.UTF-8"));
//    std::cout << "ru_RU: " << std::put_money(mon)
//              << " or " << std::put_money(mon, true) << '\n';
// 
//    std::cout.imbue(std::locale("ja_JP.UTF-8"));
//    std::cout << "ja_JP: " << std::put_money(mon)
//              << " or " << std::put_money(mon, true) << '\n';
//}

// crt_strcpy.c
// compile with: /W3
// This program uses strcpy
// and strcat to build a phrase.

#include <string.h>
#include <stdio.h>

int main(void)
{
	char string[80];

	// If you change the previous line to
	//   char string[20];
	// strcpy and strcat will happily overrun the string
	// buffer.  See the examples for strncpy and strncat
	// for safer string handling.

	strcpy_s(string, "Hello world from "); // C4996
	// Note: strcpy is deprecated; use strcpy_s instead
	strcat_s(string, "strcpy ");           // C4996
	// Note: strcat is deprecated; use strcat_s instead
	strcat_s(string, "and ");              // C4996
	strcat_s(string, "strcat!");           // C4996
	printf("String = %s\n", string);
}