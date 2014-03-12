/*
 * linked_list.cpp
 *
 *  Created on: Feb 1, 2014
 *      Author: shashank Ashtikar
 */

#include<iostream>
#include<stdlib.h>
#include <unistd.h>
#include<ncurses.h>


class list
{
	struct node
	{
		int data;
		node *next;
	} *p;


	public:
	void insbeg(int);
	void inslast(int);
	void insMid(int,int);
	void delbeg();
	void dellast();
	void delMid(int);
	void display();
	void exit_program();
	list()
			{
			p=NULL;
			}

		~list()
		{

		}


};

void list::insbeg(int x)
{
	node *q;

	if (p==NULL)
	{
		p= new node;
		p->data = x;
		p->next=NULL;
	}

	else
	{
		q=p;
		p= new node;
		p->data=x;
		p->next=q;
		std::cout<<"\nData inserted at the beginning of the list";
	}
	display();

}

void list::inslast(int data)
{
	if (p==NULL)
	{
		p= new node;
		p->data=data;
		p->next=NULL;
	}
	else
	{
		node *q;
		q=p;
		while(q->next!=NULL)
		{
			q=q->next;}
			node *r=new node;
			r->data=data;
			r->next=NULL;
			q->next=r;


	}
	display();
}

void list::display()
{

	node *q;
	std::cout<<"\n";
	if (p==NULL)
	{
		std::cout<<"There is no data to display";
	}
	else
	{
		q=p;
		std::cout<<"Displaying the list\n";
	while (q!=NULL)
	{
		std::cout<<(q->data)<<"\t";
		q=q->next;
	} }
}

void list::insMid(int data, int position)
{
	node *q;
	q=p;
	while(position>0 && q->next!=NULL)
	{
		q=q->next;
		position--;
	}
	node *r,*t;
	r=q->next;
	t=new node;
	t->data=data;
	t->next=r;
	q->next=t;
	std::cout<<"\nInsertion successfully done at position number"<<position;
	display();

}

void list::delbeg()
{
	if (p==NULL)
	{
		std::cout<<"\nThere is nothing in the list to delete";
		return;
	}
	else {
	node *q;
	q=p;
	p=p->next;
	delete q;
	std::cout<<"\nThe first element of the list has been deleted";
	display();

	}
}

void list::dellast()
{
	if (p==NULL)
	{
		std::cout<<"\nNo elements in the list to be deleted";
		return;
	}

	else if (p->next==NULL)
	{
		node *q;
		q=p;
		p=p->next;
		delete q;
	}
	else
	{
		node *r;
		r=p;
		while(r->next->next!=NULL)
		{
			r=r->next;
		}
		node *t;
		t=r->next;
		r->next=NULL;
		delete t;

	}
	std::cout<<"\nThe last element of the list has been deleted";
	display();
}

void list::delMid(int pos)
{
	int position=pos;
	node *q;
	q=p;


	while(q->next->next!=NULL && position>1)
	{
		q=q->next;
		position--;
	}

	node *t;
	t=q->next;
	q->next = t->next;
	delete t;
	std::cout<<"Element deleted";
	display();
}

int main78()
{
	int choice;
	int data_to_be_inserted;
	int position;
	list lst;
	std::cout<<"**********Welcome to the Linked List program**********";
	do {
	std::cout<<"\nPlease select one of the options";
	std::cout<<"\n1. Display List \n2. Insert at the beginning \n3. Insert in the middle \n4. Insert in the end \n5. Delete at the beginning \n6. Delete in the middle \n7. Delete at the end \n8. Exit ";
	std::cin>>choice;

	switch(choice)
	{
	case 1:
		lst.display();
		break;
	case 2:
		std::cout<<"\nPlease enter the data to be inserted in the list: ";
		std::cin>>data_to_be_inserted;
		lst.insbeg(data_to_be_inserted);
		break;
	case 3:
		std::cout<<"\nPlease enter the data to be inserted in the list";
		std::cin>>data_to_be_inserted;
		std::cout<<"\nPlease enter the position at which the data needs to be inserted at";
		std::cin>>position;
		lst.insMid(data_to_be_inserted,position);
		break;
	case 4:
		std::cout<<"\nPlease enter the data to be inserted in the list";
		std::cin>>data_to_be_inserted;
		lst.inslast(data_to_be_inserted);
		break;
	case 5:
		std::cout<<"\nAttempting to Delete from the beginning of the list";
		lst.delbeg();
		break;
	case 6:
		std::cout<<"\nPlease enter the position from which data is to be deleted";
		std::cin>>position;
		std::cout<<"\nAttempting to Delete from the middle of the list";
		if (position==1)
		{
			lst.delbeg();
		}
		else{
			lst.delMid(position);
		}
		break;
	case 7:
		std::cout<<"\nAttempting to Delete at the end of the list";
		lst.dellast();
		break;
	case 8:
		std::cout<<"Exiting the program";
		for (int i=0;i<3;i++)
		{
		usleep(999999);
		std::cout<<" .";
		}
		exit(1);
		break;
	default:
		std::cout<<"\nWrong choice. Enter again";
		break;

	}
	} while (choice!=8);


}



