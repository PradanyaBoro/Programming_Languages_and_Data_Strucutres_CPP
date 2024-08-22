/*--------Selection Sort( O(n^2) for all cases )--------*/

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

void selectionSort(int arr[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		int min = i;
		for(int j = i + 1; j < n; j++)
		{
			if(arr[j] < arr[min])
			{
				min = j;
			}
		}
		if(min != i)
		{
			swap(arr, i, min);
		}
	}
}

int main()
{
	int n;
	cout << "Enter the length: \n";
	cin >> n;
	
	int arr[n];
	inputArray(arr, n);
	
	selectionSort(arr, n);
	
	cout << "Sorted array is: \n";
	printArray(arr, n);
	
	return 0;
}
