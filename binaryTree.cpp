/*
 * binaryTree.cpp
 *
 *  Created on: Mar 10, 2014
 *      Author: Shashank Ashtikar
 *
 *      This is a complete implementation of a binary search tree in C++
 *
 *
 */

#include<iostream>
#include<cstdlib>

using namespace std;

struct node{
		int data;
		node *left;
		node *right;
	} *root;

class binaryTree{



public:

	binaryTree()
	{
		root=NULL;

	}

void insert(node *,int);
bool search(node *,int);
bool isBST(node *);
void deleteElement(int);
void printTree(node *);


};

void binaryTree::insert(node *rt, int x)
{
	if (rt==NULL)
	{
		rt = new node;
		rt->data = x;
		rt->left = NULL;
		rt->right = NULL;

	}

	else
	{
		if (x>rt->data)
		{
			if(rt->left==NULL)
			{
				node *temp = new node;
				temp->data = x;
				rt->left=temp;
				temp->left=NULL;
				temp->right=NULL;

			}
			else
			{
				insert(rt->left, x);
			}
		}

		else
		{
			if(rt->right==NULL)
			{
				node *temp = new node;
				temp->data = x;

				temp->left=NULL;
				temp->right=NULL;

				rt->right=temp;
			}
			else
			{
				insert(rt->right,x);
			}
		}

	}
}

bool binaryTree::search(node *rt1,int val)
{
if (rt1->data==val)
{
	return true;
}
else if (val>rt1->data)
{
	search(rt1->right, val);
}
else
{
	search(rt1->left,val);
}

if(rt1==NULL)
{
	return false;
}

return false;


}

bool binaryTree::isBST(node *rt3)
{
	if (rt3==NULL)
	{
		return true;
	}

	if (rt3->left!= NULL && rt3->data<rt3->left->data)
	{
		return false;
	}

	if(rt3->right!=NULL && rt3->data >rt3->right->data)
	{
		return false;
	}

	if(!isBST(rt3->left)||!isBST(rt3->right))
	{
		return false;
	}

	return true;


}

void binaryTree::printTree(node *rt4)
{
	cout<<"printing data\n";
	if(rt4==NULL)
	{
		return;
	}
	printTree(rt4->left);
	cout<<"**"<<(rt4->data)<<"\t";

	printTree(rt4->right);
}

int main()
{

binaryTree b;
b.insert(root,25);
b.printTree(root);
}
