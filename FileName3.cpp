#include <iostream>
using namespace std;
int main() {
    double a, b, c, perimeter;
    cout << "���������������ߣ��ÿո�ָ���: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        perimeter = a + b + c;
        if (a == b || b == c || a == c) {
            cout << "����һ������������" << endl;
        }
        else {
            cout << "�ⲻ��һ�����������Ρ�" << endl;
        }
        cout << "�����ε��ܳ���: " << perimeter << endl;
    }
    else {
        cout << "�������߲��ܹ���һ��������" << endl;
    }
    return 0;
}