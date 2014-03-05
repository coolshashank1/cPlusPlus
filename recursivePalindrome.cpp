/*
 * recursivePalindrome.cpp
 *
 *  Created on: Feb 27, 2014
 *      Author: shashank Ashtikar
 *
 *      This program demonstrates how to check if a string is a Palindrome
 */



#include<iostream>
using namespace std;


bool checkPalin(char *, int, int);

int mainPalindrome()
{
	char *a;
	a="aaaaa";
if (checkPalin(a,0,4))
{
	cout<<"A palindrome";
}
else
{
	cout<<"Not a palindrome";
}

}

bool checkPalin(char *a, int start, int end)
{
	if (end-start==2&&(a[start]==a[end]))
	{
		return true;

	}

	if (a[start]==a[end]){
		checkPalin(a, start+1, end-1);
	}
	else{
	return false;}

}


