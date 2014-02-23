/*
 * stack.cpp
 *
 *  Created on: Feb 1, 2014
 *      Author: shashank
 */
#include<iostream>
#include<cstdlib>

class stack
{
	struct node
	{
		int data;
		node *next;
	} *p, *top;

	stack()
	{
		p=NULL;
		top=NULL;
	}

	~stack()
	{}

public:
	void push(int);
	void pop(int);
	node* sendTop();
	void trace();


};

void stack::push(int data)
{
	if (p==NULL){
		p= new node();
		p->data = data;
		p->next =NULL;
		top=p;
	}
	else
	{
		node *temp;
		temp= new node;
		temp->next=top;
		top = temp;

	}
}


