#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int k;
	ofstream u("doubleOfNum.txt");
	cin >> k;
	u << k*2;
	
	return 0;
}
