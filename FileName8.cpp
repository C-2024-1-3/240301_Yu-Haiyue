#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, x0, x1; 
    cout << "������һ���Ǹ�ʵ��a: ";
    cin >> a;

    if (a < 0) {
        cout << "���󣺲��ܼ��㸺����ƽ����" << endl;
        return 1; 
    }
    x0 = (a > 1) ? a / 2.0 : 1.0;

    if(a>0){
    while (true) {
        x1 = 0.5 * (x0 + a / x0); 
        if (fabs(x1 - x0) < 1e-5) { break; }
        x0 = x1; 
    }
    cout << "a��ƽ����ԼΪ: " << x1 << endl;
}
    if (a==0)
        cout << "a��ƽ����Ϊ: 0" << endl;
    return 0;
}