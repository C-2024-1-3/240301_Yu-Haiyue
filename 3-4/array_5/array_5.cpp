#include <iostream>
#include <string>
using namespace std;


size_t indexOf(const string& s1, const string& s2) {
    return s2.find(s1);
}

int main() {
    string s1, s2;

    cout << "请输入第一个字符串（子串）: ";
    getline(cin, s1);
    cout << "请输入第二个字符串（母串）: ";
    getline(cin, s2);

    size_t index = indexOf(s1, s2);
    if (index != string::npos) {
        cout << "字符串 \"" << s1 << "\" 在字符串 \"" << s2 << "\" 中的起始位置是: " << index << endl;
    }
    else {
        cout << "字符串 \"" << s1 << "\" 不是字符串 \"" << s2 << "\" 的子串。" << endl;
    }

    return 0;
}