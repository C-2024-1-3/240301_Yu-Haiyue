#include <iostream>
#include <vector>
#include <math.h>

int main() {
    const int numLockers = 100;
    bool lockers[numLockers] = { false }; 

    for (int stu = 1; stu <= numLockers; ++stu) {
        for (int locker = stu - 1; locker < numLockers; locker += stu) {
            lockers[locker] = !lockers[locker];
        }
    }

    std::vector<int> openLockers;
    for (int i = 0; i < numLockers; ++i) {
        if (lockers[i]) {
            openLockers.push_back(i + 1); 
        }
    }

    for (size_t i = 0; i < openLockers.size(); ++i) {
        std::cout << openLockers[i];
        if (i < openLockers.size() - 1) {
            std::cout << " ";
        }
    }

    return 0;
}