#include<iostream>
using namespace std;


void swap(int a[], int i, int j)
{
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}


void heapify(int a[], int n, int i)
{
	int left_child = 2 * i + 1;
	int right_child = 2 * i + 2;
	int large = i;
	
	if(left_child < n && a[left_child] > a[large])
	{
		large = left_child;
	}
	
	if(right_child < n && a[right_child] > a[large])
	{
		large = right_child;
	}
	
	if(large != i)
	{
		swap(a, large, i);
		heapify(a, n, large);
	}
}


void buildHeap(int a[], int n)
{
	for(int i = (n/2) - 1; i >= 0; i--)
	{
		heapify(a, n, i);
	}
}


void heapSort(int a[], int n)
{
	buildHeap(a, n);
	for(int i = n - 1; i >= 0; i--)
	{
		swap(a, i, 0);
		heapify(a, i, 0);
	}
}


int main()
{
	int n;
	cout << "Enter length:\n";
	cin >> n;
	
	int a[n];
	cout << "Enter elements:\n";
	for(int j = 0; j < n; j++)
	{
		cin >> a[j];
	}
	
	heapSort(a, n);
	
	cout << "Sorted array is:\n";
	for(int j = 0; j < n; j++)
	{
		cout << a[j] << " ";
	}
	
	
	return 0;
}
