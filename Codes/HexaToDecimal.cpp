/*--------HexaDecimal to Decimal--------*/

#include<iostream>
#include<cmath>
using namespace std;

hexaToDeci(char arr[], int n)
{
	int num = 0;
	int digit;
	int i = n - 1;
	int j = 0;
	while(i >= 0)
	{
		int digit = arr[i];
		if(digit >= 65)
		{
			num += (pow(16, j) * (digit - 55));
		}
		else
			num += pow(16, j) * (digit - 48);
		j++;
		i--;
	}
}

int main()
{
	int n;
	cout << "Enter length of your number: \n";
	cin >> n;
	
	char arr[n];
	cout << "Enter your number: \n";
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	cout << "Decimal representation of " << n << " is "; 
	hexaToDeci(arr, n);
	
	return 0;
}
