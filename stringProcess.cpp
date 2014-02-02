#include<iostream>
#include<string.h>

int mainString()
{
	char character;
	int asc;

	std::cout<<"Please enter the character: ";
	std::cin>>character;
	asc = (int) character;

	std::cout<<"The ASCII value of the character is: "<< asc;

	if ((asc >=48 && asc<=57) || (asc>=65 && asc <=90) || (asc>=97 && asc>=120) )
	{
		std::cout<<"The character is alphanumeric.";
	}
	else
	{
		std::cout<<"The character is not alphanumeric.";
	}
	return 0;
}


/*
 * stringProcess.cpp
 *
 *  Created on: Jan 18, 2014
 *      Author: shashank
 */




