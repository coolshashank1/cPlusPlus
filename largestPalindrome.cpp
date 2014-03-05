/*
 * largestPalindrome.cpp
 *
 *  Created on: Feb 27, 2014
 *      Author: shashank Ashtikar
 *
 *      This program prints the biggest palindrome in the char array
 */

#include<iostream>
#include<string.h>

using namespace std;

bool checkPalindrome(char *, int, int);

int mainLargestPal()

{


	char a[100];
	cout<<"Please enter the string";
	cin>>a;

	int length = strlen(a);

	bool flag=false;

	for (int i=0;i<length-1;i++)
	{
		for (int j=0;j<=i;j++)
		{
			if (checkPalindrome(a,j,length-(i-j)-1))
			{
				cout<<"\nThe biggest palindrome is: ";
				for (int k=j;k<=(length-(i-j));k++)
				{
					cout<<a[k];
				}
				flag=true;
				break;
			}
		}
	if (flag){break;}
	}
if (!flag)
{
	cout<<"No Palindromes in the string";
}
}



bool checkPalindrome(char *a, int start, int end)
{
	if (end-start==2&&(a[start]==a[end]))
	{
		return true;

	}

	if (a[start]==a[end]){
		checkPalindrome(a, start+1, end-1);
	}
	else{
	return false;}

}
