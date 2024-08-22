#include<iostream>
using namespace std;

/*--------Quick Sort( O(n^2) for worst case(rare), O(nlogn) for average & best cases--------*/

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

int partition_(int arr[], int left, int right)
{
	int i = left;
	int j = right;
	int pivot = arr[left];
	
	while(i < j)
	{
		while(arr[i] <= pivot)
		{
			i++;
		}
		while(arr[j] > pivot)
		{
			j--;
		}
		
		if(i < j)
		{
			swap(arr, i, j);
		}
		
	}
	
	swap(arr, j, left);
	
	return j;
	
}

void quickSort(int arr[], int left, int right)
{
	if(left < right)
	{
		int partition = partition_(arr, left, right);
		
		quickSort(arr, left, partition - 1);
		quickSort(arr, partition + 1, right);
	}
}

int main()
{
	int n;
	cout << "Enter the length";
	cin >> n;
	
	int arr[n];
	inputArray(arr, n);
	
	quickSort(arr, 0, n - 1);
	
	cout << "Sorted array is: \n";
	printArray(arr, n);
	
	return 0;
}
