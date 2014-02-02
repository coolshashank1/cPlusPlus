/*
 * fibonacci.cpp
 *
 *  Created on: Jan 2, 2014
 *      Author: shashank
 */

#include <iostream>
#include <cstdio>
#include <string.h>

int recur(int x)
{
	int temp=1;

	if (x<=1)
	{
		return 1;
	}

	temp=x*recur(x-1);

	return temp;

}

int main_fib()
{
	int n;
		std::cout<<"Please enter the number";
		std::cin>>n;
		std::cout<<"The factorial is: "<<recur(n);
}

