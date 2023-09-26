#include <iostream>

void fillArray(int* arr, int size, int start, int step) {
    for (int i = 0; i < size; i++) {
        arr[i] = start + i * step;
    }
}

int main() {
    int size = 10;
    int* arr = new int[size];
    fillArray(arr, size, 0, 2);
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}