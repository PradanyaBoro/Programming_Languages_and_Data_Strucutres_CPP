#include<iostream>
#include<string>
using namespace std;

int main()
{
	string num1;
	
	getline(cin, num1);
	
	int i = 0;
	while(i < num1.length())
	{
		while(num1[i] != '\0' && num1[i] != ',')
		{
			cout << num1[i];
			i++;	
		}
		cout << endl;
		i++;
	}
	
	return 0;
}
