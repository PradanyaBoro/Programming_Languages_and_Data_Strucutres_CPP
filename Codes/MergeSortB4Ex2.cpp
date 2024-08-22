#include<iostream>
using namespace std;

/*--------Merge Sort( O(nlogn) for all cases )--------*/

void inputArray(int arr[], int n)
{
	cout << "Enter the elements of your array: \n";
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

void printArray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}

void swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void merge(int arr[], int left, int mid, int right)
{
	int i = left;
	int j = mid + 1;
	int k = 0;
	int temparr[right - left + 1];
	
	while(i <= mid && j <= right)
	{
		if(arr[i] <= arr[j])
		{
			temparr[k] = arr[i];
			k++;
			i++;
		}
		else
		{
			temparr[k] = arr[j];
			k++;
			j++;
		}
	}
	if(i > mid)
	{
		while(j <= right)
		{
			temparr[k] = arr[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i <= mid)
		{
			temparr[k] = arr[i];
			i++;
			k++;
		}
	}
	
	for(i = left; i <= right; i++)
	{
		arr[i] = temparr[i - left];
	}
}

void mergeSort(int arr[], int left, int right)
{
	if(left < right)
	{
		int mid = (right + left) / 2;
		
		mergeSort(arr, left, mid);
		mergeSort(arr, mid + 1, right);
		
		merge(arr, left, mid, right);
	}
}

int main()
{
	int n;
	cout << "Enter the length: \n";
	cin >> n;
	
	int arr[n];
	inputArray(arr, n);
	
	mergeSort(arr, 0, n - 1);
	
	cout << "Sorted array is: \n";
	printArray(arr, n);
	
	return 0;
}
