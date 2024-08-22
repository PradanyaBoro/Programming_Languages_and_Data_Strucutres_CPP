#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	
	for(int i = 0; i <= n; i++)
	{
		for(int j = i; j <= n; j++)
		{
			for(int k = j; k <= n; k++)
			{
				for(int l = k; l <= n; l++)
				{
					if(i * i + j * j + k * k + l * l == n)
					{
						cout << n << " = " << i << "*" << i;
						cout << "+" << j <<"*" << j;
						cout <<"+"<<k<<"*"<<k;
						cout <<"+"<<l<<"*"<<l;
						goto end;
					}
				}
			}
		}
	}
	end:
		
	return 0;
}
