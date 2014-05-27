#ifndef _BULLET_H_
#define _BULLET_H_
#include "Vector2D.h"
class bullet: public Vector2D
{
private:
	Vector2D Velocity;
	Vector2D Dimensions;
	Vector2D Pos;
	bool isActive;
	int iSprite;

public:
	//ctor - constructor
	bullet();

	//dtor - DEstructor
	~ bullet();
	float GetVelocityX();
	float GetVelocityY();
	float GetPosX();
	float GetPosY();
	float GetDimensionsX();
	float GetDimensionsY();
	float GetIsActive();
	int GetSprite();

	void SetIsActive(bool isActive);
	void SetVelocityX(float newVelocityX);
	void SetVelocityY(float newVelocityY);
	void SetPosX(float newPosX);
	void SetPosY(float newPosY);
	void SetDimensionsX(float newDimensionsX);
	void SetDimensionsY(float newDimensionsX);
	void SetSprite(int newSprite);

};
#endif