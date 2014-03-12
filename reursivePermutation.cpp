/*
 * reursivePermutation.cpp
 *
 *  Created on: Mar 2, 2014
 *      Author: shashank
 *
 *      This program recursively creates permutations of a given string and saves them in a file
 *      namely permutations.txt
 */


#include<iostream>
#include<fstream>

using namespace std;

void recursivePerm(char *, int, int);
void swap(char *, char *);


ofstream permFile;

void recursivePerm(char *a, int start, int end)
{
	if (start==end)
	{
		cout<<"\n"<<a;
		permFile<<"\n"<<a;
	}

	else
	{
		for (int j=start;j<=end;j++)
		{
			swap(a+start,a+j);
			recursivePerm(a,start+1,end);
			swap(a+start,a+j);
		}
	}




}

void swap(char *a, char *b)
{
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int mainRecurPerm123()
{
permFile.open("permutations.txt");
	char s[]="SHASHANK";
recursivePerm(s,0,3);
permFile.close();
}



