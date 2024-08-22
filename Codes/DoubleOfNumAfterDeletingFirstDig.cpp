#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int num;
	cout << "Enter: \n";
	cin >> num;
//	int temp = num;
	int newnum = 0;
	int i = 0;
	while(num > 9)
	{
		newnum += num % 10 * pow(10,i);
		num /= 10;
		i++;
	}
	
	cout << newnum * 2;
}
