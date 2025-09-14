// COMSC-210 | Lab 7: Dynamic Arrays & Functions II | Aidan Woodcock | 2025-09-14
// IDE used: Visual Studio Code
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function prototypes
void reverseArray(string *arr, int size);
void displayArray(string *arr, string *tempArr, int size);

int main() {
    const int size = 5;
    string *dsArr = nullptr;
    dsArr = new string[size];

    cout << "Enter " << size << " strings:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "String " << (i + 1) << ": ";
        getline(cin, dsArr[i]);
    }
    reverseArray(dsArr, size);
    displayArray(dsArr, size);

    delete[] dsArr;

    return 0;
}
// function definitions
void reverseArray(string *arr, int size) {
    string *temp = nullptr;
    temp = new string[size];
    for (int i = 0; i < size; i++) {
        temp[i] = arr[size - 1 - i];
    }
    arr = temp;
    delete[] temp;
}
void displayArray(string *arr, int size) {
    string *temp = nullptr;
    temp = new string[size];
    temp = arr;
    reverseArray(temp, size);
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << temp[i] << " ";
    }
    cout << endl;
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << temp[i];
    }
    cout << endl;
    delete [] temp;
}