/*
 * isSurrounded.cpp
 *
 *  Created on: Mar 2, 2014
 *      Author: Shashank Ashtikar
 *
 *      This program marks all the surrounded regions as 9
 *
 *      For example a 2d matrix that represents the geography ass follows:
 *
 *      1  1  1  1  1
 *      1  0  0  0  1
 *      1  0  0  0  1
 *      1  0  0  0  1
 *      1  1  1  1  1
 *
 *      with an output as:
 *
 *      1  1  1  1  1
 *      1  9  9  9  1
 *      1  9  9  9  1
 *      1  9  9  9  1
 *      1  1  1  1  1
 *
 *
 *      where 0 represents land and 1 represents water. Hence to find an island in an ocean, the
 *      following algorithm will be useful.
 *
 */

#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

void printSurrounded(int, int);
bool vertical_validation(int , int);

int geography[5][5]={
		{1,1,1,1,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,0,0,0,1},
		{1,1,1,1,1}
};

int mainSurrounded(){

	for (int i=0;i<5;i++)
	{
		for (int j=0;j<5;j++)
		{
			printSurrounded(i,j);
		}
	}

ofstream myFile;
myFile.open("regionMap.txt");
for (int i=0;i<5;i++)
	{
		for (int j=0;j<5;j++)
		{
			myFile<<"\t"<<geography[i][j];
		}
		myFile<<"\n";
	}


}

void printSurrounded(int horizontal, int vertical)
{
	if (geography[horizontal][vertical]!=0){
		return;
	}

	if (geography[horizontal][vertical]==0 && horizontal!=4 && horizontal!=0)
	{
		if (vertical_validation(horizontal,vertical)){
			printSurrounded(horizontal+1,vertical);
		}
	}
	else
	{
		return;
	}
}

bool vertical_validation(int hz,int index)
{
	if (index==0||index==4)
	{
		return false;
	}
	else
	{
		if (index!=3)
		{
			vertical_validation(hz,index+1);
			geography[hz][index]=9;
		}
		else
		{
			geography[hz][index]=9;
			return true;
		}
	}
}


