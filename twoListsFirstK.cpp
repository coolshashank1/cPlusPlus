/*
 * twoListsFirstK.cpp
 *
 *  Created on: Mar 4, 2014
 *      Author: Shashank Ashtikar
 *
 *      This program finds out the Kth element from the beginning in 2 sorted lists
 */

#include<iostream>
#include<cstdlib>

using namespace std;

int first[]={10,11,12,16,17,20,100};
int second[] = {13,14,15,18,19,200};
int k;

void printFirstK(int *, int *);

int mainTwo()
{
	cout<<"Enter K";
	cin>>k;
	if (first[0]<second[0])
		{
			printFirstK(first, second);
		}
	else
	{
		printFirstK(second,first);
	}

}

void printFirstK(int *f, int *s)
{
if(k<1)
{
	return;
}

	if(*f<*s)
	{
		cout<<*f<<"\t";
		k--;
		printFirstK(f+1,s);
	}
	else
	{
		cout<<*s<<"\t";
		k--;
		printFirstK(f,s+1);
	}


}






