#pragma once

#ifndef RECTBLOCKS_H
#define RECTBLOCKS_H



class rectBlocks {
private:
	int h = 0; //height
	int w = 0; //width
	int l = 0; //lenght


public:
	int getHeight();
	int getWidth();
	int getLength();

	rectBlocks();
	rectBlocks(int height, int width, int length);

};


#endif 