// COMSC-210 | Lab 7: Dynamic Arrays & Functions II | Aidan Woodcock | 2025-09-14
// IDE used: Visual Studio Code
#include <iostream>
#include <string>

using namespace std;

// Function prototypes
string *reverseArray(string *arr, int size);
void displayArray(string *arr, int size);
// creates dynamic string array, user submits strings or uses default, displays original and reversed array
int main() {
    const int size = 5;
    string *dsArr = nullptr;
    dsArr = new string[size];
    char choice;
    // gave user option to submit own strings or use default sample strings 
    cout << "Would you like to enter string instead of using default? (Y/N): ";
    cin >> choice;
    cin.ignore();
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

    cout << "Reversed array: ";
    displayArray(dsArr, size);

    delete[] dsArr;
    return 0;
}
// function definitions
// reverses the order of elements in a dynamic string array using pointers
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
// displays elements of a dynamic string array using pointers
void displayArray(string *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " "; 
    }
    cout << endl;
}