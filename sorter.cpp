#include<iostream>
#include<string.h>

int mainSort()
{
	char list[5];
	int size;
	bool flag=false;
	char temp;

	std::cout<<"Please enter the string to be sorted";
	std::cin>>list;

	size = sizeof(list)/sizeof(*list);

	while (flag==false)
	{
		flag = true;
	for (int i=0;i<size-1;i++)
	{

		if ((int) list [i]> (int)list[i+1])
		{
			temp = list[i];
			list [i]= list [i+1];
			list [i+1]=temp;
			flag = false;
		}

	}
	}

	std::cout<"\nThe sorted list is: ";
	for (int p=0;p<size;p++)
	{
		std::cout<<"\n"<<list[p];
	}
	}
/*
 * sorter.cpp
 *
 *  Created on: Jan 19, 2014
 *      Author: shashank
 */




