#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string name;
	int mark;
	int numOfStd = 6;
	
	ofstream u("MarksOfStudents.txt");
	for(int i = 0; i < numOfStd; i++)
	{
		cin >> name;
		u << name << "----------"
		cin >> mark;
		u << mark << endl;
	}
	
	return 0;
}
