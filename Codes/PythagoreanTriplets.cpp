/*-------Pythagorean Triplets less than n-------*/

#include<iostream>
#include<cmath>
using namespace std;

void checkPtriple(int n)
{
	int i = 1;
	while(i <= n)
	{
		int power = pow(i, 2);
		for(int j = 1; j <= power; j++)
		{
			for(int k = j; k <= power; k++)
			{
				if(power == pow(j, 2) + pow(k , 2))
				{
					cout << "(" << i << "," << j << "," << k << ")" << endl;
				}
			}
		}
		i++;	
	}	
}

int main()
{
	int n;
	cout << "Enter your number: \n";
	cin >> n;
	
	cout << "Possible Pythagorean triplets less than " << n << " are: \n";
	checkPtriple(n);
	
	return 0;
}
