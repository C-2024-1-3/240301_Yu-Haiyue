#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double num1, num2;
    char op;
    double result;
    bool Operate = true;

    cout << "�������һ������: ";
    cin >> num1;
    cout << "����������� (+, -, *, /, %): ";
    cin >> op;
    cout << "������ڶ�������: ";
    cin >> num2;

    switch (op) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0) {
            Operate = false;
            cout << "����:!��������Ϊ��..." << endl;
        }
        else {
            result = num1 / num2;
        }
        break;
    case '%':
        if (num2 == 0 || static_cast<int>(num1) % static_cast<int>(num2) != fmod(num1, num2)) {
            Operate = false;
            cout << "����! ȡ������Ҫ�����������������������ҳ�������Ϊ��..." << endl;
        }
        else {
            result = static_cast<int>(num1) % static_cast<int>(num2);
        }
        break;
    default:
        Operate = false;
        cout << "����: ��Ч�������: " << Operate << endl;
        break;
    }
    if (Operate) {
        cout << "�����: " << result << endl;
    }
    return 0;}