#include <iostream>  // Include the necessary input/output header.

using namespace std;  // Use the standard C++ namespace.

struct node
{
	int data;        // Define a structure 'node' with an integer 'data' field.
	node* left;      // Pointer to the left child node.
	node* right;     // Pointer to the right child node.
};

class searchTree
{
public:
	node* root;      // Pointer to the root node.
	node a, b, c, d, e, f, g, h;  // Create eight nodes 'a' to 'h'.

	searchTree()
	{
		root = &a;    // Set the root node to 'a'.
		a.data = 5;   // Assign a value of 5 to node 'a'.
		a.left = &b;  // Set 'b' as the left child of 'a'.
		a.right = &c; // Set 'c' as the right child of 'a'.
		b.data = 3;   // Assign a value of 3 to node 'b'.
		b.left = &d;  // Set 'd' as the left child of 'b'.
		b.right = &e; // Set 'e' as the right child of 'b'.
		c.data = 9;   // Assign a value of 9 to node 'c'.
		c.left = &f;  // Set 'f' as the left child of 'c'.
		c.right = &g; // Set 'g' as the right child of 'c'.
		d.data = 1;   // Assign a value of 1 to node 'd'.
		d.left = NULL; // Set 'd' as a leaf node with no left child.
		d.right = NULL; // Set 'd' as a leaf node with no right child.
		e.data = 4;   // Assign a value of 4 to node 'e'.
		e.left = NULL; // Set 'e' as a leaf node with no left child.
		e.right = NULL; // Set 'e' as a leaf node with no right child.
		f.data = 7;   // Assign a value of 7 to node 'f'.
		f.left = NULL; // Set 'f' as a leaf node with no left child.
		f.right = NULL; // Set 'f' as a leaf node with no right child.
		g.data = 12;  // Assign a value of 12 to node 'g'.
		g.left = &h;  // Set 'h' as the left child of 'g'.
		g.right = NULL; // Set 'g' as a leaf node with no right child.
		h.data = 10;  // Assign a value of 10 to node 'h'.
		h.left = NULL; // Set 'h' as a leaf node with no left child.
		h.right = NULL; // Set 'h' as a leaf node with no right child.
	}

	void preOrder(node* n)
	{
		if (n != NULL)
		{
			cout << n->data << " ";  // Print the data of the current node.
			preOrder(n->left);  // Recursively traverse the left subtree.
			preOrder(n->right);  // Recursively traverse the right subtree.
		}
	}
};

int main()
{
	searchTree tree;
	tree.preOrder(tree.root);  // Call the preOrder function to perform a pre-order traversal.

	return 0;  // Return 0 to indicate successful program execution.
}

