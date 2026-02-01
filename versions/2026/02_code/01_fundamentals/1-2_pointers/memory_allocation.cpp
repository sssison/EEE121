#include <iostream>
using namespace std;

// Demonstrate static and dynamic memory allocation in C++
int main() {
    cout << "=== Static Memory Allocation ===" << endl;
    // Static memory allocation
    int staticVar = 100; // Memory allocated on the stack
    cout << "Static variable value: " << staticVar << endl;
    cout << "Address of static variable: " << &staticVar << endl;
    cout << "Size of static variable: " << sizeof(staticVar) << " bytes" << endl;

    cout << "\n=== Dynamic Memory Allocation ===" << endl;
    // Dynamic memory allocation
    int* dynamicVar = new int; // Memory allocated on the heap
    *dynamicVar = 200;         // Assign value to the dynamically allocated memory
    cout << "Dynamic variable value: " << *dynamicVar << endl;
    cout << "Address of dynamic variable: " << dynamicVar << endl;
    cout << "Size of dynamic variable pointer: " << sizeof(dynamicVar) << " bytes" << endl;

    // Deallocate dynamic memory
    delete dynamicVar;
    dynamicVar = nullptr; // Avoid dangling pointer
    cout << "Dynamic variable memory deallocated." << endl;
    return 0;
}