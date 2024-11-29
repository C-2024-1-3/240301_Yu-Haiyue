#include <iostream>
#include <cstring> 

int indexof(const char* s1, const char* s2);

int main() {
    char s1[100], s2[100];

    std::cout << "请输入字符串s1: ";
    std::cin.getline(s1, 100);
    std::cout << "请输入字符串s2: ";
    std::cin.getline(s2, 100);

    int result = indexof(s1, s2);
    if (result != -1) {
        std::cout << "s1是s2的子串，第一次匹配的下标为: " << result << std::endl;
    }
    else {
        std::cout << "s1不是s2的子串" << std::endl;
    }

    return 0;
}

int indexof(const char* s1, const char* s2) {
    const char* pos = strstr(s1, s2);
    return pos ? (pos - s1) : -1;
}