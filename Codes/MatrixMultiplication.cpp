/*---Matrix Multiplication----*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the dimension of your matrix:\n";
	cin >> n;
	
	int Multi[n][n], M1[n][n], M2[n][n];
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
			Multi[i][j] = 0;
			for(int k = 0; k < n; k++)
			{
				Multi[i][j] += M1[i][k] * M2[k][j];
			}
		}
	}
	
	cout << "Multiplication is: \n";
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << Multi[i][j] << " ";
		}
		cout << endl;
	
	}
	
	return 0;
}
