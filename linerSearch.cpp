#include <iostream>
using namespace std;

int linearSearch(int*, int, int);   

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 6;
    cout << linearSearch(arr, size, key);
    return 0;
}

int linearSearch(int arr[], int size, int key) {
    for (int index = 0; index < size; index++) {
        if (key == arr[index]) {
            return index;
        }
    }
    return -1;
}