#pragma once
class RectBlocks
{
private:
	int h; //height
	int w; //width
	int l; //lenght


public:
	int getHeight();
	int getWidth();
	int getLenght();

	RectBlocks();
	RectBlocks(int height, int width, int length);
};

