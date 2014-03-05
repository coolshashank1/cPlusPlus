/*
 * palindromeCount.cpp
 *
 *  Created on: Mar 5, 2014
 *      Author: Shahsank Ashtikar
 *
 *      This program counts the number of palindromes present in the string
 */

#include<iostream>
#include<string.h>

using namespace std;

bool isPalin(char *,int , int );

int main()
{
	char exp[] = "abcbaxyxpqpkstytblkjhjkl";
	int count=0;
	int  init=0;
	int length = (sizeof(exp)/sizeof(*exp))-1;

	for (int i=0;i<length;i++)
	{
		cout<<"\n";
		for (int j=init;j<=i;j++)
		{

			cout<<"exp[i]="<<exp[i]<<"\texp[j]="<<exp[j]<<endl;
			if(isPalin(exp,j,length-i+j-1))
			{

				count++;
				i=length-i+j;
				init=i;

				cout<<"\n"<<exp[i];
				break;
			}
		}
	}

	cout<<"\nThe number of palindromes in the string is: "<<count;
}


bool isPalin(char *a, int start, int end)
{

	if (end-start==2 && (a[start]==a[end]))
	{
		return true;
	}

	if(a[start]==a[end])
	{
		isPalin(a,start+1,end-1);
	}

	return false;


}



