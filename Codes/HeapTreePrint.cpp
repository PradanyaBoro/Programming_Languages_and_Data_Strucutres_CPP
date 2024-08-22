#include<iostream>
#include<cmath>
using namespace std;

void input_array(int arr[], int n, int i)
{
	if(i < n)
	{
		cin >> arr[i];
		input_array(arr, n, i + 1);
	}
}

void swap(int arr[], int n, int i)
{
	int temp = arr[n];
	arr[n] = arr[i];
	arr[i] = temp;	
}

void heapify(int arr[], int n, int i)
{
	int l_c = 2 * i + 1;
	int r_c = 2 * i + 2;
	int large = i;
	
	if(l_c < n && arr[l_c] > arr[large])
	{
		large = l_c;
	}
	if(r_c < n && arr[r_c] > arr[large])
	{
		large = r_c;
	}
	
	if(large != i)
	{
		swap(arr, i, large);
		heapify(arr, n, large);
	}
}

void build_heap(int arr[], int n)
{
	for(int i = (n - 1) / 2; i >= 0; i--)
	{
		heapify(arr, n, i);
	} 
}

int height(int arr[], int n)
{
	int i, height;
	for(i = 0; i < n; i++)
	{
		height++;
		i = 2 * i + 1;
	}
	return height;
}
/*
void print_heap(int arr[], int n)
{
	int h = height(arr, n);
	int blocks = pow(2, h);
	int half_blocks, previous_half_blocks, printed_index;
	
	for(int i = 0; i < h; i++)
	{
		for(int j = 0; j < blocks; i++ )
		{
			half_blocks = blocks / 2;
			if(j == half_blocks)
			{
				cout << arr[j];
				printed_index = j;
			}
			previous_half_blocks = 2 * blocks;
			if(j == printed_index + previous_half_blocks)
			{
				cout << arr[j];
				printed_index = j;
			}
		}
		blocks /= 2;
	}
}
*/

int main()
{
	int n;
	cout << "Enter length: \n";
	cin >> n;
	
	int arr[n];
	cout << "Enter elements: \n";
	input_array(arr, n, 0);

	build_heap(arr, n);
	
	int h = height(arr, n);
	int blocks = pow(2, h);
	int temp_blocks = blocks;
	int half_blocks, printed_index;
	
	for(int i = 0; i < h; i++)
	{
		for(int j = 0; j < blocks; i++ )
		{
			half_blocks = temp_blocks / 2;
			if(j == half_blocks)
			{
				cout << arr[j];
				printed_index = j;
			}
//			previous_half_blocks = temp_blocks;
			if(j == printed_index + temp_blocks)
			{
				cout << arr[j];
				printed_index = j;
			}
		}
		temp_blocks = temp_blocks / 2;
		printed_index = 0;
	}
	
//	print_heap(arr, n);
	
	return 0;
	
}
