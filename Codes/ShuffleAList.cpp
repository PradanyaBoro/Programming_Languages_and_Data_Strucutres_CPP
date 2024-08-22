#include<iostream>
#include<string>
using namespace std;

int main()
{
	string num1;
	string num2;
	
	cin >> num1;
	cin >> num2;
	
	int i = 0;
	int j = 0;
	while(num1[i] != '\0' && num2[j] != '\0')
	{
		while(num1[i] != '\0' && num1[i] != ',')
		{
			cout << num1[i];
			i++;	
		}
		cout << ',';
		i++;
		while(num2[j] != '\0' && num2[j] != ',')
		{
			cout << num2[j];
			j++;
		}
		if(j < num2.length())
			cout << ',';
		j++;
	}
	
	return 0;
}
