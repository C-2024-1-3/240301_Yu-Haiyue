#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double num1, num2;
    char op;
    double result;
    bool Operate = true;

    cout << "请输入第一个数字: ";
    cin >> num1;
    cout << "请输入运算符 (+, -, *, /, %): ";
    cin >> op;
    cout << "请输入第二个数字: ";
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
            cout << "错误:!除数不能为零..." << endl;
        }
        else {
            result = num1 / num2;
        }
        break;
    case '%':
        if (num2 == 0 || static_cast<int>(num1) % static_cast<int>(num2) != fmod(num1, num2)) {
            Operate = false;
            cout << "错误! 取余运算要求两个操作数都是整数，且除数不能为零..." << endl;
        }
        else {
            result = static_cast<int>(num1) % static_cast<int>(num2);
        }
        break;
    default:
        Operate = false;
        cout << "错误: 无效的运算符: " << Operate << endl;
        break;
    }
    if (Operate) {
        cout << "结果是: " << result << endl;
    }
    return 0;}