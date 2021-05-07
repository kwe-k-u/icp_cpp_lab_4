#include "cylindricalBlocks.h"
#include "sqrBaseRectBlocks.h"


cylindricalBlocks::cylindricalBlocks()
	: sqrBaseRectBlocks{} {}


cylindricalBlocks::cylindricalBlocks(int diameter, int h)
	: sqrBaseRectBlocks{ diameter, diameter, h} {}

