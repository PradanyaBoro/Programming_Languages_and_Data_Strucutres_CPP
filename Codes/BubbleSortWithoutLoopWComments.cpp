/*-----Bubble Sort without loop------*/

#include<iostream> // Includes the input/output stream library
using namespace std; // Uses the standard namespace

// Function to input an array recursively
void inputArray(int arr[], int n, int i)
{
	if(i < n) // If the current index is less than the array length
	{
		cin >> arr[i]; // Inputs an element into the array at index i
		inputArray(arr, n, i + 1); // Recursively calls the function with the next index
	}
}

// Function to print an array recursively
void printArray(int arr[], int n, int i)
{
	if(i < n) // If the current index is less than the array length
	{
		cout << arr[i] << " "; // Prints the element at index i followed by a space
		printArray(arr, n, i + 1); // Recursively calls the function with the next index
	}
}

// Function to swap two elements in the array
void swap(int arr[], int i, int j)
{
	int temp = arr[i]; // Stores the value at index i in a temporary variable
	arr[i] = arr[j]; // Replaces the value at index i with the value at index j
	arr[j] = temp; // Replaces the value at index j with the value stored in the temporary variable
}

// Function to compare and swap elements within the array
void bubbleCompare(int arr[], int n, int i, int j)
{
	if(j < n - i - 1) // If the current comparison index is less than the remaining unsorted portion of the array
	{
		if(arr[j] > arr[j + 1]) // If the current element is greater than the next element
		{
			swap(arr, j, j + 1); // Swaps the elements
		}
		bubbleCompare(arr, n, i, j + 1); // Recursively calls the function with the next comparison index
	}
}

// Function to perform the bubble sort recursively
void bubbleSort(int arr[], int n, int i)
{
	if(i < n - 1) // If the current pass index is less than the total number of passes needed
	{
		bubbleCompare(arr, n, i, 0); // Calls the comparison function to sort elements
		bubbleSort(arr, n, i + 1); // Recursively calls the function for the next pass
	}
}

int main()
{
	int n; // Declares a variable to store the length of the array
	cout << "Enter the length: \n"; // Prompts the user to enter the array length
	cin >> n; // Reads the array length from the user

	int arr[n]; // Declares an array of the specified length
	cout << "Enter the elements: \n"; // Prompts the user to enter the elements
	inputArray(arr, n, 0); // Calls the input function to fill the array

	bubbleSort(arr, n, 0); // Calls the sorting function to sort the array

	cout << "Sorted array is: \n"; // Displays a message indicating the sorted array is being printed
	printArray(arr, n, 0); // Calls the print function to display the sorted array

	return 0; // Returns 0 to indicate successful execution
}

