#include<iostream>
#include<string>
using namespace std;

int romReps(char rom)	// Gives number equivalent of a single Roman Number
{
	int num[7] = {1, 5, 10, 50, 100, 500, 1000};	
	char arr[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
	
	for(int i = 0; i < 7; i++)
	{
		if(rom == arr[i])
		{
			return num[i];
		}
	}
}

int romToNum(string s)	// Main function to conver Roman to Integer
{
	int len = s.length();
	int num = romReps(s[0]);
	
	for(int i = 0; i < len - 1; i++)
	{
		if(romReps(s[i]) < romReps(s[i+1]))
		{
			num = romReps(s[i + 1]) - num;
		}
		else
		{
			num = romReps(s[i + 1]) + num;
		}
	}
	return num;
}

int validityOfRom(string rom)	// Checks user input Roman number is a valid Roman number of not
{
	for(int i = 0; i < rom.length(); i++)
	{
		if(i < (int)rom.length() - 2 && romReps(rom[i]) < romReps(rom[i+2]))	// Checks whether there is more than one smaller numeral in the left
		{
			cout << "Please enter a valid Roman number: \n";
			return 0;
		}
		else if(i < (int)rom.length() - 3 && romReps(rom[i]) == romReps(rom[i+3]))	// Checks whether a numeral is repeated more than 3 times
		{
			cout << "Please enter a valid Roman number: \n";
			return 0;
		}
		
		else if(rom[i] == 'V' or rom[i] == 'L' or rom[i] == 'D')	// Check whether V, L or D is repeated
		{
			if(romReps(rom[i]) == romReps(rom[i+1]))
			{
				cout << "Please enter a valid Roman number: \n";
				return 0;
			}	
		}
		else if(i < (int)rom.length() - 2 && romReps(rom[i + 1]) < romReps(rom[i + 2]))	// Checks whether the numeral is in descending order after the first term
		{
			cout << "Please enter a valid Roman numeber: \n";
			return 0;
		}
		else if(rom[i] != 'I' && rom[i] != 'V' && rom[i] != 'X' && rom[i] != 'L' && rom[i] != 'D' && rom[i] != 'M')
		{
			cout << "Please enter a valid Roman numeber: \n";
			return 0;
		}
	}
	return 1;
}

int main()
{
	string rom;
	cout << "Enter the Roman number: \n";
	input:
	cin >> rom;
	if(validityOfRom(rom) == 0)
	{
		goto input;
	}
	
	cout << rom << " = " << romToNum(rom);
	
	return 0;
}
