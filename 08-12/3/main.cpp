#include <iostream>
using namespace std;

void stepForward(int* i) {
    (*i)++;
}

void stepBackward(int* i) {
    (*i)--;
}

int countElements(int arr[], int startPosition, void (*stepFunction)(int*)) {
    int count = 0;

    while (arr[startPosition] != 0) {
        count++;
        stepFunction(&startPosition); 
    }

    return count;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int arr[] = { 0, 2, 3, 1, 4, 5, 0 };
    int startPosition = 2;

    int countForward = countElements(arr, startPosition, stepForward);
    int countBackward = countElements(arr, startPosition, stepBackward);

    cout << "Количество элементов  (вперед): " << countForward << endl;
    cout << "Количество элементов  (назад): " << countBackward << endl;

    return 0;
}
