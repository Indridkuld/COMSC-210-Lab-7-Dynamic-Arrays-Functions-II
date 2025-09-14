// COMSC-210 | Lab 7: Dynamic Arrays & Functions II | Aidan Woodcock | 2025-09-14
// IDE used: Visual Studio Code
#include <iostream>
#include <string>

using namespace std;

// Function prototypes
string *reverseArray(string *arr, int size);
void displayArray(string *arr, int size);

int main() {
    const int size = 5;
    string *dsArr = nullptr;
    dsArr = new string[size];
    char choice;

    cout << "Would you like to enter string instead of using default? (Y/N): ";

    if(choice == 'Y' || choice == 'y') {
        cout << "Enter 5 names: ";
        for (int i = 0; i < size; i++) {
            cin >> *(dsArr + i);
        }
    } else {
        cout << "Using default names.\n";
        *(dsArr + 0) = "Janet";
        *(dsArr + 1) = "Jeffe";
        *(dsArr + 2) = "Jin";
        *(dsArr + 3) = "Joe";
        *(dsArr + 4) = "Junio";
    }

    cout << "Original array: ";
    displayArray(dsArr, size);

    dsArr = reverseArray(dsArr, size);

    cout << "\nReversed array: ";
    displayArray(dsArr, size);

    delete[] dsArr;
    return 0;
}
// function definitions
string *reverseArray(string *arr, int size) {
    string* start = arr;
    string* end = arr + size - 1;
    while (start < end) {
        swap(*start, *end);
        start++;
        end--;
    }
    return arr;
}
void displayArray(string *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " "; 
    cout << endl;
    }
}