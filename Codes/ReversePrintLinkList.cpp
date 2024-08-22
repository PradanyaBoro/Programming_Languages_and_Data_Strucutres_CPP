#include<iostream>
using namespace std;

// Defines a structure for a node in the linked list
struct node
{
    int data;       // Stores data in the node
    node* next;     // Points to the next node
};

// Defines a class for a linked list
class Linkedlist
{
private:
    node* head; // Points to the head (start) of the linked list

public:
    // Initializes the linked list with an empty list
    Linkedlist()
    {
        head = NULL;
    }

    // Adds an element to the front of the linked list
    void addfront()
    {
        node* temp = new node(); // Creates a new node
        int n;
        cin >> n; // Reads the integer input from the user
        temp->data = n; // Sets the data in the new node
        temp->next = head; // Makes the new node point to the current head
        head = temp; // Updates the head to the new node
    }

    // Displays the elements in the linked list
    void showlist()
    {
        node* temp = new node(); // Creates a temporary node
        temp = head; // Sets the temporary node to the head of the list
        while (temp != NULL)
        {
            cout << temp->data << " "; // Displays the data in the current node
            temp = temp->next; // Moves to the next node
        }
        cout << endl; // Prints a newline to separate the elements
    }
    
    void rev_pt()
    {
    	node * i = new node();
    	i = head;
    	int arr[50];
    	int j = 0;
    	while(i != NULL)
    	{
    		arr[j] = i -> data;
    		j++;
    		i = i -> next;
		}
		for(int i = j - 1; i >= 0; i--)
		{
			cout << arr[i] << " ";
		}
	}

};

int main()
{
    Linkedlist list; // Creates an instance of the Linkedlist class

    int n;
    cout << "Enter how many elements you want to add infront: \n"; // Prompts for the number of elements to add
    cin >> n; // Reads the number of elements from the user

    cout << "Enter the elements: \n"; // Prompts for element values
    for (int i = 0; i < n; i++)
    {
        list.addfront(); // Adds elements to the front of the linked list
    }
    cout << "\nYour linked list is: \n"; // Displays the initial linked list
    list.showlist();
	
	cout << "Reverse: \n";
    list.rev_pt();

    return 0; // Returns 0 to indicate successful program completion
}

