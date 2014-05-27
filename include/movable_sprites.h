#ifndef _TITLE_H_
#define _TITLE_H_
#include "vectormath.h"

struct movableObject
{
	vector2 position;
	vector2 speed;
	int sprite;
	int width;
	int height;
	int top;
	int bottom;
	int left;
	int right;
};

#endif