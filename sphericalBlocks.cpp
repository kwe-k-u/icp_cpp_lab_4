#include "sphericalBlocks.h"
#include "cuboidBlocks.h"


sphericalBlocks::sphericalBlocks()
	: cuboidBlocks{} {}



sphericalBlocks::sphericalBlocks(int d)
	: cuboidBlocks{d,d,d} {}

