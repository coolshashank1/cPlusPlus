#include<iostream>
#include<string.h>


int mainDupli()
{
	int array[10]={1,2,3,4,5,7,3,2,4,5};
	int range, index;

	std::cout<<"Please enter the RANGE";
	std::cin>>range;
	std::cout<<"Please enter the index";
	std::cin>>index;

	int size = sizeof(array)/sizeof(*array);
	int start_index = index-range;

	if (start_index<0)
	{
		start_index=0;
	}

	int end_index =index+range;

	if (end_index>size)
	{
		end_index=size;
	}

	for (int i=start_index;i<=end_index;i++)
	{
		if (array[index] == array[i]&&(index!=i))
		{
			std::cout<<"There is a duplicate value in the array";
			return 0;
		}
	}

}
/*
 * finDuplicates.cpp
 *
 *  Created on: Jan 19, 2014
 *      Author: shashank
 */




