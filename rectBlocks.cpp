#include "rectBlocks.h"




int rectBlocks::getHeight() {
	return h;
}


int rectBlocks::getLength() {
	return l;
}


int rectBlocks::getWidth() {
	return w;
}



rectBlocks::rectBlocks() {
	h = 0;
	w = 0;
	l = 0;

}

rectBlocks::rectBlocks(int height, int width, int length) {
	this->h = height;
	l = length;
	w = width;
}