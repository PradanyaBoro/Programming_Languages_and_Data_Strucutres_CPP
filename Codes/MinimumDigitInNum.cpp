#include<iostream>
using namespace std;

void searchnum(int num, int search)
{
	while(num > 0)
	{
		int dig = num % 10;
		num /= 10;
		if( dig == search)
		{
			cout << "Present" << endl;
			return;
		}
	}
	cout << "Absent" << endl;
	return;
}

int main()
{
	int num;
	cout << "Enter: ";
	cin >> num;
	
	int min = num % 10;
	num /= 10;
	while(num > 0)
	{
		if(min > num % 10)
			min = num % 10;
		num /= 10;
	}
	
	cout << min;
	
	return 0;
}
