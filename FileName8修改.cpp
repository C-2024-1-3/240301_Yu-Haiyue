#include <iostream>
#include <cmath> // 包含fabs函数用于计算浮点数的绝对值
using namespace std;

int main() {
    double a, x0, x1; // a是输入的数，x0是初始猜测值，x1是迭代后的值
    const double epsilon = 1e-5; // 精度要求，设置为10^-5

    cout << "请输入一个非负实数a: ";
    cin >> a;

    if (a < 0) {
        cout << "错误：不能计算负数的平方根。" << endl;
        return 1; // 返回非零值表示程序异常结束
    }

    // 对于正数a，一个合理的初始猜测值可以是a/2或1
    // 这里我们选择a/2作为初始猜测值（如果a很大，则a/2会更接近真实值）
    // 但为了简单起见，也可以选择1作为初始值，特别是对于较小的a
    x0 = (a > 1) ? a / 2.0 : 1.0;

    // 牛顿迭代法
    while (true) {
        x1 = 0.5 * (x0 + a / x0); // 迭代公式
        // 使用fabs来计算浮点数的绝对值，以确保精度比较的准确性
        if (fabs(x1 - x0) < epsilon) { // 检查精度
            break;
        }
        x0 = x1; // 更新x0为x1，准备下一次迭代
    }

    cout << "a的平方根约为: " << x1 << endl;
    return 0; // 返回0表示程序正常结束
}