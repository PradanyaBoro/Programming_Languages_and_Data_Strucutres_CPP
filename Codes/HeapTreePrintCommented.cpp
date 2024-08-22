#include <iostream>
#include <cmath>
using namespace std;

// Function to swap two elements in the array
void swap(int arr[], int n, int i)
{
	int temp = arr[n];
	arr[n] = arr[i];
	arr[i] = temp;
}

// Function to maintain the heap property of the tree
void heapify(int arr[], int n, int i)
{
	int l_c = 2 * i + 1; // Left child index
	int r_c = 2 * i + 2; // Right child index
	int large = i;       // Initialize the largest as the current node

	// Compare with left child
	if (l_c < n && arr[l_c] < arr[large])
	{
		large = l_c;
	}

	// Compare with right child
	if (r_c < n && arr[r_c] < arr[large])
	{
		large = r_c;
	}

	// If the largest is not the current node, swap and recursively heapify
	if (large != i)
	{
		swap(arr, i, large);
		heapify(arr, n, large);
	}
}

// Function to build a min-heap from an array
void build_heap(int arr[], int n)
{
	for (int i = (n - 1) / 2; i >= 0; i--)
	{
		heapify(arr, n, i);
	}
}

// Function to calculate the height of the heap tree
int height(int arr[], int n)
{
	int i = 0;
	int height = 0;

	while (i < n)
	{
		height++;
		i = 2 * i + 1;
	}

	return height;
}

// Function to print the heap tree in a "nice" way
void heapTree(int arr[], int n)
{
	int h = height(arr, n);    // Calculate the height of the tree
	int blocks = pow(2, h);     // Calculate the total number of blocks
	int temp_blocks = blocks;   // Temporary variable to keep track of blocks
	int index = 0;
	int k = 3;

	// Loop through each level of the tree
	for (int i = 0; i < h; i++)
	{
		// Loop through each block at the current level
		for (int j = 0; j < blocks; j++)
		{
			if (j == temp_blocks / 2 && index < n)
			{
				cout << arr[index]; // Print the element
				index++;
			}
			else
			{
				if (j == (temp_blocks * k) / 2 && index < n)
				{
					cout << arr[index]; // Print the element
					index++;
					k += 2;
				}
				else
				{
					cout << " "; // Print a space
				}
			}
		}
		cout << "\n"; // Move to the next line for the next level
		temp_blocks = temp_blocks / 2;
		k = 3;
	}
}

int main()
{
	int n;
	cout << "Enter the length:\n";
	cin >> n;

	int arr[n];
	cout << "Enter elements: \n";

	// Read elements from the user
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	build_heap(arr, n); // Build a min-heap from the array
	heapTree(arr, n);   // Print the heap tree in a "nice" way

	return 0;
}

