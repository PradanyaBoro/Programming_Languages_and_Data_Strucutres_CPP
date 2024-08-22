#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter your number: \n";
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		for(int j = i; j < n; j++)
		{
			for(int k = j; k < n; k++)
			{
				for(int l = k; l < n; l++)
				{
					if(i * i + j * j + k * k + l * l == n)
					{
						cout << n << " = " << i << "^2 + " ;
						cout << j << "^2 + " << k << "^2 + ";
						cout << l << "^2";
						goto label;	/* We might get multiple
						expression of a num, so as soon as we
						are getting one we're exiting out of
						all loops */
					}
				}
			}
		}
	}
	label:
	
	return 0;
}
