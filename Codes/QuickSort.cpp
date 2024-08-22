#include<iostream>
using namespace std;

void swap(int a[], int i, int j)
{
	int temp;
	
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;

}

int partition(int a[], int l, int r)
{
	int i = l;
	int j = r;
	int pivot = a[l];
	
	while(i < j)
	{
		while(a[i] <= pivot)
		{
			i++;
		}
		
		while(a[j] > pivot)
		{
			j--;
		}
		
		if(i < j)
		{
			swap(a, i, j);
		}
	}
	
	swap(a, l, j);
	
	return j;
}

void quicksort(int a[], int l, int r)
{
	if(l < r)
	{
		int pivot = partition(a, l, r);
		
		quicksort(a, l, pivot - 1);
		quicksort(a, pivot + 1, r);
	}
}

int main()
{
	int n;
	cout << "Enter length of array:\n";
	cin >> n;
	
	int a[n];
	cout << "Enter the elements of the array:\n";
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	quicksort(a, 0, n - 1);
	
	cout << "Your sorted  array is:\n";
	for(int i = 0; i < n; i++)
	{
		cout << a[i]  << " ";
	}
	
	return 0;
	
}

