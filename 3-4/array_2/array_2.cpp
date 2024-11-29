#include <iostream>
using namespace std;

void bubbleSort(double arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    const int SIZE = 10;
    double numbers[SIZE];

    cout << "Enter " << SIZE << " double numbers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
    }

    bubbleSort(numbers, SIZE);

    cout << "Sorted numbers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}