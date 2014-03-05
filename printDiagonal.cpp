/*
 * printDiagonal.cpp
 *
 *  Created on: Mar 3, 2014
 *      Author: Shashank Ashtikar
 *
 *      Diagonally print the data present in a 2D matrix
 *
 */

#include<iostream>
#include<fstream>

using namespace std;

void diagPrint(int, int);

int mapper[4][4]={
		{1,2,3,4},
		{5,6,7,8},
		{5,2,7,1},
		{1,4,3,7}
				};
ofstream myFile;


void diagPrint(int i, int j)
{
	if(j>3||i<0)
	{
		return;
	}
	else
	{
		diagPrint(i-1,j+1);
		myFile<<mapper[i][j]<<"\t";
	}
}

int mainDiagonal()
{
	myFile.open("diagonalPrint.txt");
	myFile<<"The original Matrix: \n\n";

	for (int i=0;i<4;i++)
	{
		for (int j=0;j<4;j++)
		{
			myFile<<mapper[i][j]<<"\t";
		}
		myFile<<"\n";
	}

	myFile<<"\n\n";

	for (int i=0;i<4;i++)
	{
		diagPrint(i,0);
		myFile<<"\n";
	}
}
