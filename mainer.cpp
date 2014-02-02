/*
 * mainer.cpp
 *
 *  Created on: Jan 2, 2014
 *      Author: shashank
 */

#include <iostream>
#include <cstdio>
#include <string.h>


int main_anagram()
{
	char str1[20], str2[20];

	std::cout<<"Please enter the first string";
	std::cin>>str1;

	std::cout<<"Please enter the second string";
	std::cin>>str2;

	if (!(strlen(str1)==strlen(str2)))
	{
std::cout<<"The strings are not anagrams because the lengths are different";
	return 0;
	}

	int count = strlen(str1);
	int count_temp=count;
	int flag=0;


	for (int i=0;i<count;i++)
	{
		for (int j=0;j<count;j++)
		{
			if ((str1[i] == str2[j]) && (flag==0))
			{
				count_temp--;
				str2[j]='#';
				flag=1;
			}
			flag=0;
		}


	}

	if (count_temp==0)
	{
	std::cout<<"The two strings are anagrams";
	}
	else
	{
	std::cout<<"The strings are not anagrams of each other";
	}
}



