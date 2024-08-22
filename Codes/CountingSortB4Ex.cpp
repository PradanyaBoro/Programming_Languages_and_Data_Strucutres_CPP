/*--------Counting Sort( O(n + k), where n is the---------
-----no. of elements & k is the range of input values---*/

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

void countingSort(int arr[], int n)
{
	int range = arr[0];
	for(int i = 1; i < n; i++)
	{
		range = max(range, arr[i]);
	}
	
	int countArr[10] = {0};
	for(int i = 0; i < n; i++)
	{
		countArr[arr[i]]++;
	}
	
	for(int i = 1; i <= range; i++)
	{
		countArr[i] += countArr[i - 1];
	}
	
	int outputArr[n];
	for(int i = n - 1; i >= 0; i--)
	{
		outputArr[--countArr[arr[i]]] = arr[i];
	}
	
	for(int i = 0; i < n; i++)
	{
		arr[i] = outputArr[i];
	}
}



int main()
{
	int n;
	cout << "Enter the length: \n";
	cin >> n;
	
	int arr[n];
	inputArray(arr, n);
	
	countingSort(arr, n);
	
	cout << "Sorted array is: \n";
	printArray(arr, n);
	
	return 0;
}
