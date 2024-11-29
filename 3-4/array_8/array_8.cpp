#include <iostream>

int parseHex(const char* const hexString);
int parseHex(const char* const hexString) {
    int decimalValue = 0;
    int length = 0;
    while (hexString[length] != '\0') {
        length++;
    }

    int power = 1; 

    for (int i = length - 1; i >= 0; --i) {
        char ch = hexString[i];
        int digitValue = 0;

        if (ch >= '0' && ch <= '9') {
            digitValue = ch - '0';
        }
        else if (ch >= 'A' && ch <= 'F') {
            digitValue = ch - 'A' + 10;
        }
        else if (ch >= 'a' && ch <= 'f') {
            digitValue = ch - 'a' + 10;
        }

        decimalValue += digitValue * power;
        power *= 16; 
    }

    return decimalValue;
}

int main() {
    const char* hexString = "1A3F"; 
    int decimalValue = parseHex(hexString);
    std::cout << "The decimal value is: " << decimalValue << std::endl;

    return 0;
}