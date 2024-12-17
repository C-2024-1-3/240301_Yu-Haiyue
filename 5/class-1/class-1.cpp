//改写后的程序如下：
#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int sec;

public:
    void input() {
        cout << "请输入小时: ";
        cin >> hour;
        cout << "请输入分钟: ";
        cin >> minute;
        cout << "请输入秒: ";
        cin >> sec;
    }

    void output() {
        if (hour >= 0 && hour <= 24&&minute >= 0 && minute <= 24&& sec >= 0 && sec <= 24) {
            cout << hour << "：" << minute << "：" << sec << endl; }
        else
        {
            cout << "你输入的时间不规范，请重新输入" << endl;
       
        }
    }
   
};

int main() {
    Time t1;
    t1.input();
    t1.output();
    return 0;
}
