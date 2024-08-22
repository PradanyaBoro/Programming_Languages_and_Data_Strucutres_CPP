#include <iostream>

int main() {
    int arr[4] = {10, 20, 30, 40};
    int length = 4;

    int indexToDelete = 3; // Index of the element to delete

    if (indexToDelete >= 0 && indexToDelete < length) {
        // Delete the element at indexToDelete by shifting elements to the left
        for (int i = indexToDelete; i < length - 1; i++) {
            arr[i] = arr[i + 1];
        }

        // Decrease the length of the array to reflect the removal
        length--;

        // Print the updated array
        for (int i = 0; i < length; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Invalid index for deletion." << std::endl;
    }

    return 0;
}

