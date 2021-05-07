#pragma once
#ifndef CYLINDRICALBLOCKS_H
#define CYLINDRICALBLOCKS_H

#include "sqrBaseRectBlocks.h"

class cylindricalBlocks: public sqrBaseRectBlocks{
public:
	cylindricalBlocks();
	cylindricalBlocks(int le, int h);
	double getSurfaceArea();

private:
	double PI = 3.142;
};


#endif // !CYLINDRICALBLOCKS_H