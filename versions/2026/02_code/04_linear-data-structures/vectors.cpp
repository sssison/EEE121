#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> myVector;

    // Inserting data into the vector
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    // Accessing data from the vector
    cout << "Element at index 0: " << myVector[0] << endl;
    cout << "Element at index 1: " << myVector[1] << endl;
    cout << "Element at index 2: " << myVector[2] << endl;

    // Resizing the vector
    myVector.resize(5); // Resizes the vector to hold 5 elements (new elements are initialized to 0)
    cout << "After resizing the vector to 5 elements:" << endl;
    for (int i = 0; i < myVector.size(); i++) {
        cout << "Element at index " << i << ": " << myVector[i] << endl;
    }

    // Deleting data from the vector
    myVector.pop_back(); // Removes the last element (30)

    cout << "After deleting the last element:" << endl;
    cout << "Element at index 0: " << myVector[0] << endl;
    cout << "Element at index 1: " << myVector[1] << endl;

    // Clearing the vector
    myVector.clear();
    cout << "After clearing the vector, size: " << myVector.size() << endl;

    return 0;
}