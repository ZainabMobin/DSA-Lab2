#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the initial number of elements: ";
    cin >> n;

    // Dynamically allocate memory for the array
    int* arr = new int[n];

    // Input initial elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Resize the array to a larger size
    int newSize;
    cout << "Enter new size (larger than " << n << "): ";
    cin >> newSize;

    int* newArr = new int[newSize];

    // Copy old elements to new array
    for (int i = 0; i < n; i++) {
        newArr[i] = arr[i];
    }

    // Input additional elements
    cout << "Enter additional elements:\n";
    for (int i = n; i < newSize; i++) {
        cin >> newArr[i];
    }

    // Output all elements
    cout << "All elements after resizing:\n";
    for (int i = 0; i < newSize; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    // Free dynamically allocated memory
    delete[] arr;
    delete[] newArr;

    return 0;
}