#include<iostream>
using namespace std;

void print_array(int arr[], int n, int i)
{
	if(i < n)
	{
		cout << arr[i] << " ";
		print_array(arr, n, i + 1);
	}
}

void input_array(int arr[], int n, int i)
{
	if(i < n)
	{
		cin >> arr[i];
		input_array(arr, n, i + 1);
	}
}

void swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int partition(int arr[], int left, int right)
{
	int i = left;
	int j = right;
	int pivot = left;
	
	while(i < j)
	{
		while(arr[i] <= arr[pivot])
		{
			i++;
		}
		while(arr[j] > arr[pivot])
		{
			j--;
		}
		
		if(i < j)
		{
			swap(arr, i, j);
		}
		
	}
	swap(arr, j, pivot);
		
	return j;
	
}

void quick_sort(int arr[], int left, int right)
{
	if(left < right)
	{
		int pivot = partition(arr, left, right);
		
		quick_sort(arr, left, pivot - 1);
		quick_sort(arr, pivot + 1, right);
	}
}

int main()
{
	int n;
	cout << "Enter length: \n";
	cin >> n;
	
	
	int arr[n];
	cout << "Enter elements: \n";
	input_array(arr, n, 0);

	quick_sort(arr, 0, n - 1);

	print_array(arr, n, 0);
	
	return 0;
}
