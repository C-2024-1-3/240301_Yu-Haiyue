#include <iostream>
using namespace std;
int main() {
    double Price = 0.8;
    int Bought = 0;
    int PerDay = 2;
    double Spent = 0;

    for (int day = 1; Bought + PerDay <= 100; ++day) {
        double dailySpend = PerDay * Price;
        cout << "第 " << day << "天花了" << Spent << "元" << endl;
        Bought += PerDay;
       Spent += dailySpend;
       PerDay *= 2;

      
    }


    return 0;
}