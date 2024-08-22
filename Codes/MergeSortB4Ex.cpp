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

void merge(int arr[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = 0;
    int temparr[right - left + 1];

    while(i <= mid && j <= right)
    {
        if(arr[i] > arr[j])
        {
            temparr[k] = arr[j];
            j++;
            k++;
        }
        else
        {
            temparr[k] = arr[i];
            k++;
            i++;
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
    if(j > right)
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

void merge_sort(int arr[], int left, int right)
{
    if(left < right)
    {
        int mid = (left + right) / 2;

        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main()
{
	int n;
    cout << "Enter length:\n";
	cin >> n;
	int arr[n];

    cout << "Enter the elements:\n";
	input_array(arr, n, 0);

	merge_sort(arr, 0, n - 1);

	print_array(arr, n, 0);
	
	return 0;
}
