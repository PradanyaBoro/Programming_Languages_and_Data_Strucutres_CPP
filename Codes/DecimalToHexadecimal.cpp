/*--------Decimal to Octal--------*/

#include<iostream>
using namespace std;

void hexaDecimal(int n)
{
	/* First we'll find the required dimension
	of our array to store the remainders */
	int size = 0;
	int temp = n;
	while(temp > 0)
	{
		temp /= 16;
		size += 1;
	}
	
	char arr[size];	// Type is char to take char val
	int index = 0;
	while(n > 0)
	{
		int rem = 0;
		rem = n % 16;
		
		if(rem < 10)
		{
			arr[index] = rem + 48;	/* Since ASCII
			val of 48 is 0 so val asigned is temp*/
		}
		else
		{
			arr[index] = rem + 55;	/* Since ASCII val
			of 65 is A, 66 is B & so on, so when remainder
			is 10 then arr will be A, when 11 array will
			be B & vice versa */
		}
		
		index++;
		n /= 16;
	}
	
	for(int j = index - 1; j >= 0; j--)
	{
		cout << arr[j];
	}
}

int main()
{
	int n;
	cout << "Enter your number: \n";
	cin >> n;
	
	cout << "Hexa Decimal representation of " << n << " is:\n";
	hexaDecimal(n);
	
	return 0;
}
