#include<iostream>
using namespace std;

void swap(int a[], int i, int j)
{
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

int partition(int a[], int l, int r)
{
	int pivot = l;
	int i = l;
	int j = r;
	
	
	while(i < j)
	{
		while(a[i] <= a[pivot])
		{
			i++;
		}
		
		while(a[j] > a[pivot])
		{
			j--;
		}
		
		if(i < j)
		{
			swap(a, i, j);
		}
	}
	swap(a, pivot, j);
	
	return j;
}

void quickSort(int a[], int i, int j)
{
	if(i < j)
	{
		int pivot = partition(a, i, j);
		
		quickSort(a, i, pivot - 1);
		quickSort(a, pivot + 1, j);
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
	
	quickSort(a, 0, n - 1);
	
	cout << "Sorted array is:\n";
	for(int j = 0; j < n; j++)
	{
		cout << a[j] << " ";
	}
	
	
	return 0;
}
