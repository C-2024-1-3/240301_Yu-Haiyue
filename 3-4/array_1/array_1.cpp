#include <iostream>
using namespace std;

int main() {
    int a[10];
    cout << "Enter ten numbers:";

    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }

    cout << "The distinct numbers are:";
    for (int j = 0; j < 10; j++) {
        bool isUnique = true; 
        for (int l = 0; l < j; l++) { 
            if (a[j] == a[l]) { 
                isUnique = false; 
                break; 
            }
        }
        if (isUnique) {
            cout << a[j] << " ";
        }
    }
    cout << endl;

    return 0;
}