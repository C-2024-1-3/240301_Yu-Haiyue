#include <iostream>
#include "mytemperature.h"
using namespace std;

int main() {
    double cel_in, fah_in;
    cout << "����һ�����϶�";
    cin >> cel_in;
    cout << "����һ�����϶�";
    cin >> fah_in;
    cout << "���϶�ת��Ϊ���϶�Ϊ" << celsius_to_fah(cel_in) << endl;
    cout << "���϶�ת��Ϊ���϶�Ϊ: " << fahrenheit_to_cels(fah_in) << endl;

    return 0;
}