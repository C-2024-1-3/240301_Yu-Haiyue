#include <iostream>
#include <cctype> 
#include <cstring> 


void count(const char s[], int counts[]);

int main() {
    const int SIZE = 27; 
    char str[SIZE];
    int counts[27] = { 0 };

    std::cout << "Enter a string:" ;
    std::cin.getline(str, SIZE);


    count(str, counts);

    for (int i = 0; i < 26; ++i) {
        if (counts[i] > 0) {
            std::cout << char('a' + i) << " : " << counts[i] << " times" << std::endl;
        }
    }

    return 0;
}

void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; ++i) { 
        char lower = tolower(static_cast<unsigned char>(s[i])); 
        if (isalpha(static_cast<unsigned char>(lower))) { 
            counts[lower - 'a']++; 
        }
    }
}