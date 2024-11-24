
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
    cout << "��������������: ";
    cin >> num1 >> num2;
    int gcdf = gcd(num1, num2);
    int lcmf = lcm(num1, num2, gcdf);
    cout << "���Լ�� ��: " << gcdf << endl;
    cout << "��С������ ��: " << lcmf << endl;
    return 0;
}