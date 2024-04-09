#include <iostream>
#include <string>
using namespace std;

// Function to concatenate two strings
string add(string str1, string str2) {
    return str1 + str2;
}

// Function to add two numbers
int add(int num1, int num2) {
    return num1 + num2;
}

int main() {
    // Concatenating strings
    string result_string = add("Hello,", "world!");
    cout << "Concatenated string: " << result_string << std::endl;

    // Adding numbers
    int result_int = add(5, 7);
    cout << "Sum of numbers: " << result_int << std::endl;

    return 0;
}
