#include<iostream>
#include<string.h>

int mainSum()
{
	int array[10]={1,2,3,4,5,6,7,-9,0};
	int sum=0;
	int size = sizeof(array)/sizeof(*array);

	for (int i=0;i<size-2;i++)
	{
		for (int j=i+1;j<size-1;j++)
		{
			for (int k=j+1;k<size;k++)
			{
				if (array[i]+array[j]+array[k]==sum)
				{
					std::cout<<"We have a match\t"<<array[i]<<"\t"<<array[j]<<"\t"<<array[k]<<"\t";
				}


			}
		}
	}

}
/*
 * sumToZero.cpp
 *
 *  Created on: Jan 19, 2014
 *      Author: shashank
 */




