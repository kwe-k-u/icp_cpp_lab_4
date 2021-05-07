#include<iostream>
#include "sqrBaseRectBlocks.h"
#include "cylindricalBlocks.h"
using namespace std;

cylindricalBlocks::cylindricalBlocks()
	: sqrBaseRectBlocks{} {}


cylindricalBlocks::cylindricalBlocks(int height,int diameter)
	: sqrBaseRectBlocks{ height, diameter } {}


