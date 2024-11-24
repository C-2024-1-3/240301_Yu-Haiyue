#include <iostream>
#include <cctype> 
using namespace std;

int main() {
    char ch;
   cout << "请输入一个字符: ";
   cin >> ch;
  
    if (std::islower(ch)) {
    char upperCh = ch -'a' + 'A'; 
        cout << "转换后的字符: " << upperCh <<endl;
    }
    else {     
        cout << "后继字符: " <<ch++ << ", ASCII码值: " << static_cast<int>(ch++) <<endl;
    }

    return 0;
}