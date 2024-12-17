
#include <iostream>
using namespace std;

class RectangularPrism {
private:
    double length; 
    double width;  
    double height; 

public:
    // 输入
    void inputData() {
        cout << "请输入长方柱的长: ";
        cin >> length;
        cout << "请输入长方柱的宽: ";
        cin >> width;
        cout << "请输入长方柱的高: ";
        cin >> height;
    }

    double calculateVolume() const {
        return length * width * height;
    }
    void outputVolume() const {
        cout << "长方柱的体积是: " << calculateVolume() << endl;
    }
};

int main() {
    RectangularPrism prism1, prism2, prism3; // 三个对象

    // 输入
    cout << "输入第一个长方柱的数据:" << endl;
    prism1.inputData();

    cout << "输入第二个长方柱的数据:" << endl;
    prism2.inputData();

    cout << "输入第三个长方柱的数据:" << endl;
    prism3.inputData();


    // 输出
    cout << "第一个长方柱的体积:" << endl;
    prism1.outputVolume();

    cout << "第二个长方柱的体积:" << endl;
    prism2.outputVolume();

    cout << "第三个长方柱的体积:" << endl;
    prism3.outputVolume();

    return 0;
}
