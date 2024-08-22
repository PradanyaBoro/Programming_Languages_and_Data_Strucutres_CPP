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

void heapify(int arr[], int n, int i)
{
	int left_child = 2 * i + 1;
	int right_child = 2 * i + 2;
	
	int large = i;
	
	if(left_child < n && arr[left_child] > arr[large])
	{
		large = left_child;
	}
	if(right_child < n && arr[right_child] > arr[large])
	{
		large = right_child;
	}
	
	if(large != i)
	{
		swap(arr, large, i);
		heapify(arr, n, large);
	}
}

void build_heap(int arr[], int n)
{
	for(int i = (n / 2) - 1; i >= 0; i--)
	{
		heapify(arr, n, i);
	}
}

void heap_sort(int arr[], int n)
{
	build_heap(arr, n);
	for(int i = n - 1; i >= 0; i--)
	{
		swap(arr, 0, i);
		heapify(arr, i, 0);
	}
}


int main()
{
	int n;
	cin >> n;
	int arr[n];
	input_array(arr, n, 0);

	heap_sort(arr, n);

	print_array(arr, n, 0);
	
	return 0;
}
