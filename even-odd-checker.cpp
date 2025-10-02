#include <iostream>
#include <string>
#include <windows.h> // For MessageBox

using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    string result;

    if (number % 2 == 0)
        result = to_string(number) + " is Even.";
    else
        result = to_string(number) + " is Odd.";

    // Show result in a GUI popup
    MessageBoxA(0, result.c_str(), "Even-Odd Checker", MB_OK);

    return 0;
}
