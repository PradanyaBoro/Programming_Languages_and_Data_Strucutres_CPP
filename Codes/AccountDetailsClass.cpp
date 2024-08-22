#include<iostream>
#include<string>
using namespace std;

class BankAccount
{
	private:
		int accNum;
		string accHolderName;
		double balance;
	public:
		void Account(int num, string name, double bal)
		{
			accNum = num;
			accHolderName = name;
			balance = bal;
		}
		
		void displayAccInfo()
		{
			cout << "Account Number: " << accNum << endl;
			cout << "Account Holder: " << accHolderName << endl;
			cout << "Initial Balance: $" << balance << endl;
		}
		
		void deposite(double ammount)
		{
			cout << "Deposite: $" << ammount << endl;
			balance += ammount;
			cout << "New Balance: $" << balance << endl;
		}
		
		void withdraw(double ammount)
		{
			cout << "Withdrawn: $" << ammount << endl;
			balance -= ammount;
			cout << "New Balance: $" << balance << endl;
		}
};

int main()
{
	BankAccount Account1;
	BankAccount Account2;
	
	Account1.Account(12345, "Alice", 100);
	Account2.Account(67890, "Bob", 200);
	
	cout << "Account 1:\n";
	Account1.displayAccInfo();
	cout << endl;
	
	Account1.deposite(50);
	cout << endl;
	Account1.withdraw(30);
	cout << endl;

	cout << "Account 2: \n";
	Account2.displayAccInfo();
	cout << endl;
	
	Account2.deposite(75);
	cout << endl;
	Account2.withdraw(100);
	
	
	return 0;
}
