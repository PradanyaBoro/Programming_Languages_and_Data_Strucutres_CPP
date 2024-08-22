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

    // Deletes the front element of the linked list
    void delfront()
    {
        if (head != NULL)
        {
            head = head->next; // Moves the head to the next node, effectively removing the front element
        }
    }

    // Deletes a specific element with value d from the linked list
    void delnode(int d)
    {
        node* temp = new node(); // Creates a temporary node
        node* point = new node(); // Creates a pointer to keep track of the previous node

        temp = head; // Sets the temporary node to the head
        while (temp->data != d) // Iterates through the list until the data matches the value to delete
        {
            point = temp; // Updates the pointer to the current node
            temp = temp->next; // Moves to the next node
        }
        if (temp == head) // If the element to delete is the first element
        {
            head = head->next; // Updates the head to the next node
        }
        else
        {
            point->next = temp->next; // Updates the previous node's next pointer to skip the node to delete
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

    list.delfront(); // Deletes the front element
    cout << "After deleting the front element, the new list is: \n"; // Displays the modified linked list
    list.showlist();

    int elt;
    cout << "Enter the value you want to delete: \n"; // Prompts for the element value to delete
    cin >> elt; // Reads the element value to delete from the user
    list.delnode(elt); // Deletes the specified element

    cout << "After deleting " << elt << ", the new list is:\n"; // Displays the modified linked list
    list.showlist();

    return 0; // Returns 0 to indicate successful program completion
}

