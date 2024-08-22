#include<iostream>
using namespace std;

void swap(int a[], int i, int j)
{
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

int main()
{
	int n;
	cout << "Enter the total number of elements:\n";
	cin >> n;
	
	int arr[n];
	cout << "Enter your elements:\n";
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = 0; j < n - i - 1; j++)
		{
			if(arr[j + 1] < arr[j])
			{
				swap(arr, j, j + 1);
			}
		}
	}
	
	cout << "Sorted array is:\n";
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	
	return 0;
}
