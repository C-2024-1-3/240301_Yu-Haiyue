#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double f, c;

    cout << "�����뻪���¶�: ";
    cin >> f;

    c = (f - 32) * 5.0 / 9.0;

  cout << std::fixed << setprecision(2);

   cout << "��Ӧ�������¶���: " << c << std::endl;

    return 0;
}