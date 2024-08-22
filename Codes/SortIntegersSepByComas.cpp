#include <iostream>   // Includes the necessary header files for input/output.
#include <fstream>    // Includes the file stream header for file operations.
#include <string>     // Includes the string header for string handling.
using namespace std;  // Uses the standard C++ namespace.

void swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int main()
{
	ifstream inputFile("NumbersToSort.txt");  // Opens the input file "NumbersToSort.txt".
	
	string nums;  // Declares a string variable to store input numbers.
	getline(inputFile, nums);  // Reads a line from the file into the 'nums' variable.

	int k = 0;  // Initializes a counter for the array size.
	int sum = 0;  // Initializes a variable to accumulate numbers.
	int arr[50];  // Declares an integer array.

	for(int i = 0; i <= nums.length(); i++)  // Iterates through the characters to process the input, took <= nums.length() to get nums[i] == '\0'
	{
		if(nums[i] != ',' && nums[i] != '\0')  // Checks if the character is not a comma or null terminator.
		{
			sum = sum * 10 + (nums[i] - 48);  // Converts characters to integers and accumulates the sum.
		}
		else
		{
			arr[k] = sum;  // Stores the accumulated sum in the array.
			sum = 0;  // Resets the sum for the next number.
			k++;  // Increments the array index.
		}
	}

	// Performs Selection Sort to sort the numbers.
	for(int i = 0; i < k - 1; i++)
	{
		int min = i;
		for(int j = i + 1; j < k; j++)
		{
			if(arr[j] < arr[min])  // Checks if the current element is smaller.
			{
				min = j;  // Updates the index of the minimum element.
			}
		}
		if(min != i)
		{
			swap(arr, i, min);  // Swaps elements if necessary.
		}
	}
	
	ofstream outputFile("NumbersSorted.txt");  // Opens the output file "NumbersSorted.txt".
	for(int i = 0; i < k; i++)  // Iterates through the sorted array.
	{
		outputFile << arr[i] << endl;  // Writes the sorted numbers to the output file.
	}
	
	return 0;  // Returns 0 to indicate successful program execution.
}

