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

std::string getVerse(int day) {
    std::string verse;
    std::string ordinal = getOrdinalNumber(day);

    verse = "On the " + ordinal + " day of Christmas\n"
        "my true love sent to me:\n";

    // Special case for the first day
    if (day == 1) {
        verse += "A partridge in a pear tree.\n";
    }
    else {
        // Add gifts for subsequent days
        for (int i = day; i >= 2; --i) {
            switch (i) {
            case 2: verse += "Two turtle doves,\n"; break;
            case 3: verse += "Three French hens,\n"; break;
                // Add more cases for other gifts as needed
                // ...
            }
        }
        verse += "And a partridge in a pear tree.\n";
    }

    return verse;
}

int main() {
    for (int day = 1; day <= 12; ++day) {
        std::string verse = getVerse(day);
        std::cout << verse << std::endl;
    }

    return 0;
}
