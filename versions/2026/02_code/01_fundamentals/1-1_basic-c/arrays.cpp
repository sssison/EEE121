#include <iostream>
#include <string>
using namespace std;

int main(){

    // Demonstrating arrays in C++
    const int size = 5;
    int numbers[size] = {10, 20, 30, 40, 50};

    cout << "Array Elements:" << endl;
    for(int i = 0; i < size; i++){
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    // Modifying an array element
    numbers[2] = 100;
    cout << "\nAfter modifying the element at index 2:" << endl;
    for(int i = 0; i < size; i++){
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    // Exceeding array bounds (undefined behavior)
    //cout << "\nAccessing out-of-bounds index (undefined behavior):" << endl;
    //cout << "Element at index 10: " << numbers[10] << endl;

    // Multi-dimensional array
    const int rows = 2;
    const int cols = 3;
    int matrix[rows][cols] = { {1, 2, 3}, {4, 5, 6} };
    cout << "\nMulti-dimensional Array Elements:" << endl;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << "Element at (" << i << "," << j << "): " << matrix[i][j] << endl;
        }
    }

    // String as a character array
    char str[] = "C++";
    cout << "\nString as Character Array: " << str << endl;

    // String as an object
    string cppStr = "C++";
    cout << "String as C++ Object: " << cppStr << endl;

    // String operations
    cout << "Length of C++ String: " << cppStr.length() << endl;
    cppStr += " is fun!";
    cout << "After concatenation: " << cppStr << endl;

    return 0;

}