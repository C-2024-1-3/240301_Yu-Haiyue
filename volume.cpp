#include <iostream>
using namespace std;
const double PI = 3.1415926;

int main() {
    double r, h, v;

    cout << "请输入圆锥的底面半径: ";
    cin >> r;
    cout << "请输入圆锥的高度: ";
    cin >> h;

   
    v = (1.0 / 3.0) * PI * r * r * h;

    cout << "圆锥的体积是: " << v << endl;
    return 0;
}