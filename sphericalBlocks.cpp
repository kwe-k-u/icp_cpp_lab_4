#include "sphericalBlocks.h"
#include "cuboidBlocks.h"


sphericalBlocks::sphericalBlocks()
	: cuboidBlocks{} {}



sphericalBlocks::sphericalBlocks(int d)
	: cuboidBlocks{d,d,d} {}


double sphericalBlocks::getSurfaceArea() {
	return 4 * PI * getWidth() * getWidth();
}


double sphericalBlocks::getVolume() {
	return (4 * PI * getWidth() * getWidth() * getWidth())/3;
}
