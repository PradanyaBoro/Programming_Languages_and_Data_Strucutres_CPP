/*--Greatest element in an integer array--*/

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

int greatestElt(int arr[], int n)
{
	int max = arr[0];
	for(int i = 1; i < n; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int main()
{
	int n;
	cout << "Enter the number of elements:\n";
	cin >> n;
	
	int arr[n];
	inputArray(arr, n);
	
	cout << "Greatest element in the given array is " << greatestElt(arr, n);
	
	return 0;
}
