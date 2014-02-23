/*
 * basicRecur.cpp
 *
 *  Created on: Feb 16, 2014
 *      Author: shashank
 *
 *      Basic recursion program.
 */
#include<iostream>
using namespace std;

class initial
{
public:
int fact(int);
initial()
	{

	}
};

int initial::fact(int n)
{
	int prod=1;
	if (n<=1)
	{
		return 1;
	}

	if (n>0)
	{
		prod=n*fact(n-1);
	}

	return prod;
}

int main_recur()
{
 initial in;
 cout<<"the result is: "<<endl<<in.fact(5);
}
