/*
 * stringRecur.cpp
 *
 *  Created on: Feb 22, 2014
 *      Author: shashank
 *
 *      This program will print the string in reverse order using recursion
 */

#include<iostream>

using namespace std;

void recurReverse(char*);

int mainRecur()
{
	char string[5];
	cout<<"Please enter the string to reverse";
	cin>>string;
	recurReverse(string);

}

void recurReverse(char *str)
{
	if (*str)
	{
		recurReverse(str+1);
		cout<<*str;
	}

}
