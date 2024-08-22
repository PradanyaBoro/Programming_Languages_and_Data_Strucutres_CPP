#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";
    
    // Removing two characters starting at position 3
    str.erase(3, 2);

    cout << str << endl;

    return 0;
}

