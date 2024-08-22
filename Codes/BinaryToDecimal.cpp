/*--------Binary to Decimal--------*/

#include<iostream>
#include<cmath>
using namespace std;

binToDeci(int n)
{
	int digit;
	int decimal = 0;
	int i = 0;
	
	while(n > 0)
	{
		digit = n % 10;
		decimal += (pow(2, i) * digit);
		n /= 10;
		i++;
	}
	
	cout << decimal;
}

int main()
{
	int n;
	cout << "Enter your number: \n";
	cin >> n;
	
	cout << "Decimal representation of " << n << " is "; 
	binToDeci(n);
	
	return 0;
}
