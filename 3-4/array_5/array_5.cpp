#include <iostream>
#include <string>
using namespace std;


size_t indexOf(const string& s1, const string& s2) {
    return s2.find(s1);
}

int main() {
    string s1, s2;

    cout << "�������һ���ַ������Ӵ���: ";
    getline(cin, s1);
    cout << "������ڶ����ַ�����ĸ����: ";
    getline(cin, s2);

    size_t index = indexOf(s1, s2);
    if (index != string::npos) {
        cout << "�ַ��� \"" << s1 << "\" ���ַ��� \"" << s2 << "\" �е���ʼλ����: " << index << endl;
    }
    else {
        cout << "�ַ��� \"" << s1 << "\" �����ַ��� \"" << s2 << "\" ���Ӵ���" << endl;
    }

    return 0;
}