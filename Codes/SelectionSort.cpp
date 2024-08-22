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
		int min = i;
		for(int j = i + 1; j < n; j++)
		{
			if( arr[j] < arr[min] )
			{
				min = j;
			}
		}
		if(i != min)
		{
			swap(arr, i, min);
		}
		
	}
	
	cout << "The sorted array is:\n";
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	
	
	return 0;
}
