#include <iostream>
#include <cmath>
bool is_prime(int num);

int main() {
    const int count = 200;
    int primes[count];
    int index = 0; 
    int num = 2;

    while (index < count) {
        if (is_prime(num)) {
            primes[index++] = num; 
            std::cout << num;
            if(num>=199)
            {
              break;
            }
            if ((index % 10 == 0) || (index == count)) {
                std::cout << std::endl; 
            }
            else {
                std::cout << "\t"; 
            }
        }
        num++;
    }

    return 0;
}

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) { 
        if (num % i == 0) return false;
    }
    return true;
}