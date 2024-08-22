/*-----Bubble Sort without loop------*/

#include<iostream>
using namespace std;

void inputArray(int arr[], int n, int i)
{
	if(i < n)
	{
		cin >> arr[i];
		inputArray(arr, n, i + 1);
	}
}

void printArray(int arr[], int n, int i)
{
	if(i < n)
	{
		cout << arr[i] << " ";
		printArray(arr, n, i + 1);
	}
}


void swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void bubbleCompare(int arr[], int n, int i, int j)
{
	if(j < n - i - 1)
	{
		if(arr[j] > arr[j + 1])
		{
			swap(arr, j, j + 1);
		}
		bubbleCompare(arr, n, i, j + 1);
	}
}
void bubbleSort(int arr[], int n, int i)
{
	if(i < n - 1)
	{
		bubbleCompare(arr, n, i, 0);
		bubbleSort(arr, n, i + 1);
	}
}

int main()
{
	int n;
	cout << "Enter the length: \n";
	cin >> n;
	
	int arr[n];
	cout << "Enter the elements: \n";
	inputArray(arr, n, 0);
	
	bubbleSort(arr, n, 0);
	
	cout << "Sorted array is: \n";
	printArray(arr, n, 0);
	
	return 0;
}
