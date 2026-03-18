#include <iostream>
#include <utility>
#include <map>
#include <string>
using namespace std;

int main() {    
    map<string,int> m;  // initialization: map<key_type, value_type> map_variable;
    map<string,int>::iterator it;            
    m.insert(make_pair("hello",9));
    m["world"] = 5;
    cout << m["world"] << endl; //output 5
    it = m.find("hello");
    m.erase(it);        //remove key-value pair with key="hello"     
    return 0;
}