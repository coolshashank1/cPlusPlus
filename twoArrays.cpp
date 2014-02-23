/*
 * twoArrays.cpp
 *
 *  Created on: Feb 22, 2014
 *      Author: shashank
 *
 *      This program is about finding the kth element from the end for two sorted arrays
 */

#include<iostream>
#include<cstdlib>

using namespace std;

int mainTwo()
{
	int array1[20], array2[20];
	int size;
	int k;

	cout<<"\nPlease enter the dimensions of the array";
	cin>>size;


	cout<<"\nPlease enter the first array";

	for (int i=0;i<size;i++)
	{
		cout<<"\nEnter the value for cell number"<<i;
		cin>>array1[i];
	}

	cout<<"\nPlease enter the second array";


	for (int i=0;i<size;i++)
		{
		cout<<"\nEnter the value for cell number"<<i;
			cin>>array2[i];
		}

cout<<"\nThis is the program for finding the kth smallest element";
cout<<"\nPlease enter the value of K";
cin>>k;

if (k>size)
{
	cout<<"\nThe value of K cannot be more than the size";
	exit(1);

}

int count=k;

for (int p=size-1;(p>0&&count>0);p--)
{
if (array2[p]>array1[size])
{
	count--;
}
else
{
	break;
}

}
if (count==0)
{
cout<<"The kth small element is: "<<array2[size-k];
}
else
{
	cout<<"The kth small element is: "<<array1[size-count];
}

}


