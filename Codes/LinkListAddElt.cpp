/*-----Singly Connected Linklist-----*/

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
		
		void addFront(int n)
		{
			node *temp = new node;
			temp -> data = n;
			temp -> next = NULL;
			if(head == NULL)
			{
				head = tail = temp;
			}
			else
			{
				temp -> next = head;
				head = temp;
			}
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
		
		void showList()
		{
			node *temp = new node;
			temp = head;
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
	
//	list1.addFront(1);
//	list1.addFront(2);
//	list1.addFront(3);

	int n;
	cout << "How many elements you want to add in front: \n";
	cin >> n;
	cout << "Enter the elements in front: \n";
	int elt = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> elt;
		list1.addFront(elt);
	}
	
	cout << "How many elements you want to add in back: \n";
	cin >> n;
	cout << "Enter the elements in back: \n";
	for(int i = 0; i < n; i++)
	{
		cin >> elt;
		list1.addBack(elt);
	}
	
	cout << "After adding elements complete list is: \n";
	list1.showList();
	
	return 0;	
}
