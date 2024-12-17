#include <iostream>
using namespace std;

class Point {
private:
    int x; 
    int y; 

public:
    Point() : x(60), y(80) {}
    
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }

    void display(){
        cout << "����ֵ: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p;

    cout << "��ʼ����ֵ:" << endl;
    p.display();

    int i = 10, j = 20;
    p.setPoint(i, j);

    cout << "�޸ĺ������ֵ:" << endl;
    p.display();

    return 0;
}