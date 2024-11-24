#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double f, c;

    cout << "请输入华氏温度: ";
    cin >> f;

    c = (f - 32) * 5.0 / 9.0;

  cout << std::fixed << setprecision(2);

   cout << "对应的摄氏温度是: " << c << std::endl;

    return 0;
}