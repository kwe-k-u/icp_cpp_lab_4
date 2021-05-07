#pragma once
#ifndef SPHERICALBLOCKS_H
#define SPHERICALBLOCKS_H

#include "cuboidBlocks.h"

class sphericalBlocks : public cuboidBlocks{
public:
	sphericalBlocks();
	sphericalBlocks(int diameter);
	double getSurfaceArea();
	double getVolume();

private:
	double PI = 3.142;
};

#endif

