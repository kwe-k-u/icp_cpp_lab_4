#include "rectBlocks.h"

int RectBlocks::getHeight() {
	return h;
}


int RectBlocks::getLenght() {
	return l;
}


int RectBlocks::getWidth() {
	return w;
}



RectBlocks::RectBlocks() {

}

RectBlocks::RectBlocks(int height, int width, int length) {
	this->h = height;
	l = length;
	w = width;
}