#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function template for minimum
template <typename T>
T getMin(T a, T b) {
    return (a < b) ? a : b;
}

// Class template for Pair
template <typename T>
class Pair {
    private:
        T first;
        T second;
    public:
        Pair<T>(T f, T s) : first(f), second(s) {
            this->first = f;    // redundant but illustrative
            this->second = s;   // this-> is a pointer to the current instance of the class
        }
        void show_pair();
        Pair<T> operator+(Pair B);
};

// Method definition for class template
template <typename T>
void Pair<T>::show_pair() {
    cout << "First: " << this->first << ", Second: " << this->second << endl;
}

// Operator overloading for a template class
template<typename T>
Pair<T> Pair<T>::operator+(Pair b) {
    return Pair(this -> first + b.first,
                this -> second + b.second);
}

int main(){
    // Using function template
    int int1 = 10, int2 = 20;
    cout << "Minimum of " << int1 << " and " << int2 << " is " << getMin(int1, int2) << endl;
    double double1 = 10.5, double2 = 20.3;
    cout << "Minimum of " << double1 << " and " << double2 << " is " << getMin(double1, double2) << endl;

    // Using class template
    Pair<int> intPair(1, 2);
    intPair.show_pair();

    Pair<string> stringPair("Hello", "World");
    stringPair.show_pair();


    // Using operator overloading
    Pair<int> pair1(3, 4);
    Pair<int> pair2(5, 6);
    Pair<int> pairSum = pair1 + pair2;
    pairSum.show_pair();

    Pair<string> strPair1("Good", "Morning");
    Pair<string> strPair2("Everyone", "!");
    Pair<string> strPairSum = strPair1 + strPair2;
    strPairSum.show_pair();


}