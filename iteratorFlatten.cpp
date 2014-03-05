#include<iostream>
#include<fstream>
#include<cstdlib>
#include <stdlib.h>

using namespace std;

void flatten(char *);
int *arr=0;

int mainFlatten()
{

	char exp[] = "[1,[2,[3,4],5],6]";

	cout<<"before";
	flatten(exp);
	cout<<"after";

}

void flatten(char *a)
{
	if(*a)
	{
		if (*a=='['||*a==']'||*a==',')
		{
			flatten(a+1);
		}
		else
		{

			cout<<*a<<"\t";
            flatten(a+1);

		}
	}

}

