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
	
	int search;
	cout << "Search? ";
	cin >> search;
	
	searchnum(num, search);
	char status = 'a';
	while(num > 0)
	{
		int dig = num % 10;
		if(dig == search)
		{
			status = 'p';
			break;
		}
		else
		{
			status = 'a';
		}
		num /= 10;
	}
	if(status == 'p')
	{
		cout << "Present.";
	}
	else
		cout << "Absent";
	return 0;
}
