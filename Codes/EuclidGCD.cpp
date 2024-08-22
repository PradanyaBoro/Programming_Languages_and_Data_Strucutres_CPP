#include <iostream>

// Function to calculate the GCD of two numbers using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Calculate the GCD
    int result = gcd(num1, num2);

    std::cout << "GCD of " << num1 << " and " << num2 << " is " << result << std::endl;

    return 0;
}
