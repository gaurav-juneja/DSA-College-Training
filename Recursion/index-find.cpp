#include <iostream>
using namespace std;

int largest(int arr[], int &maxIndex, int index, int n) {
    if (index == n) {
        return arr[maxIndex];
    }

    if (arr[index] > arr[maxIndex]) {
        maxIndex = index;
    }

    return largest(arr, maxIndex, index + 1, n);
}

int smallest(int arr[], int &minIndex, int index, int n) {
    if (index == n) {
        return arr[minIndex];
    }

    if (arr[index] < arr[minIndex]) {
        minIndex = index;
    }

    return smallest(arr, minIndex, index + 1, n);
}

int main() {
    int arr[] = {30, 25, 40, 27, 9};
    int index = 0;
    int maxIndex = 0;
    int minIndex = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    largest(arr, maxIndex, index, n);
    cout << "Index of the Largest Element is: " << maxIndex << endl;

    smallest(arr, minIndex, index, n);
    cout << "Index of the Smallest Element is: " << minIndex << endl;

    return 0;
}
