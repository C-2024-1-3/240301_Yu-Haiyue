//��д��ĳ������£�
#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int sec;

public:
    void input() {
        cout << "������Сʱ: ";
        cin >> hour;
        cout << "���������: ";
        cin >> minute;
        cout << "��������: ";
        cin >> sec;
    }

    void output() {
        if (hour >= 0 && hour <= 24&&minute >= 0 && minute <= 24&& sec >= 0 && sec <= 24) {
            cout << hour << "��" << minute << "��" << sec << endl; }
        else
        {
            cout << "�������ʱ�䲻�淶������������" << endl;
       
        }
    }
   
};

int main() {
    Time t1;
    t1.input();
    t1.output();
    return 0;
}
