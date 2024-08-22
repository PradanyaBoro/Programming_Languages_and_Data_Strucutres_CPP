/*---Matrix Addition----*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the dimension of your matrix:\n";
	cin >> n;
	
	int add[n][n], M1[n][n], M2[n][n];
	cout << "Enter first matrix:\n";
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> M1[i][j];
		}
	}
	
	cout << "Enter second matrix:\n";
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin >> M2[i][j];
		}
	}

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			add[i][j] = M1[i][j] + M2[i][j];
		}
	}
	
	cout << "Addition is: \n";
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << add[i][j] << " ";
		}
		cout << endl;
	
	}
	
	return 0;
}
