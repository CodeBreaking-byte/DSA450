#include <iostream>
using namespace std;

int binary_search(int*, int, int, int);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size;
    size = sizeof(arr) / sizeof(arr[0]);
    int low = 0;
    int high = size;
    int key = 8;
    int index = binary_search(arr, low, high, key);
    cout << "Element Found at index number: " << index + 1 << endl;
    return 0;
}

int binary_search(int arr[], int low, int high, int key) {
    
    while (low <= high) {
        //calculate mid index
        int mid = (low + high) / 2;

        //check if element found at mid
        if (key == arr[mid]) {
            return mid;
       
        }
        //check greater and smaller value and iterate one side only
        // keep breaking the array
        else {
            if (key < arr[mid]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
            
    }
    return -1;
}