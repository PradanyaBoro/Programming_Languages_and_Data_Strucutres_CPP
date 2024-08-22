/*-------Add 1 to binary-------*/

#include<iostream>
#include<string>
using namespace std;

int binAdd(string &n)	/* If we don't use &
the string will be considered as a copy and 
the actual string will not get effected by
this function */
{
	int len = n.size();
	int carry = 1;
	int i = len - 1;
	int temp;
	
	while(i >= 0)
	{
		temp = n[i] - '0';	/* We can't
		directly sum n[i] with carry so
		we're first converting n[i] to 
		int type data */
		
		temp += carry; /* Now we're
		adding the int type value of
		n[i] to carry */
		
		if(temp == 2)
		{
			n[i] = '0';
		}
		else if(temp == 1)
		{
			n[i] = '1';
			carry = 0;
		}
		else
		{
			n[i] = '0';
			carry = 0;
		}
		i--;
	}
	
	if(carry == 1)
		n = '1' + n;
}

int main()
{
	string n;
	cout << "Enter your binary number:\n";
	cin >> n;
	
	binAdd(n);
	cout << "Adding 1 we get " << n;
	
	return 0;
}
