/*-----Check n is perfect or not-----*/

/* Perfect number: Whose sum of factors, excluding
the num itself is equal to the num.-------------*/

#include<iostream>
using namespace std;

void perfectNum(int n)
{
	int i = 1;
	int sum = 0;
	while(i < n)
	{
		if(n % i == 0)
		{
			sum += i;
		}
		i++;
	}
	
	if(sum == n)
		cout << n << " is a perfect number. \n";
	else
		cout << n << " is not a prefect number. \n";
}

int main()
{
	int n;
	cout << "Enter your number: \n";
	cin >> n;
	
	perfectNum(n);
	
	return 0;
}
