/*-------Binary Search Tree-------*/

#include<iostream>
using namespace std;

struct node
{
	int data;
	node * left;
	node * right;
};

class SearchTree
{
	public:
		node * root;
		SearchTree()
		{
			root = NULL;
		}
		
		void insert(int d)
		{
			node * pointer, * last_node, * temp = new node();
			
			temp -> data = d;
			temp -> left = NULL;
			temp -> right = NULL;
			
			pointer = root;
			if(root == NULL)
			{
				root = temp;
				return;
			}
			while(pointer != NULL)
			{
				last_node = pointer;
				if(pointer -> data > d)
				{
					pointer = pointer -> left;
				}
				else
				{
					pointer = pointer -> right;
				}
			}
			if(last_node -> data > d)
			{
				last_node -> left = temp;
			}
			else
			{
				last_node -> right = temp;
			}
		}
		void search(int y)
		{
			node * pointer;
			pointer = root;
			while(pointer != NULL )
			{
				if(pointer -> data == y)
				{
					cout << y << " is present. \n";
				}
				else if(pointer -> data > y)
				{
					pointer = pointer -> left;
				}
				else
				{
					pointer = pointer -> right;
				}
			}
			if(pointer == NULL)
			{
				cout << y << " is absent. \n";
			}
		}
		void print(node *k)
		{
			if(k != NULL)
			{
				print(k -> left);
				cout << k -> data << " ";
				print(k -> right);
			}
		}
};

int main()
{
	SearchTree tree;
	int num;
	cout << "How many nodes you want to add? \n";
	cin >> num;
	int data;
	cout << "Enter the nodes: \n";
	for(int i = 0; i < num; i++)
	{
		cin >> data;
		tree.insert(data);
	}
	
	tree.print(tree.root);
	
	return 0;
	
}
