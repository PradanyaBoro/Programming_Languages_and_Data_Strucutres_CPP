/*--------Insertion Sort( O(n^2) for worst & average csaes O(n) for the best case(when the array is nearly sorted))--------*/

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

void insertionSort(int arr[], int n)
{
	for(int i = 1; i < n; i++)
	{
		int temp = arr[i];
		int j = i - 1;
		while(j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}
}

int main()
{
	int n;
	cout << "Enter the length: \n";
	cin >> n;
	
	int arr[n];
	inputArray(arr, n);
	
	insertionSort(arr, n);
	
	cout << "Sorted array is: \n";
	printArray(arr, n);
	
	return 0;
}
