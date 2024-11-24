#include <iostream>
using namespace std;
int main() {
    double a, b, c, perimeter;
    cout << "输入三角形三条边（用空格分隔）: ";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        perimeter = a + b + c;
        if (a == b || b == c || a == c) {
            cout << "这是一个等腰三角形" << endl;
        }
        else {
            cout << "这不是一个等腰三角形。" << endl;
        }
        cout << "三角形的周长是: " << perimeter << endl;
    }
    else {
        cout << "这三条边不能构成一个三角形" << endl;
    }
    return 0;
}