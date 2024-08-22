#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
	int i = l;
	int j = mid + 1;
	int k = 0;
	int temparr[r - l + 1];
	
	while(i <= mid && j <= r)
	{
		if(arr[i] > arr[j])
		{
			temparr[k] = arr[j];
			j++;
		}
		else
		{
			temparr[k] = arr[i];
			i++;
		}
		k++;
	}
	
	if(i > mid)
	{
		while(j <= r)
		{
			temparr[k] = arr[j];
			k++;
			j++;
		}
	}
	else
	{
		while(i <= mid)
		{
			temparr[k] = arr[i];
			k++;
			i++;
		}
	}
	
	for(k = l; k <= r; k++)
	{
		arr[k] = temparr[k - l];
	}
	
}

void mergeSort(int arr[], int l, int r)
{
	if(l < r)
	{
		int mid = (r + l)/ 2;
		
		mergeSort(arr, l, mid);
		mergeSort(arr, mid + 1, r);
		
		merge(arr, l, mid, r);
	}
}

int main()
{
	int n;
	
	cout << "How many numbers do you want to sort?\n";
	cin >> n;
	
	int arr[n];
	
	cout << "Enter the elements of your array:\n";
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	mergeSort(arr, 0, n - 1);
	
	cout << "Your sorted array is\n";
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	
	return 0;
}
