#include <iostream>
#include <cctype> 
using namespace std;

int main() {
    char ch;
   cout << "������һ���ַ�: ";
   cin >> ch;
  
    if (std::islower(ch)) {
    char upperCh = ch -'a' + 'A'; 
        cout << "ת������ַ�: " << upperCh <<endl;
    }
    else {     
        cout << "����ַ�: " <<ch++ << ", ASCII��ֵ: " << static_cast<int>(ch++) <<endl;
    }

    return 0;
}