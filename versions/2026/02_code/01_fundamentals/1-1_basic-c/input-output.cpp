#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    cout << "You entered: " << number << endl;

    // Convert to double implicitly
    double doubleNumber = number;
    cout << "Converted to double: " << doubleNumber << endl;

    // Enter a character
    char character;
    cout << "Enter a character: ";
    cin >> character;
    cout << "You entered character: " << character << endl;

    // Convert character to integer (ASCII value) implicitly
    int asciiValue = character;
    cout << "ASCII value of '" << character << "': " << asciiValue << endl;

    // Enter two integers and get their divisor in a new double variable
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Implicit division (leads to integer division -> convert to double)
    double divisor = num1/num2;
    cout << "Divisor of " << num1 << " and " << num2 << " is: " << divisor << endl;

    // Correcting the division to ensure double result
    divisor = static_cast<double>(num1) / num2;
    cout << "Corrected divisor of " << num1 << " and " << num2 << " is: " << divisor << endl;

    return 0;
}
