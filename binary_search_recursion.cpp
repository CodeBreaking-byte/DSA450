#include <iostream>
using namespace std;
int binary_search(int*, int, int, int);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = size;
    int key = 55;
    int index = binary_search(arr, low, high, key);
    cout << "index: " << index << endl;
    return 0;
}


int binary_search(int arr[], int low, int high, int key) {
    //if single element 
    if (low == high) {
        //found
        if (key == arr[low]) {
            return low;
        }
        //not found
        else {
            return -1;
        }
    }
    //if more than one element in array
    else {
        int mid = (low + high) / 2;
        // if mid is key element 
        if (key == arr[mid]) {
            return mid;
        } 
        //if key is less than mid element search only first half array
        else if (key < arr[mid]) {
            return binary_search(arr, low, mid - 1, key);
        }
        //if key is not less than mid element search only second half array
        else {
            return binary_search(arr, mid + 1, high, key);
        }
    }
    return -1;
}