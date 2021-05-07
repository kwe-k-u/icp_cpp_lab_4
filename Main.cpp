// lab-04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include "rectBlocks.h"
#include "sqrBaseRectBlocks.h"
#include "cuboidBlocks.h"
#include "cylindricalBlocks.h"
#include "sphericalBlocks.h"
using namespace std;


int main()
{
	int objectCount = 0;
	rectBlocks rectArray[20] = {};
	sqrBaseRectBlocks sqrArray[20] = {};
	cuboidBlocks cuboidArray[20] = {};
	cylindricalBlocks cylindricalArray[20] = {};
	sphericalBlocks sphericalArray[20] = {};


	{//memory scope for reading file
		ifstream BlocksFile("dataBlocks.dat");
		string line;

		while (getline(BlocksFile, line)) {

			int firstSpace = line.find_first_of(" "); // index of first delimiter
			int lastSpace = line.find_last_of(" "); // index of second delimiter
			string last = line.substr(firstSpace + 1);
			int h = 0; //height
			int w = 0; //width
			int l = 0; //length


			//getting first number
			w = stoi(line.substr(0, firstSpace));

			//getting last number
			h = stoi(line.substr(lastSpace + 1));

			//middle number
			l = stoi(last.substr(0, last.find(" ")));

			rectArray[objectCount] = rectBlocks(h, w, l);

			//seeking rectBlocks that are squares
			if (h == w) {
				sqrArray[objectCount] = sqrBaseRectBlocks(h, w, l);
			}


			//seeking cuboidBlocks that are squares and making cylinders from them
			if (h == w && w ==l) {
				cuboidArray[objectCount] = cuboidBlocks(h, w, l);
				cylindricalArray[objectCount] = cylindricalBlocks(l, w);
				sphericalArray[objectCount] = sphericalBlocks(w);
			}

		
			
			
			objectCount++;
		}

	}
			
		



}

