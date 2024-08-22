#include<iostream>
#include<string>
using namespace std;

int removeDig(string num, char dig)
{
	int max = -10;
	string modified = num;
	for(int i = 0; i < num.length(); i++)
	{
		if(num[i] == dig)
		{
			modified.erase(i,1);
			if(stoi(modified) > max)
			{
				max = stoi(modified);
				modified = num;
			}
		}
	}
	return max;
}

int main()
{
	string num = "1232";
	char dig = '2';
	
	cout << "After removing " << dig << " from " << num << " new number is " << removeDig(num, dig);
	
	return 0;
}
