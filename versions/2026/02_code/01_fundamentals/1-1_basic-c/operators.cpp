#include <iostream>
using namespace std;


int main() {
    
    int a = 10, b = 20;

    cout << "a = " << a << ", b = " << b << endl;
    cout << "\n";

    // Demonstrating basic operators in C++
    cout << "Basic Arithmetic Operators:" << endl;
    cout << "Addition (a + b): " << a + b << endl;
    cout << "Subtraction (b - a): " << b - a << endl;
    cout << "Multiplication (a * b): " << a * b << endl;
    cout << "Division (b / a): " << b / a << endl;
    cout << "Modulus (b % a): " << b % a << endl;
    cout << "\n";

    // Demonstrating bitwise operators in binary format
    // Show the binary of a and b
    cout << "Binary representation of a: " << std::bitset<8>(a) << endl;
    cout << "Binary representation of b: " << std::bitset<8>(b) << endl;
    cout << "\n";
    cout << "Bitwise Operators:" << endl;
    cout << "Bitwise AND (a & b): " << (a & b) << " (binary: " << std::bitset<8>(a & b) << ")" << endl;
    cout << "Bitwise OR (a | b): " << (a | b) << " (binary: " << std::bitset<8>(a | b) << ")" << endl;
    cout << "Bitwise XOR (a ^ b): " << (a ^ b) << " (binary: " << std::bitset<8>(a ^ b) << ")" << endl;
    cout << "Bitwise NOT (~a): " << (~a) << " (binary: " << std::bitset<8>(~a) << ")" << endl;
    cout << "Left Shift (a << 1): " << (a << 1) << " (binary: " << std::bitset<8>(a << 1) << ")" << endl;
    cout << "Right Shift (b >> 1): " << (b >> 1) << " (binary: " << std::bitset<8>(b >> 1) << ")" << endl;
    cout << "\n";

    // Demonstrating increment and decrement operators
    cout << "Increment and Decrement Operators:" << endl;
    cout << "Current Value of a: " << a << endl;
    cout << "Current Value of b: " << b << endl;
    cout << "Pre-increment (++a): " << ++a << endl;
    cout << "Post-increment (b++ or b+=1): " << b++ << endl;
    cout << "Current Value of a: " << a << endl;
    cout << "Current Value of b: " << b << endl;
    cout << "Pre-decrement (--a): " << --a << endl;
    cout << "Post-decrement (b-- or b-=1): " << b-- << endl;
    cout << "Current Value of a: " << a << endl;
    cout << "Current Value of b: " << b << endl;
}
