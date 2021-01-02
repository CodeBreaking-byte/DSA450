#include <iostream>
using namespace std;

// driver code

int main() {
    int size;
    cout << "Input size : " << endl;
    cin >> size;
    int arr[size];
    cout << "Input Element : " << endl;

// taking input from user

    for (int i = 0; i < size; i++) {
            cin >> arr[i];
    }
    //comparison to find smallest value  
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }

 //comparison to find largest value
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    //print the lasgest and smallest value
    cout << "Lasgest = " << max << endl << "Smallest = " << min << endl;
    return 0;
}