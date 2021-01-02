#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter size of array: " << endl;
    cin >> size ;
    int arr[size];
    cout << "Input Element: " << endl;
    for (int i = 0; i <= size - 1; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
    cout  << "Reverse array: " << endl;
    for (int i = size -1; i >= 0; i--) {
        cout << arr[i] <<"\t";
    }
    return 0;
}
