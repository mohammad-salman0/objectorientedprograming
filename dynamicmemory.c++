
#include <iostream>

using namespace std;

int main() {
    // Dynamic memory allocation for a single variable
    int* singleVariablePtr = new int(10);
    cout << "Single Variable: " << *singleVariablePtr << endl;

    // Dynamic memory allocation for an array
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int* arrayPtr = new int[size];
    cout << "Enter " << size << " integers for the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arrayPtr[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arrayPtr[i] << " ";
    }
    cout << endl;

    // Deallocate memory
    delete singleVariablePtr;
    delete[] arrayPtr;

    return 0;
}
