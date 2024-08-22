#include <iostream>
#include <string>
using namespace std;

int removeAndFindMax(string num, char dig) {
    int maxNumber = stoi(num);  // Initialize maxNumber with the original integer value
    string modified = num;  // Make a copy of the original string

    for (int i = 0; i < num.length(); i++) {
        if (modified[i] == dig) {
            modified.erase(i, 1);  // Remove the digit
            int current = stoi(modified);

            if (current > maxNumber) {
                maxNumber = current;  // Update maxNumber if a larger number is found
            }

            // Restore the modified string to its original state
            modified = num;
            break;  // Break after the first removal to ensure only one removal is considered
        }
    }

    return maxNumber;
}

int main() {
    string num = "1232";
    char dig = '2';

    cout << "After removing " << dig << " from " << num << " new number is " << removeAndFindMax(num, dig);

    return 0;
}

