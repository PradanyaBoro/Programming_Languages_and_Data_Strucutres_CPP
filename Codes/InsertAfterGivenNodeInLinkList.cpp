/*-----Insert after a given node-----*/

#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

class linklist
{
	private:
		node* head;
		node* tail;
	public:
		linklist()
		{
			head = NULL;
			tail = NULL;
		}
		
		void addBack(int n)
		{
			node* temp = new node;
			temp -> data = n;
			temp -> next = NULL;
			if(tail == NULL)
			{
				head = tail = temp;
			}
			else
			{
				tail -> next = temp;
				tail = temp;
			}
		}
		
		void insertAfter(int n, int newData)
		{
			node *ptr = head;
			int index = 1;
			while(ptr != NULL && index < n)
			{
				ptr = ptr -> next;
				index++;
			}
			
			if(ptr == NULL)
			{
				cout << "The list have less than " << n << " elements." << endl;
			}
			else
			{
				node *newNode = new node;
				newNode -> data = newData;
				newNode -> next = ptr -> next;
				ptr -> next = newNode;
			}
			
		}
		
		void showList()
		{
			node *temp = head;
			while(temp != NULL)
			{
				cout << temp -> data << " ";
				temp = temp -> next;
			}
			cout << endl;
		}
};

int main()
{
	linklist list1;
	
	int n;
	cout << "How many elements do you want to add? \n";
	cin >> n;
	
	int elt = 0;
	cout << "Enter the elements: \n";
	for(int i = 0; i < n; i++)
	{
		cin >> elt;
		list1.addBack(elt);
	}
	
	cout << "After adding elements complete list is: \n";
	list1.showList();
	
	cout << "After which number of node you want to insert an elements?" << endl;
	cin >> n;
	cout << "Enter the element you want to insert:\n";
	cin >> elt;
	list1.insertAfter(n, elt);
	cout << "After adding " << elt << ", new list is:\n";
	list1.showList();
	
	return 0;	
}
