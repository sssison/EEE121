#include <iostream>
using namespace std;

int main(){

    // Demonstrating relational operators
    int a = 10, b = 20;
    cout << "Relational Operators:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;
    cout << "\n";

    // Demonstrating logical operators
    bool x = true;
    bool y = false;

    cout << "Logical Operators:" << endl;
    cout << "Logical AND (x && y): " << (x && y) << endl;
    cout << "Logical OR (x || y): " << (x || y) << endl;
    cout << "Logical NOT (!x): " << (!x) << endl;
    cout << "\n";

    // Demonstrating flow control with if-else
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    if (number > 0) {
        cout << number << " is positive." << endl;
    } else if (number < 0) {
        cout << number << " is negative." << endl;
    } else {
        cout << "You entered zero." << endl;
    }
    cout << "\n";

    // Demonstrating switch-case
    int choice;
    cout << "Enter a number between 1 and 3: ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "You selected option 1." << endl;
            break;
        case 2:
            cout << "You selected option 2." << endl;  
            break;
        case 3:
            cout << "You selected option 3." << endl;
            break;
        default:
            cout << "Invalid option selected." << endl;
    }
    
    // Demonstrating loops
    cout << "\nLoops:" << endl;
    
    cout << "\nWhile loop (0 to 4): ";
    int j = 0;
    while (j < 5) {
        cout << j << " ";
        j++;
    }
    cout << "\nDo-While loop (0 to 4): ";

    int k = 0;
    do {
        cout << k << " ";
        k++;
    } while (k < 5);
    cout << "\n";

    cout << "For loop (0 to 4): ";
    for (int i = 0; i < 5; i++) {
        cout << i << " ";
    
    }

}