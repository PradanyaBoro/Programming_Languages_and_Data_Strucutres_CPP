#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	int arr[n];
	cout << "Enter array";
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
		
	}
	
	int temp;
	for(int j = 0; j < n - 1; j++)
	{
		if(arr[j] > arr[j + 1])
		{
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;
		}
	}
	
	cout << "Max elt is " << arr[n - 1];
}
