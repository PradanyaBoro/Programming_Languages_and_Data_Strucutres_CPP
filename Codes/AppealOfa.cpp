#include<iostream>
#include<string>
using namespace std;

int appeal(string s)
{
	for(int i = 0; i < s.length(); i++)
	{
		for(int j = i; j < s.length(); j++)
		{
			if(s[i] == s[j])
			{
				s.erase(j,1);
			}
		}
	}
	return s;
}


int main()
{
	string s = "abbca";
	cout << appeal(s);
	
	return 0;
}
