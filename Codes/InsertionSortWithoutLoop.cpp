/*-----Insertion Sort without loop------*/

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

int insert(int arr[], int n, int j, int temp)
{
	if(j >= 0 && arr[j] > temp)
	{
		arr[j + 1] = arr[j];
		insert(arr, n, j - 1, temp);
	}
	arr[j + 1] = temp;
}

void insertionSort(int arr[], int n, int i, int j)
{
	if(i < n - 1)
	{
		int temp = arr[i];
		insert(arr, n, j, temp);
		
		insertionSort(arr, n, i + 1, i);
	}
}

int main()
{
	int n;
	cout << "Enter the length: \n";
	cin >> n;
	
	int arr[n];
	cout << "Enter elements: \n";
	inputArray(arr, n, 0);
	
	insertionSort(arr, n, 1, 0);
	
	cout << "Sorted array is: \n";
	printArray(arr, n, 0);
	
	return 0;
}
