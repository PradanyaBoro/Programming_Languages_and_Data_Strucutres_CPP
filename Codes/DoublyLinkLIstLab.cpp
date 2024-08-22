/*-----Doubly Connected Linklist------*/

#include<iostream>
using namespace std;

// Defines a structure for a doubly linked list node
struct node
{
	int data;
	node *next;  // Points to the next node
	node *prev;  // Points to the previous node
};

// Creates a class for a doubly linked list
class doublyLinkList
{
	private:
		node *head;  // Points to the first node
		node *tail;  // Points to the last node
	public:
		// Constructs the class to initialize the head and tail pointers
		doublyLinkList()
		{
			head = NULL;
			tail = NULL;
		}
		
		// Adds a new node to the back of the list
		void addback(int n)
		{
			// Creates a new node
			node *temp = new node;
			temp -> data = n;
			temp -> prev = NULL;
			temp -> next = NULL;
			
			// Checks if the list is empty
			if(tail == NULL)
			{
				// If it's empty, sets both head and tail to the new node
				head = tail = temp;
			}
			else
			{
				// If it's not empty, updates the links to insert the new node at the back
				temp -> prev = tail;
				tail -> next = temp;
				tail = temp;
			}
		}
		
		// Displays the elements in the list
		void showList()
		{
			// Creates a temporary node to traverse the list
			node *temp = new node;
			temp = head;
			cout << "Your linklist is: \n";
			while(temp != NULL)
			{
				// Prints the data in the current node
				cout << temp -> data << " ";
				temp = temp -> next;
			}
			cout << endl;
		}
};

int main()
{
	// Creates an instance of the doubly linked list class
	doublyLinkList list;
	
	int n;
	cout << "Enter how many elements you want to add in the back: \n";
	cin >> n;
	
	cout << "Enter the elements: \n";
	int elt;
	for(int i = 0; i < n; i++)
	{
		// Reads the elements and adds them to the back of the list
		cin >> elt;
		list.addback(elt);
	}
	
	// Displays the contents of the list
	list.showList();
	
	return 0;
}

