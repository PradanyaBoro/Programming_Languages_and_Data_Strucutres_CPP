#include <iostream>
using namespace std;

/*--------Merge Sort( O(nlogn) for all cases )--------*/

int comparisonCount = 0; // Initialize a counter to count comparisons

// Function to input elements into the array
void inputArray(int arr[], int n)
{
    cout << "Enter the elements of your array: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; // Read and store an element in the array
    }
}

// Function to print the elements of the array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; // Print each element in the array
    }
}

// Function to swap two elements in the array
void swap(int arr[], int i, int j)
{
    int temp = arr[i]; // Store the value of the first element
    arr[i] = arr[j];   // Replace the first element with the second element
    arr[j] = temp;     // Replace the second element with the stored value
}

// Function to merge two sorted subarrays
void merge(int arr[], int left, int mid, int right)
{
    int i = left;              // Initialize the left subarray index
    int j = mid + 1;           // Initialize the right subarray index
    int k = 0;                 // Initialize a temporary array index
    int temparr[right - left + 1]; // Create a temporary array to store merged values

    // Merge the subarrays into the temporary array
    while (i <= mid && j <= right)
    {
        comparisonCount++; // Count this comparison
        if (arr[i] <= arr[j])
        {
            temparr[k] = arr[i]; // Store the smaller element in the temporary array
            k++;
            i++;
        }
        else
        {
            temparr[k] = arr[j]; // Store the smaller element in the temporary array
            k++;
            j++;
        }
    }

    // Copy remaining elements from the left subarray
    if (i > mid)
    {
        while (j <= right)
        {
            temparr[k] = arr[j]; // Copy the remaining element from the right subarray
            j++;
            k++;
        }
    }
    // Copy remaining elements from the right subarray
    else
    {
        while (i <= mid)
        {
            temparr[k] = arr[i]; // Copy the remaining element from the left subarray
            i++;
            k++;
        }
    }

    // Copy the merged elements back into the original array
    for (i = left; i <= right; i++)
    {
        arr[i] = temparr[i - left]; // Copy the merged element back to the original array
    }
}

// Function to perform merge sort
void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = (right + left) / 2; // Calculate the middle index

        mergeSort(arr, left, mid);     // Recursively sort the left subarray
        mergeSort(arr, mid + 1, right); // Recursively sort the right subarray

        merge(arr, left, mid, right);   // Merge the sorted subarrays
    }
}

int main()
{
    int n;
    cout << "Enter the length: \n";
    cin >> n; // Read and store the length of the array

    int arr[n]; // Declare an array of the given length
    inputArray(arr, n); // Call the inputArray function to input elements

    mergeSort(arr, 0, n - 1); // Call mergeSort to sort the array

    cout << "Sorted array is: \n";
    printArray(arr, n); // Call the printArray function to print the sorted array

    cout << "\nNumber of comparisons made: " << comparisonCount << endl; // Display the count of comparisons

    return 0;
}

