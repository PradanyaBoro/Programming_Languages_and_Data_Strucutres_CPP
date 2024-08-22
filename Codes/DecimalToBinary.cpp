/*--------Decimal to Binary--------*/

#include<iostream>
using namespace std;

void binary(int n)
{
	/* First we'll find the required dimension
	of our array to store the remainders */
	int size = 0;
	int temp = n;
	while(temp > 0)
	{
		temp /= 2;
		size += 1;
	}
	
	int arr[size];
	int index = size - 1;
	while(n > 0)
	{
		arr[index] = n % 2;
		n /= 2;
		index--;
	}
	
	for(int j = 0; j < size; j++)
	{
		cout << arr[j];
	}
}

int main()
{
	int n;
	cout << "Enter your number: \n";
	cin >> n;
	
	cout << "Binary representation of " << n << " is:\n";
	binary(n);
	
	return 0;
}
