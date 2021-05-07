#include "cylindricalBlocks.h"
#include "sqrBaseRectBlocks.h"


cylindricalBlocks::cylindricalBlocks()
	: sqrBaseRectBlocks{} {}


cylindricalBlocks::cylindricalBlocks(int diameter, int h)
	: sqrBaseRectBlocks{ diameter, diameter, h} {}

double cylindricalBlocks::getSurfaceArea(){
    return 2 * PI * (getWidth()/2) * l;
}
