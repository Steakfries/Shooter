#include "bullet.h"

bullet::bullet()
{
	//set whatever the fuck you like
	isActive = false;
}

bullet::~ bullet()
{
}

float bullet::GetVelocityX()
{
	return Velocity.GetVectorX();
}

float bullet::GetVelocityY()
{
	return Velocity.GetVectorY();
}

float bullet::GetPosX()
{
	return Pos.GetVectorX();
}

float bullet::GetPosY()
{
	return Pos.GetVectorY();
}

float bullet::GetDimensionsX()
{
	return Dimensions.GetVectorX();
}

float bullet::GetDimensionsY()
{
	return Dimensions.GetVectorY();
}
float bullet::GetIsActive()
{
	return isActive;
}
int bullet::GetSprite()
{
	return iSprite;
}





void bullet::SetVelocityX(float newVelocityX)
{
	Velocity.SetVectorX(newVelocityX);
}
void bullet::SetVelocityY(float newVelocityY)
{
	Velocity.SetVectorY(newVelocityY);
}
void bullet::SetPosX(float newPosX)
{
	Pos.SetVectorX(newPosX);
}
void bullet::SetPosY(float newPosY)
{
	Pos.SetVectorY(newPosY);
}
void bullet::SetDimensionsX(float newDimensionsX)
{
	Dimensions.SetVectorX(newDimensionsX);
}
void bullet::SetDimensionsY(float newDimensionsY)
{
	Dimensions.SetVectorX(newDimensionsY);
}
void bullet::SetSprite(int newSprite)
{
	iSprite = newSprite;
}
void bullet::SetIsActive(bool newisActive)
{
	isActive = newisActive;
}