/*--------Octal to Decimal--------*/

#include<iostream>
#include<cmath>
using namespace std;

octToDeci(int n)
{
	int digit;
	int decimal = 0;
	int i = 0;
	
	while(n > 0)
	{
		digit = n % 10;
		decimal += (pow(8, i) * digit);
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
	octToDeci(n);
	
	return 0;
}
