#include <iostream>
using namespace std;

int cubeByValue( int n ){
    n = n * n * n; // cube local variable n and return result
    return n;
}

void cubeByRef( int *n ){
    *n = (*n)*(*n)*(*n); // cube value pointed by pointer n
}


int main() {

    cout << "=== Pointers in C++ ===" << endl;
    int var = 67;          // Declare an integer variable
    int* ptr = &var;      // Declare a pointer and assign it the address of var

    cout << "Value of var: " << var << endl;               // Output the value of var
    cout << "Address of var: " << &var << endl;            // Output the address of var
    cout << "Value of ptr (address of var): " << ptr << endl; // Output the value of ptr (address of var)
    cout << "Value pointed to by ptr: " << *ptr << endl;   // Output the value pointed to by ptr
    cout << "Size of ptr: " << sizeof(ptr) << " bytes" << endl; // Output the size of the pointer
    cout << "Size of var: " << sizeof(var) << " bytes" << endl;   // Output the size of the variable

    // Error demonstration (uncommenting the next line will cause a compilation error)
    // int* invalidPtr = var; // Invalid: cannot assign an integer value to a pointer

    cout << "\n === Pointers with Arrays ===" << endl;
    int arr[5] = {10, 20, 30, 40, 50}; // Declare and initialize an array
    int* arrPtr = arr;                 // Pointer to the first element of the array

    // Print arr and arrPtr
    cout << "Printing arr: " << arr << endl;
    cout << "Printing arrPtr: " << arrPtr << endl;

    // Verify type of arrPtr
    cout << "Type of arr: " << typeid(arr).name() << endl;          // A5_i = array of 5 integers
    cout << "Type of arrPtr: " << typeid(arrPtr).name() << endl;    // Pi = pointer to integer
    // Verify size of arrPtr and arr
    cout << "Size of arr: " << sizeof(arr) << " bytes" << endl;
    cout << "Size of arrPtr: " << sizeof(arrPtr) << " bytes" << endl;

    cout << "Array elements using pointer arithmetic:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << *(arrPtr + i) << " "; // Access array elements using pointer arithmetic
    }
    cout << endl;

    // Pass by value vs pass by reference using pointers
    cout << "\n=== Pass by Value vs Pass by Reference ===" << endl;
    int num = 10;
    int temp = 0;
    cout << "Before pass by value: num = " << num << endl;
    // Pass by value
    temp = cubeByValue(num);

    cout << "After pass by value: num = " << num << endl;
    cout << "Before pass by reference: num = " << num << endl;
    // Pass by reference using pointer
    cubeByRef(&num);
    cout << "After pass by reference: num = " << num << endl;

    return 0;
}