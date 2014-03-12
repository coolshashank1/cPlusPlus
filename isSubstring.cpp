/*
 * isSubstring.cpp
 *
 *  Created on: Mar 5, 2014
 *      Author: Shashank Ashtikar
 *
 *      This program determines whether a given string is contained in the other string
 *
 *      Assuming that str1 is the smaller string
 *
 *      If this assumption cannot be made, size of the string can be compared in main and then
 *      the argument order can be changed accordingly (first arg being the smaller string)
 *
 *		The size of the string can be determined as follows:
 *
 *		int size1 = (sizeof(str1)/sizeof(*str1))-1;
 *		int size2 = (sizeof(str2)/sizeof(*str2))-1;
 *
 *		These sizs can be compared and the order of arguments can be changed accordingly
 *
 */

#include<iostream>

using namespace std;

bool isSubstring(char *, char *);

bool flag;
char *init;

int mainSubstr()
{

	char str1[] = "apple";
	char str2[] = "pineapple";

	/*char str2[] = "bnmhjgsadeasdjkasd";*/

	/*Use the comented string given
	 * above for a case when the first
	 * string is not a substring of the second one*/

	init = str1;
	flag=false;

if (isSubstring(str1, str2))
{
	cout<<"\nA substring";
}
else
{
	cout<<"\nNot a substring";
}

}

bool isSubstring(char *s1, char *s2)
{
	if((!*s1)||(!*s2))
	{
		return false;
	}
	if (*s1==*s2)
	{
		if((!(*(s1+1)))&&flag)
		{
			return true;
		}
		else
		{
			flag=true;
			isSubstring(s1+1,s2+1);
		}
	}
	else
	{
		if(flag)
		{
			flag=false;
			isSubstring(init, s2+1);
		}
		else
		{
			isSubstring(s1,s2+1);
		}
	}

}
