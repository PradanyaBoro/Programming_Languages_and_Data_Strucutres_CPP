#include<iostream>
using namespace std;

class hashing
{
	private:
		int p[500], q[500], h[5], n;
	public:
		hashing()
		{
			n = 0;
			for(int i = 0; i < 5; i++)
			{
				h[i] = -1;
			}
		}
		
		void put(int k)
		{
			p[n] = k;
			int i = k % 5;
			q[n] = h[i];
			h[i] = n;
			n++;
		}
		
		void print(int k)
		{
			int i = h[k];
			cout << "Number with remainder " << k << " are:\n";
			while(i != -1)
			{
				cout << p[i] << " ";
				i = q[i];
			}
		}
		
		void search(int k)
		{
			int i = k % 5;
			int index = h[i];
			while(index != -1)
			{
				if(p[index] == k)
				{
					cout << "Present. \n";
					return;
				}
				index = q[index];
			}
			cout << "Absent. \n";
		}
		
		void del(int k)
		{
			int i = k % 5;
			int index = h[i];
			if(p[h[i]] == k)
			{
				h[i] = q[h[i]];
			}
			else
			{
				while(index != -1)
				{
					int temp = index;
					if(p[q[index]] == k)
					{
						q[index] = q[q[index]];
						return;
					}
					index = q[index];
				}
			}
			cout << k << " is not in the list. \n";
		}
};

int main()
{
	hashing temp;
	int n;
	cout << "Enter num of elements: ";
	cin >> n;	
	cout << "Enter numbers: \n";
	for(int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		temp.put(num);
	}
	
	cout << endl;
	temp.search(19);
	temp.search(20);
	cout << endl;
	
	temp.print(0);
	cout << endl;
	temp.print(1);
	cout << endl;
	temp.print(2);
	cout << endl;
	temp.print(3);
	cout << endl;
	temp.print(4);
	cout << endl;
	
	
	temp.del(15);
	temp.del(19);
	
	temp.print(0);
	cout << endl;
	temp.print(1);
	cout << endl;
	temp.print(2);
	cout << endl;
	temp.print(3);
	cout << endl;
	temp.print(4);
	cout << endl;
	
	return 0;
}
