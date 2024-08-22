#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num;
	cout << "Enter the number: \n";
	cin >> num;
	
	for(int i = 0; i <= sqrt(num); i++)
	{
		for(int j = 0; j <= sqrt(num); j++)
		{
			for(int k = 0; k <= sqrt(num); k++)
			{
				for(int l = 0; l <= sqrt(num); l++)
				{
					if(i * i + j * j + k * k + l * l == num)
					{
						cout << i << j << k << l << endl;
						goto loopend;
					}
				}
			}
		}
	}
	loopend:
	return 0;
}
