#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, x0, x1; 
    cout << "请输入一个非负实数a: ";
    cin >> a;

    if (a < 0) {
        cout << "错误：不能计算负数的平方根" << endl;
        return 1; 
    }
    x0 = (a > 1) ? a / 2.0 : 1.0;

    if(a>0){
    while (true) {
        x1 = 0.5 * (x0 + a / x0); 
        if (fabs(x1 - x0) < 1e-5) { break; }
        x0 = x1; 
    }
    cout << "a的平方根约为: " << x1 << endl;
}
    if (a==0)
        cout << "a的平方根为: 0" << endl;
    return 0;
}