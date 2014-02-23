/*
 * Oregion.cpp
 *
 *  Created on: Feb 15, 2014
 *      Author: shashank
 *      This program appeared in careercup.com for Google interview
 *      The question's URL is :http://www.careercup.com/question?id=5727310284062720
 */

#include<iostream>

using namespace std;

int mainOregion()
{
int dimension;

cout<<"Please enter the dimensions of the matrix";
cin>>dimension;
int area[dimension][dimension];
for (int i=0;i<dimension;i++)
{
	for (int j=0;j<dimension;j++)
	{
		cout<<"Enter the value for the cell number: "<<i<<","<<j;
		cin>>area[i][j];
	}
}

}


