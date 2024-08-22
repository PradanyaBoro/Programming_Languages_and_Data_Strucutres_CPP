/*--------Heap Sort( O(nlogn) for all cases )--------*/

#include<iostream>
using namespace std;

void inputArray(int arr[], int n)
{
	cout << "Enter the elements of your array: \n";
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

void printArray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

void swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void heapify(int arr[], int n, int i)
{
	int left_child = 2 * i + 1;
	int right_child = 2 * i + 2;
	int large = i;
	
	if(left_child < n && arr[left_child] > arr[large])
	{
		large = left_child;
	}
	if(right_child < n && arr[right_child] > arr[large])
	{
		large = right_child;
	}
	
	if(large != i)
	{
		swap(arr, large, i);
		heapify(arr, n, large);
	}
	
}

void buildHeap(int arr[], int n)
{
	for(int i = (n / 2) - 1; i >= 0; i--)
	{
		heapify(arr, n, i);
	}
}

void heapSort(int arr[], int n)
{
	buildHeap(arr, n);
	for(int i = n - 1; i >= 0 ; i--)
	{
		swap(arr, i, 0);
		heapify(arr, i, 0);
	}
}

int main()
{
	int n;
	cout << "Enter the length: \n";
	cin >> n;
	
	int arr[n];
	inputArray(arr, n);
	
	heapSort(arr, n);
	
	cout << "Sorted array is: \n";
	printArray(arr, n);
	
	return 0;
}
