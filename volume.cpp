#include <iostream>
using namespace std;
const double PI = 3.1415926;

int main() {
    double r, h, v;

    cout << "������Բ׶�ĵ���뾶: ";
    cin >> r;
    cout << "������Բ׶�ĸ߶�: ";
    cin >> h;

   
    v = (1.0 / 3.0) * PI * r * r * h;

    cout << "Բ׶�������: " << v << endl;
    return 0;
}