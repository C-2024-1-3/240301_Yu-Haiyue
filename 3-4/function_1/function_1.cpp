#include <iostream>
using namespace std;
int divisor(int& m, int& n);
int multiple(int m, int n, int &divisors);

int main() {
    int m, n;
    cout << "请输入两个整数: ";
    cin >> m >> n;
    int divisors = divisor(m,n);
    int multiples = multiple(m, n, divisors);
    cout << "最大公约数 是: " << divisors << endl;
    cout << "最小公倍数 是: " << multiples << endl;
    return 0;
}

int divisor(int& m, int& n) {
    int a = n;
    int b = m;
    while (a != 0)
    {
        int temp = a;
        a = b % a;
        b = temp;
    }
    return b;
}
int multiple(int m, int n, int &divisors)
{
    return (m * n) / divisors;
}