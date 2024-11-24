
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b, int gcdf) {
    return (a * b) / gcdf;
}

int main() {
    int num1, num2;
    cout << "请输入两个整数: ";
    cin >> num1 >> num2;
    int gcdf = gcd(num1, num2);
    int lcmf = lcm(num1, num2, gcdf);
    cout << "最大公约数 是: " << gcdf << endl;
    cout << "最小公倍数 是: " << lcmf << endl;
    return 0;
}