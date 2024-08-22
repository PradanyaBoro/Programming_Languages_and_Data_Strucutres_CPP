/*-----Binary Tree-------*/

#include<iostream>
#include<queue>
using namespace std;

class node
{
	public:
	int data;
	node * left;
	node * right;
	void info(int p, node * l, node * r)
	{
		data = p;
		left = l;
		right = r;
	}
};

class Tree
{
	public:
		node * root;
		node a, b, c, d, e, f, g, h, i, j, k;
		Tree()
		{
			root = &f;
			a.info(12, &h, &c);
			f.info(36, &g, &e);
			g.info(42, NULL, &a);
			h.info(57, NULL, NULL);
			c.info(62, &i, &j);
			i.info(74, NULL, NULL);
			j.info(24, NULL, NULL);
			e.info(17, &b, &k);
			b.info(81, NULL, NULL);
			k.info(53, &d, NULL);
			d.info(69, NULL, NULL);
		}
		void preOrderTrav(node *x)
		{
			if(x != NULL)
			{
				cout << x -> data << " ";
				preOrderTrav(x -> left);
				preOrderTrav(x -> right);
			}
		}
	
		void postOrderTrav(node *x)
		{
			if(x != NULL)
			{
				postOrderTrav(x -> left);
				postOrderTrav(x -> right);
				cout << x -> data << " ";
			}
		}
		
		void inOrderTrav(node *x)
		{
			if(x != NULL)
			{
				postOrderTrav(x -> left);
				cout << x -> data << " ";
				postOrderTrav(x -> right);
			}
		}
	
		void BreadthOrderTrav(node *x)
		{
			queue<node*> temp;
			temp.push(x);
			while(!temp.empty())
			{
				x = temp.front();
				temp.pop();
				cout << x -> data << " ";
				if(x -> left != NULL)
				{
					temp.push(x -> left);
				}
				if(x -> right != NULL)
				{
					temp.push(x -> right);
				}	
			}
		}		
};

int main()
{
	Tree tree;
	tree.preOrderTrav(tree.root);
	cout << "\n";
	tree.postOrderTrav(tree.root);
	cout << "\n";
	tree.inOrderTrav(tree.root);
	cout << "\n";
	
	tree.BreadthOrderTrav(tree.root);
	cout << "\n";
	
	//tree.DepthOrderTrav(tree.root);
	
	return 0;
}
