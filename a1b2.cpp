/*
 * a1b2.cpp
 *
 *  Created on: Mar 10, 2014
 *      Author: shashank
 */

#include<iostream>

using namespace std;

void swapper(char *, char *);
char *adjust(char *);

int maina1b2()
{
    char str[] = "a1b2c3d4";
    cout<<"Before\n";
    char *result = adjust(str);

   cout<<"\nPrinting the result: ";


    while(*result)
    {

       cout<<*result;
       result++;
    }
    cout<<"\n";

}

char *adjust(char *a)
{

if (*(a+3))
{
    swapper(a+1,a+2);
    adjust(a+4);

}

return a;

}

void swapper (char *one, char *two)
{
   char temp;
   temp = *one;
   *one =*two;
   *two=temp;

}



