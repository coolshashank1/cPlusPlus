#include<iostream>
#include<string.h>

int main_exhaust()
{
	int set [5] ={1,0,0,0,5};
	int sum=0, desired_sum=5;
	int size = sizeof(set)/sizeof(*set);


	for (int i=1;i<=size;i++)
	{
		for (int j=1;j<=size-i+1;j++)
		{
			for (int k=j;k<=(i+j);k++)
			{
				sum+=set[k];
			}
			if (sum==desired_sum)
			{
				std::cout<<"Yes !!!"<<"\n";
			}
			else
			{
				std::cout<<"No ..."<<"\n";
			}
			sum=0;
		}
	}

}
/*
 * exhaustion.cpp
 *
 *  Created on: Jan 19, 2014
 *      Author: shashank
 */




