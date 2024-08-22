#include<iostream>
using namespace std;

void countingSort(int a[], int s, int r)
{
	int countarray[r];
	int outputarray[s];
	
	for(int i = 0; i < r; i++)
	{
		countarray[i] = 0;
	}
	
	for(int i = 0; i < s; i++)
	{
		countarray[a[i]]++;
	}
	
	for(int i = 1; i < r; i++)
	{
		countarray[i] += countarray[i - 1];
	}
	
	for(int i = 0; i < s; i++)
	{
		outputarray[--countarray[a[i]]] = a[i];
	}
	
	for(int i = 0; i < s; i++)
	{
		a[i] = outputarray[i];
	}
}

int main()
{
	int size;
	int range = 10;
	
	cout << "Enter length of your array:\n";
	cin >> size;
	
	int a[size];
	cout << "Enter " << size << " elements between 0-9\n";
	for(int i = 0; i < size; i++)
	{
		cin >> a[i];
	}
	
	countingSort(a, size, range);
	
	cout << "Sorted array is:\n";
	for(int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	
	return 0;
}
