
#include "sqrBaseRectBlocks.h"
#include "cuboidBlocks.h"


cuboidBlocks::cuboidBlocks()
	: sqrBaseRectBlocks{} {}


cuboidBlocks::cuboidBlocks(int height, int width, int length)
	: sqrBaseRectBlocks{ height, width, length } {}