
#include <iostream>
using namespace std;

class RectangularPrism {
private:
    double length; 
    double width;  
    double height; 

public:
    // ����
    void inputData() {
        cout << "�����볤�����ĳ�: ";
        cin >> length;
        cout << "�����볤�����Ŀ�: ";
        cin >> width;
        cout << "�����볤�����ĸ�: ";
        cin >> height;
    }

    double calculateVolume() const {
        return length * width * height;
    }
    void outputVolume() const {
        cout << "�������������: " << calculateVolume() << endl;
    }
};

int main() {
    RectangularPrism prism1, prism2, prism3; // ��������

    // ����
    cout << "�����һ��������������:" << endl;
    prism1.inputData();

    cout << "����ڶ���������������:" << endl;
    prism2.inputData();

    cout << "���������������������:" << endl;
    prism3.inputData();


    // ���
    cout << "��һ�������������:" << endl;
    prism1.outputVolume();

    cout << "�ڶ��������������:" << endl;
    prism2.outputVolume();

    cout << "�����������������:" << endl;
    prism3.outputVolume();

    return 0;
}
