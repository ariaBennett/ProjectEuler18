//By starting at the top of the triangle below and moving to adjacent numbers 
//	on the row below, the maximum total from top to bottom is 23.
//
//3
//7 4
//2 4 6
//8 5 9 3
//
//That is, 3 + 7 + 4 + 9 = 23.
//
//Find the maximum total from top to bottom of the triangle below:
//
//
//NOTE: As there are only 16384 routes, it is possible to solve this problem 
//	  by trying every route. However, Problem 67, is the same challenge 
//	  with a triangle containing one-hundred rows; it cannot be solved by
//	  brute force, and requires a clever method! ;o)

#include "stdafx.h"
#include <iostream>
#include <array>

using namespace std;

void pause()
{
	cin.clear();
	cin.ignore(255, '\n');
	cin.get();
}

void getPath(int &path1, int &path2, const int &start)
{

}


int _tmain(int argc, _TCHAR* argv[])
{
	//  1485 is the maximum possible number assuming 99 for every number
	//  with 15 rows.
	//  The program starts from this number and counts backwards, looking
	//  for potential paths that will satisfy the current number it is
	//  searching for.

int row1[] = {75};
int row2[] = {95, 64};
int row3[] = {17, 47, 82};
int row4[] = {18, 35, 87, 10};
int row5[] = {20, 4, 82, 47, 65};
int row6[] = {19, 1, 23, 75, 3, 34};
int row7[] = {88, 2, 77, 73, 07, 63, 67};
int row8[] = {99, 65, 4, 28, 06, 16, 70, 92};
int row9[] = {41, 41, 26, 56, 83, 40, 80, 70, 33};
int row10[] = {41, 48, 72, 33, 47, 32, 37, 16, 94, 29};
int row11[] = {53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14};
int row12[] = {70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57};
int row13[] = {91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48};
int row14[] = {63, 66, 4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31};
int row15[] = {4, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23};

	//for (int i = 1485; i > 0; i--)
	//{
	//	int buffer = 0;
	//	int tolerance = 1485 - i;	


	//	cout << buffer << endl;

	//}

for (int i = 0; i < sizeof(row1); i++)
{

}

cout << sizeof(row15)/4;

	pause();
	return 0;
}

