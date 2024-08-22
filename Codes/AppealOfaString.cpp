#include<iostream>
#include<string>
using namespace std;

int appealSingle(string s)
{
	int len = s.length();
	for(int i = 0; i < len; i++)
	{
		for(int j = i + 1; j < len; j++)
		{
			if(s[i] == s[j])
			{
				s.erase(j,1);
				len -= 1;
			}
		}
	}
	return s.length();
}

int appealWhole(string s)
{
	int count = 0;
	int i = 0;
	string copy = s;
	for(int j = 1; j <= s.length(); j++)
	{
		while(i <= s.length() - j)
		{
			count += appealSingle(s.substr(i,j));
			i++;
		}
		i = 0;
	}
	return count;
}

int main()
{
	string s = "abbca";
	cout << appealWhole(s);
	
	return 0;
}
