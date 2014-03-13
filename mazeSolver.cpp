/*
 * mazeSolver.cpp
 *
 *  Created on: Mar 12, 2014
 *      Author: Shashank Ashtikar
 *
 *      This program prints the number of steps one must take to travel between the initial coordinates and the location that has number 3
 *
 *      One cannot traverse through positions that have 0 in them only 1 or 3 can be walked over
 *
 *      The list of directions to the destination can also be printed. The commented lines that print the direction can be uncommented, but the output
 *      then will read the direction in the reverse order (because of recursive calls) hence these directions can be stored in an array and
 *      read backwards.
 *
 */

#include<iostream>

using namespace std;

bool isVisited ( int , int );
bool isOpen (int, int );
bool isInRange ( int , int );
bool isValid ( int , int );
bool traverse ( int , int );

int height=8;
int width=13;

int maze[8][13] =
{
		{ 1, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1 },
        { 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 1 },
        { 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0 },
        { 1, 1, 1, 3, 1, 1, 1, 0, 1, 0, 1, 1, 1 },
        { 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1 },
        { 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1 },
        { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 }
};

int visited[8][13] = {
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
		{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
};

int count;


int main()
{
	count=0;
	if (traverse(0,0)){
		cout<<"\n\nThe count is: "<<count;
	}
	else
	{
		cout<<"\nNo feasible path";
	}
}

bool isValid(int i, int j)
{
	return ((isOpen(i,j))&&(isInRange(i,j))&&(!isVisited(i,j)));
}


bool isOpen(int i, int j)
{
	return maze[i][j]!=0;
}

bool isVisited(int i, int j)
{
	return visited[i][j]==1;
}

bool isInRange(int i, int j)
{
	if (i>=0 && j>=0 && i<height && j<width)
	{
		return true;
	}
	else
	{
	return false;
	}
}

bool traverse(int i, int j)
{
	if (!isValid(i,j))
	{
		return false;
	}

	if(maze[i][j]==3)
	{
		return true;
	}
	else
	{
		visited[i][j]=1;
	}

	if (traverse(i-1,j))
	{
		//cout<<"\nNorth";
		count++;
		return true;
	}

	if (traverse(i+1,j))
		{
			//cout<<"\nSouth";
			count++;

			return true;
		}

	if (traverse(i,j-1))
		{
			//cout<<"\nWest";
			count++;
			return true;
		}

	if (traverse(i,j+1))
		{
			//cout<<"\nEast";
			count++;
			return true;
		}
	return false;
}





