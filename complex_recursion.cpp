/*
 * complex_recursion.cpp
 *
 *  Created on: Feb 16, 2014
 *      Author: shashank
 */

#include<iostream>
#include<cstdlib>

using namespace std;

int isSurrounded(int[], int, int );

int isSurrounded(int arr[],int num, int len)
{

	int counter=0;
	if (num==len || arr[num]==1)
	{
		return 0;
	}
	if (arr[num]==0)
	{

		counter+=isSurrounded(arr,num+1,len);

		cout<<arr[num];
		return counter;
	}
	return 0;

}


int maiCOmplexn()
{
	int array[20];
	int size;
	cout<<"Please enter the array size";
	cin>>size;
	if (size>20)
	{
		size=20;
		cout<<"Max 20 elements allowed";
	}
	for (int i=0;i<size;i++)
	{
	cin>>array[i];
	}

	int length;
	length = sizeof(array)/sizeof(*array);
for(int p=0;p<length;p++){
	p+=isSurrounded(array,0,size);

}

}



