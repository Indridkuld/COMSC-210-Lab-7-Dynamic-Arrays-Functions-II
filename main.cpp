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
    dsArr = new string[size]{"Janet", "Jeffe", "Jin", "Joe", "Junio"};    

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
    string *start = arr;
    string *end = arr + size -1;
    while (start < end) {
        swap(*start, *end);
        start++;
        end--;
    }
}
void displayArray(string *arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + 1) << " ";
    }
}