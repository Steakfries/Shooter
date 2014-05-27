#include "header.h"
#include "Globals.h"
void AnimateEnemyOne(movableObject &enemy)
{
	static int icount = 0;
	static int FrameA = -1;
	static int FrameB = -1;
	static int FrameC = -1;
	static int FrameD = -1;
	static int FrameE = -1;

	static bool IsFirstRun = true;

	if (IsFirstRun)
	{
		FrameA = CreateSprite("./images/enemy1/enemy1.png", 50, 50, true);
		FrameB = CreateSprite("./images/enemy1/enemy2.png", 52, 37, true);
		FrameC = CreateSprite("./images/enemy1/enemy3.png", 52, 24, true);
		FrameD = CreateSprite("./images/enemy1/enemy4.png", 52, 37, true);
		FrameE = CreateSprite("./images/enemy1/enemy5.png", 52, 52, true);
		IsFirstRun = false;
	}
	
	// increment icount
	icount = icount + 1;
	
	if (icount >= 0 && icount <19)
	{
		enemy.sprite = FrameA;
	}
	if (icount >= 20 && icount <39)
	{
		enemy.sprite = FrameB;
	}
	if (icount >= 40 && icount <59)
	{
		enemy.sprite = FrameC;
	}
	if (icount >= 60 && icount <79)
	{
		enemy.sprite = FrameD;
	}
	if (icount >= 80 && icount <99)
	{
		enemy.sprite = FrameE;
	}
	if (icount >= 100 && icount <119)
	{
		enemy.sprite = FrameD;
	}
	if (icount >= 120 && icount <139)
	{
		enemy.sprite = FrameC;
	}
	if (icount >= 140 && icount <159)
	{
		enemy.sprite = FrameB;
	}
	if (icount >= 160)
	{
		icount = 0;
	}
}
void AnimateEnemyTwo(movableObject &enemy)
{
	static int icount = 0;
	static int FrameA = -1;
	static int FrameB = -1;
	static int FrameC = -1;
	static int FrameD = -1;
	static int FrameE = -1;

	static bool IsFirstRun = true;

	if (IsFirstRun)
	{
		FrameA = CreateSprite("./images/enemy2/enemy1.png", 50, 50, true);
		FrameB = CreateSprite("./images/enemy2/enemy2.png", 52, 37, true);
		FrameC = CreateSprite("./images/enemy2/enemy3.png", 52, 24, true);
		FrameD = CreateSprite("./images/enemy2/enemy4.png", 52, 37, true);
		FrameE = CreateSprite("./images/enemy2/enemy5.png", 52, 52, true);
		IsFirstRun = false;
	}
	
	// increment icount
	icount = icount + 1;
	
	if (icount >= 0 && icount <19)
	{
		enemy.sprite = FrameA;
	}
	if (icount >= 20 && icount <39)
	{
		enemy.sprite = FrameB;
	}
	if (icount >= 40 && icount <59)
	{
		enemy.sprite = FrameC;
	}
	if (icount >= 60 && icount <79)
	{
		enemy.sprite = FrameD;
	}
	if (icount >= 80 && icount <99)
	{
		enemy.sprite = FrameE;
	}
	if (icount >= 100 && icount <119)
	{
		enemy.sprite = FrameD;
	}
	if (icount >= 120 && icount <139)
	{
		enemy.sprite = FrameC;
	}
	if (icount >= 140 && icount <159)
	{
		enemy.sprite = FrameB;
	}
	if (icount >= 160)
	{
		icount = 0;
	}
}
void AnimateEnemyThree(movableObject &enemy)
{
	static int icount = 0;
	static int FrameA = -1;
	static int FrameB = -1;
	static int FrameC = -1;
	static int FrameD = -1;
	static int FrameE = -1;

	static bool IsFirstRun = true;

	if (IsFirstRun)
	{
		FrameA = CreateSprite("./images/enemy3/enemy1.png", 50, 50, true);
		FrameB = CreateSprite("./images/enemy3/enemy2.png", 52, 37, true);
		FrameC = CreateSprite("./images/enemy3/enemy3.png", 52, 24, true);
		FrameD = CreateSprite("./images/enemy3/enemy4.png", 52, 37, true);
		FrameE = CreateSprite("./images/enemy3/enemy5.png", 52, 52, true);
		IsFirstRun = false;
	}
	
	// increment icount
	icount = icount + 1;
	
	if (icount >= 0 && icount <19)
	{
		enemy.sprite = FrameA;
	}
	if (icount >= 20 && icount <39)
	{
		enemy.sprite = FrameB;
	}
	if (icount >= 40 && icount <59)
	{
		enemy.sprite = FrameC;
	}
	if (icount >= 60 && icount <79)
	{
		enemy.sprite = FrameD;
	}
	if (icount >= 80 && icount <99)
	{
		enemy.sprite = FrameE;
	}
	if (icount >= 100 && icount <119)
	{
		enemy.sprite = FrameD;
	}
	if (icount >= 120 && icount <139)
	{
		enemy.sprite = FrameC;
	}
	if (icount >= 140 && icount <159)
	{
		enemy.sprite = FrameB;
	}
	if (icount >= 160)
	{
		icount = 0;
	}
}
void animateback()
{
back.position.x = back.position.x - .5;
back2.position.x = back2.position.x - .5;
overlay.position.x = overlay.position.x - 2;
overlay2.position.x = overlay2.position.x - 2;
MoveSprite(back.sprite, back.position.x, 390);
MoveSprite(back2.sprite, back2.position.x, 390);
MoveSprite(overlay.sprite, overlay.position.x, 390);
MoveSprite(overlay2.sprite, overlay2.position.x, 390);
if (back.position.x <= -640)
{
back.position.x = 1920;
MoveSprite(back.sprite, back.position.x, 390);
}
if (back2.position.x <= -640)
{
back2.position.x = 1920;
MoveSprite(back2.sprite, back2.position.x, 390);
}
if (overlay.position.x <= -640)
{
overlay.position.x = 1920;
MoveSprite(overlay.sprite, overlay.position.x, 390);
}
if (overlay2.position.x <= -640)
{
overlay2.position.x = 1920;
MoveSprite(overlay2.sprite, overlay2.position.x, 390);
}
}
void animateexplode()
{
static int icount = 0;
	static int FrameA = -1;
	static int FrameB = -1;
	static int FrameC = -1;
	static int FrameD = -1;
	static int FrameE = -1;
	static int FrameF = -1;
	static bool IsFirstRun = true;
	if (IsFirstRun )
	{
		FrameA = CreateSprite("./images/explode/explode0.png", 36, 36, true);
		FrameB = CreateSprite("./images/explode/explode1.png", 72, 72, true);
		FrameC = CreateSprite("./images/explode/explode2.png", 84, 84, true);
		FrameD = CreateSprite("./images/explode/explode3.png", 87, 87, true);
		FrameE = CreateSprite("./images/explode/explode4.png", 90, 87, true);
		FrameF = CreateSprite("./images/explode/explode5.png", 90, 87, true);
		IsFirstRun = false;
	}
	if (bexplode == true)
	{
		icount = icount + 1;
		{
		if (icount >= 0 && icount <19)
		{
			explode.sprite = FrameA;
		}
		if (icount >= 10 && icount <39)
		{
			explode.sprite = FrameB;
		}
		if (icount >= 20 && icount <59)
		{
			explode.sprite = FrameC;
		}
		if (icount >= 30 && icount <79)
		{
			explode.sprite = FrameD;
		}
		if (icount >= 40 && icount <99)
		{
			explode.sprite = FrameE;
		}
		if (icount >= 50 && icount <119)
		{
			explode.sprite = FrameF;
		}
	
		if (icount >= 120)
		{
			icount = 0;
			bexplode = false;
		}
		
		}
	}
}