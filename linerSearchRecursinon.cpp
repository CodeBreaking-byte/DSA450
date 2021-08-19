#include <iostream>
using namespace std;

int linearSearch(int*, int, int, int);   

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 1;
    int index = 0;
    cout << linearSearch(arr, index, size, key);
    return 0;
}

int linearSearch(int arr[], int index, int size, int key) {
       if (key == arr[index]) {
            return index;
        }
        if(index < size) {
            index++;
            return linearSearch(arr, index, size, key);
        }
    return -1;
}