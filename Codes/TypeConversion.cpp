/*-------Type conversion------*/

#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;

int main()
{
	string num = "lemon";
	
	cout << "Initial type of " << num << " is " << typeid(num).name() << endl;
	
	char c = (char)num[0];
	
	cout << "Type of " << c << " is " << typeid(c).name();
	
	return 0;
}
