#include <iostream>
#include <string>

std::string getOrdinalNumber(int number) {
    switch (number) {
    case 1: return "first";
    case 2: return "second";
    case 3: return "third";
    case 4: return "fourth";
    case 5: return "fifth";
    case 6: return "sixth";
    case 7: return "seventh";
    case 8: return "eighth";
    case 9: return "ninth";
    case 10: return "tenth";
    case 11: return "eleventh";
    case 12: return "twelfth";
    default: return ""; // Empty string if the number is out of range
    }
}

int main() {
    for (int number = 1; number <= 12; ++number) {
        std::string ordinal = getOrdinalNumber(number);

        if (!ordinal.empty()) {
            std::cout << number << " - " << ordinal << std::endl;
        }
    }

    return 0;
}
