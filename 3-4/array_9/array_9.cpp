#include <iostream>
using namespace std;

void sortArray(int* array, int size);

int main() {
    int size;

    cout << "����������Ĵ�С: ";
    cin >> size;

    int* array = new int[size];

    cout << "�����������Ԫ��: ";
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    sortArray(array, size);

    cout << "����������Ԫ��Ϊ: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }

    delete[] array;

    return 0;
}

void sortArray(int* array, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}