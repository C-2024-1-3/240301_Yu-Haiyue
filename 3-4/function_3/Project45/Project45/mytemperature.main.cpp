#include <iostream>
#include "mytemperature.h"
using namespace std;

int main() {
    double cel_in, fah_in;
    cout << "输入一个摄氏度";
    cin >> cel_in;
    cout << "输入一个华氏度";
    cin >> fah_in;
    cout << "摄氏度转化为华氏度为" << celsius_to_fah(cel_in) << endl;
    cout << "华氏度转化为摄氏度为: " << fahrenheit_to_cels(fah_in) << endl;

    return 0;
}