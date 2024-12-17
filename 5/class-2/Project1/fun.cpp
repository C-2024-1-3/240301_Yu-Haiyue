#include <iostream>
#include "student.h"

void Student::display() {
    std::cout << "num£º" << num << std::endl;
    std::cout << "name£º" << name << std::endl;
    std::cout << "sex£º" << sex << std::endl;
}

void Student::set_value(int n, const char* nm, char s) {
    num = n;
    strncpy(name, nm, sizeof(name) - 1); 
    name[sizeof(name) - 1] = '\0';
    sex = s;
}