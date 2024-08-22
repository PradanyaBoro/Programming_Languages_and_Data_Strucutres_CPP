/*-----Doubly Connected Linklist------*/

#include<iostream>
using namespace std;

struct node
{
	int data;
	
	node *next;
	node *prev;
};

class dLinkList
{
	private:
		node *head;
		node *tail;
	public:
		dLinkList()
		{
			head = NULL;
			tail = NULL;
		}
		void addFront(int n)
		{
			node *temp = new node;
			temp -> data = n;
			temp -> prev = NULL;
			temp -> next = NULL;
			
			if(head == NULL)
			{
				head = tail = temp;
			}
			else
			{
				temp -> next = head;
				head -> prev = temp;
				head = temp;
			}
			
		}
		
		void addBack(int n)
		{
			node *temp = new node;
			temp -> data = n;
			temp -> prev = NULL;
			temp -> next = NULL;
			
			if(tail == NULL)
			{
				head = tail = temp;
			}
			else
			{
				temp -> prev = tail;
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
			
		}
};

int main()
{
	dLinkList list1;
	list1.addFront(2);
	list1.addFront(1);
	list1.addBack(3);
	list1.addBack(4);
	
	list1.showList();
	
	return 0;
}
