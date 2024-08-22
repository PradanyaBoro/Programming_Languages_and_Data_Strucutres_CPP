#include<iostream>
using namespace std;

// Function to swap two elements in an array
void swap(int a[], int i, int j)
{
	int temp = a[i];  // Temporarily stores the value at index i
	a[i] = a[j];      // Assigns the value at index j to index i
	a[j] = temp;      // Assigns the temporary value to index j, effectively swapping the elements
}

// Function to maintain the heap property at a given index in the array
void heapify(int a[], int n, int i)
{
	int left_child = 2 * i + 1;  // Calculates the index of the left child
	int right_child = 2 * i + 2; // Calculates the index of the right child
	int large = i;              // Assumes the current element is the largest

	// Checks if the left child exists and is greater than the current largest
	if (left_child < n && a[left_child] > a[large])
	{
		large = left_child;
	}

	// Checks if the right child exists and is greater than the current largest
	if (right_child < n && a[right_child] > a[large])
	{
		large = right_child;
	}

	// If the largest element is not the current element, swaps them and continues heapifying
	if (large != i)
	{
		swap(a, large, i);  // Swaps the largest element with the current element
		heapify(a, n, large); // Recursively heapifies the affected subtree
	}
}

// Function to build a max heap from an array
void buildHeap(int a[], int n)
{
	// Starts from the last non-leaf node and heapifies all nodes
	for (int i = (n/2) - 1; i >= 0; i--)
	{
		heapify(a, n, i); // Heapifies the subtree rooted at index i
	}
}

// Function to perform heap sort on an array
void heapSort(int a[], int n)
{
	buildHeap(a, n); // Builds a max heap from the array

	// Extracts elements from the heap one by one
	for (int i = n - 1; i >= 0; i--)
	{
		swap(a, i, 0);   // Swaps the current element (root of the heap) with the last element
		heapify(a, i, 0); // Heapifies the reduced heap
	}
}

int main()
{
	int n;
	cout << "Enter length:\n";
	cin >> n;  // Reads and stores the length of the array

	int a[n];  // Declares an array of the given length
	cout << "Enter elements:\n";
	for(int j = 0; j < n; j++)
	{
		cin >> a[j];  // Inputs elements into the array
	}

	heapSort(a, n); // Calls heapSort to sort the array using heapsort

	cout << "Sorted array is:\n";
	for(int j = 0; j < n; j++)
	{
		cout << a[j] << " ";  // Prints the sorted array
	}

	return 0;
}

