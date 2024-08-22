#include<iostream>
using namespace std;

void merge(int a[], int l, int mid, int r)
{
	int i = l;
	int j = mid + 1;
	int k = 0;
	int temp[r - l + 1];
	
	while(i <= mid && j <= r)
	{
		if(a[i] < a[j])
		{
			temp[k] = a[i];
			i++;
			k++;
		}
		else
		{
			temp[k] = a[j];
			j++;
			k++;
		}
	}
	
	if(i > mid)
	{
		while(j <= r)
		{
			temp[k] = a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i <= mid)
		{
			temp[k] = a[i];
			i++;
			k++;
		}
	}
	
	for(k = l; k <= r; k++)
	{
		a[k] = temp[k - l];
	}
}

void mergesort(int a[], int l, int r)
{
	if(l < r)
	{
		int mid = (l + r) / 2;
		
		mergesort(a, l, mid);
		mergesort(a, mid + 1, r);
		
		merge(a, l, mid, r);
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
	
	mergesort(a, 0, n - 1);
	
	cout << "Your sorted  array is:\n";
	for(int i = 0; i < n; i++)
	{
		cout << a[i]  << " ";
	}
	
	return 0;
}
