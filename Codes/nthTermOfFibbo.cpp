/*---nth term of Fibbo----*/

#include<iostream>
using namespace std;

int Fibo(int n)
{
	int arr[n];
	arr[0] = 1;
	arr[1] = 1;
	
	for(int i = 2; i < n; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
	
	return arr[n - 1];
}

int main()
{
	int n;
	cout << "Enter your number:\n";
	cin >> n;
	
	cout << n << "th term the Fibonacci ";
	cout << "sequence is " << Fibo(n);

	return 0;
}
