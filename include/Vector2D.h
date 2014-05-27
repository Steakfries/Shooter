#ifndef _VECTOR2D_H_
#define _VECTOR2D_H_

class Vector2D
{
private:
	float x;
	float y;
public:
	float GetVectorX();
	void SetVectorX(float newX);
	// Vector2 myFist
	// myFist.GetVectorX();
	// myFirst.SetVectorX(35);
	float GetVectorY();
	void SetVectorY(float newY);
};

#endif