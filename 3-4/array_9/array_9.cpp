#include <iostream>
using namespace std;

void sortArray(int* array, int size);

int main() {
    int size;

    cout << "请输入数组的大小: ";
    cin >> size;

    int* array = new int[size];

    cout << "请输入数组的元素: ";
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }

    sortArray(array, size);

    cout << "排序后的数组元素为: ";
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