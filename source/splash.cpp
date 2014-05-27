#include "header.h"

movableObject splashbackground = {0, 390, 0,0, -1, 1280, 780};
movableObject splashbackground2 = {1280, 390, 0,0, -1, 1280, 780};
movableObject splashoverlay = {0, 390, 0,0, -1, 1280, 780};
movableObject splashoverlay2 = {1280, 390, 0,0, -1, 1280, 780};

movableObject ship = {-200, 390, 0, 0, -1 , 50, 50};

movableObject huge = {3300, 390, 0, 0, -1 , 50, 50};
movableObject title = {-1000, -1000, 0, 0, -1 , 50, 50};

movableObject enemyOne = {1000, 192, 0, 0, -1 , 50, 50};
movableObject bulletOne = {-1000, -1000, 0, 0, -1 , 50, 50};
movableObject explodeOne = {-1000, -1000, 0, 0, -1 , 50, 50};

movableObject enemyTwo = {800, 390, 0, 0, -1 , 50, 50};
movableObject bulletTwo = {-1000, -1000, 0, 0, -1 , 50, 50};
movableObject explodeTwo = {-1000, -1000, 0, 0, -1 , 50, 50};

movableObject enemyThree = {1070, 588, 0, 0, -1 , 50, 50};
movableObject bulletThree = {-1000, -1000, 0, 0, -1 , 50, 50};
movableObject explodeThree = {-1000, -1000, 0, 0, -1 , 50, 50};

bool bshootOne = false;
bool bshootTwo = false;
bool bshootThree = false;
bool bexplodeOne = false;
bool bexplodeTwo = false;
bool bexplodeThree = false;

void animateenemyOne()
{
static int icount = 0;
static int FrameA = -1;
static int FrameB = -1;
static int FrameC = -1;
static int FrameD = -1;
static int FrameE = -1;

static bool IsFirstRun = true;

	if (IsFirstRun )
	{
		FrameA = CreateSprite("./images/enemy1/enemy1.png", 50, 50, true);
		FrameB = CreateSprite("./images/enemy1/enemy2.png", 52, 37, true);
		FrameC = CreateSprite("./images/enemy1/enemy3.png", 52, 24, true);
		FrameD = CreateSprite("./images/enemy1/enemy4.png", 52, 37, true);
		FrameE = CreateSprite("./images/enemy1/enemy5.png", 52, 52, true);
		IsFirstRun = false;
	}
	icount = icount + 1;
	
	if (icount >= 0 && icount <19)
	{
		enemyOne.sprite = FrameA;
		MoveSprite(enemyOne.sprite, enemyOne.position.x, enemyOne.position.y);
	}
	if (icount >= 20 && icount <39)
	{
		enemyOne.sprite = FrameB;
		MoveSprite(enemyOne.sprite, enemyOne.position.x, enemyOne.position.y);
	}
	if (icount >= 40 && icount <59)
	{
		enemyOne.sprite = FrameC;
		MoveSprite(enemyOne.sprite, enemyOne.position.x, enemyOne.position.y);
	}
	if (icount >= 60 && icount <79)
	{
		enemyOne.sprite = FrameD;
		MoveSprite(enemyOne.sprite, enemyOne.position.x, enemyOne.position.y);
	}
	if (icount >= 80 && icount <99)
	{
		enemyOne.sprite = FrameE;
		MoveSprite(enemyOne.sprite, enemyOne.position.x, enemyOne.position.y);
	}
	if (icount >= 100 && icount <119)
	{
		enemyOne.sprite = FrameD;
		MoveSprite(enemyOne.sprite, enemyOne.position.x, enemyOne.position.y);
	}
	if (icount >= 120 && icount <139)
	{
		enemyOne.sprite = FrameC;
		MoveSprite(enemyOne.sprite, enemyOne.position.x, enemyOne.position.y);
	}
	if (icount >= 140 && icount <159)
	{
		enemyOne.sprite = FrameB;
		MoveSprite(enemyOne.sprite, enemyOne.position.x, enemyOne.position.y);
	}
	if (icount >= 160)
	{
		icount = 0;
	}
}
void animateenemyTwo()
{
static int icount = 0;
static int FrameA = -1;
static int FrameB = -1;
static int FrameC = -1;
static int FrameD = -1;
static int FrameE = -1;

static bool IsFirstRun = true;

	if (IsFirstRun )
	{
		FrameA = CreateSprite("./images/enemy2/enemy1.png", 50, 50, true);
		FrameB = CreateSprite("./images/enemy2/enemy2.png", 52, 37, true);
		FrameC = CreateSprite("./images/enemy2/enemy3.png", 52, 24, true);
		FrameD = CreateSprite("./images/enemy2/enemy4.png", 52, 37, true);
		FrameE = CreateSprite("./images/enemy2/enemy5.png", 52, 52, true);
		IsFirstRun = false;
	}
	icount = icount + 1;
	
	if (icount >= 0 && icount <19)
	{
		enemyTwo.sprite = FrameA;
		MoveSprite(enemyTwo.sprite, enemyTwo.position.x, enemyTwo.position.y);
	}
	if (icount >= 20 && icount <39)
	{
		enemyTwo.sprite = FrameB;
		MoveSprite(enemyTwo.sprite, enemyTwo.position.x, enemyTwo.position.y);
	}
	if (icount >= 40 && icount <59)
	{
		enemyTwo.sprite = FrameC;
		MoveSprite(enemyTwo.sprite, enemyTwo.position.x, enemyTwo.position.y);
	}
	if (icount >= 60 && icount <79)
	{
		enemyTwo.sprite = FrameD;
		MoveSprite(enemyTwo.sprite, enemyTwo.position.x, enemyTwo.position.y);
	}
	if (icount >= 80 && icount <99)
	{
		enemyTwo.sprite = FrameE;
		MoveSprite(enemyTwo.sprite, enemyTwo.position.x, enemyTwo.position.y);
	}
	if (icount >= 100 && icount <119)
	{
		enemyTwo.sprite = FrameD;
		MoveSprite(enemyTwo.sprite, enemyTwo.position.x, enemyTwo.position.y);
	}
	if (icount >= 120 && icount <139)
	{
		enemyTwo.sprite = FrameC;
		MoveSprite(enemyTwo.sprite, enemyTwo.position.x, enemyTwo.position.y);
	}
	if (icount >= 140 && icount <159)
	{
		enemyTwo.sprite = FrameB;
		MoveSprite(enemyTwo.sprite, enemyTwo.position.x, enemyTwo.position.y);
	}
	if (icount >= 160)
	{
		icount = 0;
	}
}
void animateenemyThree()
{
static int icount = 0;
static int FrameA = -1;
static int FrameB = -1;
static int FrameC = -1;
static int FrameD = -1;
static int FrameE = -1;

static bool IsFirstRun = true;

	if (IsFirstRun )
	{
		FrameA = CreateSprite("./images/enemy3/enemy1.png", 50, 50, true);
		FrameB = CreateSprite("./images/enemy3/enemy2.png", 52, 37, true);
		FrameC = CreateSprite("./images/enemy3/enemy3.png", 52, 24, true);
		FrameD = CreateSprite("./images/enemy3/enemy4.png", 52, 37, true);
		FrameE = CreateSprite("./images/enemy3/enemy5.png", 52, 52, true);
		IsFirstRun = false;
	}
	icount = icount + 1;
	
	if (icount >= 0 && icount <19)
	{
		enemyThree.sprite = FrameA;
		MoveSprite(enemyThree.sprite, enemyThree.position.x, enemyThree.position.y);
	}
	if (icount >= 20 && icount <39)
	{
		enemyThree.sprite = FrameB;
		MoveSprite(enemyThree.sprite, enemyThree.position.x, enemyThree.position.y);
	}
	if (icount >= 40 && icount <59)
	{
		enemyThree.sprite = FrameC;
		MoveSprite(enemyThree.sprite, enemyThree.position.x, enemyThree.position.y);
	}
	if (icount >= 60 && icount <79)
	{
		enemyThree.sprite = FrameD;
		MoveSprite(enemyThree.sprite, enemyThree.position.x, enemyThree.position.y);
	}
	if (icount >= 80 && icount <99)
	{
		enemyThree.sprite = FrameE;
		MoveSprite(enemyThree.sprite, enemyThree.position.x, enemyThree.position.y);
	}
	if (icount >= 100 && icount <119)
	{
		enemyThree.sprite = FrameD;
		MoveSprite(enemyThree.sprite, enemyThree.position.x, enemyThree.position.y);
	}
	if (icount >= 120 && icount <139)
	{
		enemyThree.sprite = FrameC;
		MoveSprite(enemyThree.sprite, enemyThree.position.x, enemyThree.position.y);
	}
	if (icount >= 140 && icount <159)
	{
		enemyThree.sprite = FrameB;
		MoveSprite(enemyThree.sprite, enemyThree.position.x, enemyThree.position.y);
	}
	if (icount >= 160)
	{
		icount = 0;
	}
}
void animateexplodeOne()
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
	if (bexplodeOne == true)
	{
		icount = icount + 1;
		{
		if (icount >= 0 && icount <19)
		{
			explodeOne.sprite = FrameA;
			MoveSprite(explodeOne.sprite,explodeOne.position.x,explodeOne.position.y);
		}
		if (icount >= 10 && icount <39)
		{
			explodeOne.sprite = FrameB;
			MoveSprite(explodeOne.sprite,explodeOne.position.x,explodeOne.position.y);
		}
		if (icount >= 20 && icount <59)
		{
			explodeOne.sprite = FrameC;
			MoveSprite(explodeOne.sprite,explodeOne.position.x,explodeOne.position.y);
		}
		if (icount >= 30 && icount <79)
		{
			explodeOne.sprite = FrameD;
			MoveSprite(explodeOne.sprite,explodeOne.position.x,explodeOne.position.y);
		}
		if (icount >= 40 && icount <99)
		{
			explodeOne.sprite = FrameE;
			MoveSprite(explodeOne.sprite,explodeOne.position.x,explodeOne.position.y);
		}
		if (icount >= 50 && icount <119)
		{
			explodeOne.sprite = FrameF;
			MoveSprite(explodeOne.sprite,explodeOne.position.x,explodeOne.position.y);
		}
	
		if (icount >= 120)
		{
			icount = 0;
			bexplodeOne = false;
		}
		
		}
	}
}
void animateexplodeTwo()
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
	if (bexplodeTwo == true)
	{
		icount = icount + 1;
		{
		if (icount >= 0 && icount <19)
		{
			explodeTwo.sprite = FrameA;
			MoveSprite(explodeTwo.sprite,explodeTwo.position.x,explodeTwo.position.y);
		}
		if (icount >= 10 && icount <39)
		{
			explodeTwo.sprite = FrameB;
			MoveSprite(explodeTwo.sprite,explodeTwo.position.x,explodeTwo.position.y);
		}
		if (icount >= 20 && icount <59)
		{
			explodeTwo.sprite = FrameC;
			MoveSprite(explodeTwo.sprite,explodeTwo.position.x,explodeTwo.position.y);
		}
		if (icount >= 30 && icount <79)
		{
			explodeTwo.sprite = FrameD;
			MoveSprite(explodeTwo.sprite,explodeTwo.position.x,explodeTwo.position.y);
		}
		if (icount >= 40 && icount <99)
		{
			explodeTwo.sprite = FrameE;
			MoveSprite(explodeTwo.sprite,explodeTwo.position.x,explodeTwo.position.y);
		}
		if (icount >= 50 && icount <119)
		{
			explodeTwo.sprite = FrameF;
			MoveSprite(explodeTwo.sprite,explodeTwo.position.x,explodeTwo.position.y);
		}
	
		if (icount >= 120)
		{
			icount = 0;
			bexplodeTwo = false;
			
		}
		
		}
	}
}
void animateexplodeThree()
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
	if (bexplodeThree == true)
	{
		icount = icount + 1;
		{
		if (icount >= 0 && icount <19)
		{
			explodeThree.sprite = FrameA;
			MoveSprite(explodeThree.sprite,explodeThree.position.x,explodeThree.position.y);
		}
		if (icount >= 10 && icount <39)
		{
			explodeThree.sprite = FrameB;
			MoveSprite(explodeThree.sprite,explodeThree.position.x,explodeThree.position.y);
		}
		if (icount >= 20 && icount <59)
		{
			explodeThree.sprite = FrameC;
			MoveSprite(explodeThree.sprite,explodeThree.position.x,explodeThree.position.y);
		}
		if (icount >= 30 && icount <79)
		{
			explodeThree.sprite = FrameD;
			MoveSprite(explodeThree.sprite,explodeThree.position.x,explodeThree.position.y);
		}
		if (icount >= 40 && icount <99)
		{
			explodeThree.sprite = FrameE;
			MoveSprite(explodeThree.sprite,explodeThree.position.x,explodeThree.position.y);
		}
		if (icount >= 50 && icount <119)
		{
			explodeThree.sprite = FrameF;
			MoveSprite(explodeThree.sprite,explodeThree.position.x,explodeThree.position.y);
		}
	
		if (icount >= 120)
		{
			icount = 0;
			bexplodeThree = false;
			
		}
		
		}
	}
}
void initSplash()
{
	splashbackground.sprite = CreateSprite( "./images/background/back.png", SCREEN_X, SCREEN_Y, true );
	splashbackground2.sprite = CreateSprite( "./images/background/back.png", SCREEN_X, SCREEN_Y, true );
	splashoverlay.sprite = CreateSprite( "./images/background/backoverlay.png", SCREEN_X, SCREEN_Y, true );
	splashoverlay2.sprite = CreateSprite( "./images/background/backoverlay.png", SCREEN_X, SCREEN_Y, true );
	enemyOne.sprite = CreateSprite( "./images/enemy1/enemy1.png", 50, 50, true );
	enemyTwo.sprite = CreateSprite( "./images/enemy2/enemy1.png", 50, 50, true );
	enemyThree.sprite = CreateSprite( "./images/enemy3/enemy1.png", 50, 50, true );
	bulletOne.sprite = CreateSprite( "./images/laser.png", 8, 8, true );
	bulletTwo.sprite = CreateSprite( "./images/laser.png", 8, 8, true );
	bulletThree.sprite = CreateSprite( "./images/laser.png", 8, 8, true );
	explodeOne.sprite = CreateSprite( "./images/explode/explode0.png", 36, 36, true );
	explodeTwo.sprite = CreateSprite( "./images/explode/explode0.png", 36, 36, true );
	explodeThree.sprite = CreateSprite( "./images/explode/explode0.png", 36, 36, true );
	ship.sprite = CreateSprite( "./images/player/playerr.png",  96, 46, true );
	huge.sprite = CreateSprite( "./images/player/huge.png",  2600, 1235, true );
	title.sprite = CreateSprite( "./images/title1.png", 800, 338, true );

	MoveSprite(splashbackground.sprite,-1000, -1000);
	MoveSprite(splashbackground2.sprite,-1000, -1000);
	MoveSprite(splashoverlay.sprite,-1000, -1000);
	MoveSprite(splashoverlay2.sprite,-1000, -1000);
	MoveSprite(enemyOne.sprite,-1000, -1000);
	MoveSprite(enemyTwo.sprite,-1000, -1000);
	MoveSprite(enemyThree.sprite,-1000, -1000);
	MoveSprite(bulletOne.sprite,-1000, -1000);
	MoveSprite(bulletTwo.sprite,-1000, -1000);
	MoveSprite(bulletThree.sprite,-1000, -1000);
	MoveSprite(explodeOne.sprite,-1000, -1000);
	MoveSprite(explodeTwo.sprite,-1000, -1000);
	MoveSprite(explodeThree.sprite,-1000, -1000);
	MoveSprite(ship.sprite,-1000, -1000);
	MoveSprite(huge.sprite, 3300, 390);
	MoveSprite(title.sprite,-1000, -1000);

	MoveSprite(ship.sprite, ship.position.x, ship.position.y);
	MoveSprite(enemyOne.sprite, enemyOne.position.x, enemyOne.position.y);
	MoveSprite(enemyTwo.sprite, enemyTwo.position.x, enemyTwo.position.y);
	MoveSprite(enemyThree.sprite, enemyThree.position.x, enemyThree.position.y);
	MoveSprite(bulletOne.sprite, bulletOne.position.x, bulletOne.position.y);
	MoveSprite(bulletTwo.sprite, bulletTwo.position.x, bulletTwo.position.y);
	MoveSprite(bulletThree.sprite, bulletThree.position.x, bulletThree.position.y);
	MoveSprite(huge.sprite, huge.position.x, huge.position.y);
}
void moveall()
{	
	MoveSprite(splashbackground.sprite,-1000, -1000);
	MoveSprite(splashbackground2.sprite,-1000, -1000);
	MoveSprite(splashoverlay.sprite,-1000, -1000);
	MoveSprite(splashoverlay2.sprite,-1000, -1000);
	MoveSprite(enemyOne.sprite,-1000, -1000);
	MoveSprite(enemyTwo.sprite,-1000, -1000);
	MoveSprite(enemyThree.sprite,-1000, -1000);
	MoveSprite(bulletOne.sprite,-1000, -1000);
	MoveSprite(bulletTwo.sprite,-1000, -1000);
	MoveSprite(bulletThree.sprite,-1000, -1000);
	MoveSprite(explodeOne.sprite,-1000, -1000);
	MoveSprite(explodeTwo.sprite,-1000, -1000);
	MoveSprite(explodeThree.sprite,-1000, -1000);
	MoveSprite(ship.sprite,-1000, -1000);
	MoveSprite(huge.sprite,-1000, -1000);
	MoveSprite(title.sprite,-1000, -1000);
}
void destroySplash()
{
	DestroySprite(splashbackground.sprite);
	DestroySprite(splashbackground2.sprite);
	DestroySprite(splashoverlay.sprite);
	DestroySprite(splashoverlay2.sprite);
	DestroySprite(enemyOne.sprite);
	DestroySprite(enemyTwo.sprite);
	DestroySprite(enemyThree.sprite);
	DestroySprite(bulletOne.sprite);
	DestroySprite(bulletTwo.sprite);
	DestroySprite(bulletThree.sprite);
	DestroySprite(explodeOne.sprite);
	DestroySprite(explodeTwo.sprite);
	DestroySprite(explodeThree.sprite);
	DestroySprite(ship.sprite);
	DestroySprite(huge.sprite);
	DestroySprite(title.sprite);
}
void animatesplashback()
{
splashbackground.position.x = splashbackground.position.x - .5;
splashbackground2.position.x = splashbackground2.position.x - .5;
splashoverlay.position.x = splashoverlay.position.x - 2;
splashoverlay2.position.x = splashoverlay2.position.x - 2;
MoveSprite(splashbackground.sprite, splashbackground.position.x, 390);
MoveSprite(splashbackground2.sprite, splashbackground2.position.x, 390);
MoveSprite(splashoverlay.sprite, splashoverlay.position.x, 390);
MoveSprite(splashoverlay2.sprite, splashoverlay2.position.x, 390);

if (splashbackground.position.x <= -640)
{
splashbackground.position.x = 1920;
MoveSprite(splashbackground.sprite, splashbackground.position.x, 390);
}


if (splashbackground2.position.x <= -640)
{
splashbackground2.position.x = 1920;
MoveSprite(splashbackground2.sprite, splashbackground.position.x, 390);
}

if (splashoverlay.position.x <= -640)
{
splashoverlay.position.x = 1920;
MoveSprite(splashoverlay.sprite, splashoverlay.position.x, 390);
}

if (splashoverlay2.position.x <= -640)
{
splashoverlay2.position.x = 1920;
MoveSprite(splashoverlay2.sprite, splashoverlay2.position.x, 390);
}
}
void animateship()
{
	static int FrameA = -1;
	static int FrameB = -1;
	static int FrameC = -1;
	static bool IsFirstRun = true;
	
	if (IsFirstRun )
	{
		FrameA = CreateSprite("./images/player/playeru.png", 100, 35, true);
		FrameB = CreateSprite("./images/player/playerd.png", 100, 45, true);
		FrameC = CreateSprite("./images/player/playerrb.png", 98,46, true);
		IsFirstRun = false;
	}

	if (ship.position.x <=199)
	{
	ship.position.x = ship.position.x + 1;
	MoveSprite(ship.sprite, ship.position.x, ship.position.y);
	}
	if (ship.position.x >=200 && ship.position.x <= 299)
	{
	ship.sprite = FrameA;
	ship.position.x = ship.position.x + 1;
	ship.position.y = ship.position.y - 2;
	MoveSprite(ship.sprite, ship.position.x, ship.position.y);
	}
	if (ship.position.x >= 300 && ship.position.x <=499)
	{
	ship.sprite = FrameB;
	ship.position.x = ship.position.x + 1;
	ship.position.y = ship.position.y + 2;
	MoveSprite(ship.sprite, ship.position.x, ship.position.y);
	}
	if (ship.position.x >=500 && ship.position.x <=599)
	{
	ship.sprite = FrameA;
	ship.position.x = ship.position.x + 1;
	ship.position.y = ship.position.y - 2;
	MoveSprite(ship.sprite, ship.position.x, ship.position.y);
	}
	if (ship.position.x >=600)
	{
	ship.sprite = FrameC;
	ship.position.x = ship.position.x + 3;
	MoveSprite(ship.sprite, ship.position.x, ship.position.y);
	}
	if (ship.position.x >= 1500)
	{
	huge.position.x = huge.position.x - 15;
	MoveSprite(huge.sprite, huge.position.x, huge.position.y);
	}
	if (huge.position.x == 645)
	{
		MoveSprite(title.sprite, 640, 390);
	}
}
void enter(bool &bSplashActive)
{
	if (IsKeyDown(32))
	{
		bSplashActive = false;
	}
}
void shootshots()
{
	if (ship.position.x == 100)
	{
		bulletOne.position.x = ship.position.x + 50;
		bulletOne.position.y = ship.position.y-2;
		MoveSprite (bulletOne.sprite, ship.position.x + 5, ship.position.y-2);
	}
	if (ship.position.x == 301)
	{
		bulletTwo.position.x = ship.position.x + 50;
		bulletTwo.position.y = ship.position.y-2;
		MoveSprite (bulletTwo.sprite, ship.position.x + 50, ship.position.y-2);
	}
	if (ship.position.x == 501)
	{
		bulletThree.position.x = ship.position.x + 50;
		bulletThree.position.y = ship.position.y-2;
		MoveSprite (bulletThree.sprite, ship.position.x + 5, ship.position.y-2);
	}
} // 192, 588
void movebullets()
{
	bulletOne.position.x = bulletOne.position.x + 5;
	bulletTwo.position.x = bulletTwo.position.x + 5;
	bulletThree.position.x = bulletThree.position.x + 5;
	MoveSprite(bulletOne.sprite, bulletOne.position.x, bulletOne.position.y+3);
	MoveSprite(bulletTwo.sprite, bulletTwo.position.x, bulletTwo.position.y+3);
	MoveSprite(bulletThree.sprite, bulletThree.position.x, bulletThree.position.y+3);

	if (bulletOne.position.x >= 790 && bulletOne.position.y >= 0)
	{
		static bool first = true;
		if (first)
		{
		MoveSprite(explodeOne.sprite,enemyTwo.position.x,enemyTwo.position.y);
		explodeOne.position.x = enemyTwo.position.x;
		explodeOne.position.y = enemyTwo.position.y;
		bexplodeOne = true;
		first = false;
		}

		MoveSprite(bulletOne.sprite,-1000, -1000);
		MoveSprite(enemyTwo.sprite,-1000, -1000);
		enemyTwo.position.x = -1000;
		enemyTwo.position.y = -1000;
	}
	if (bulletTwo.position.x >= 990 && bulletTwo.position.y >= 0)
	{
		static bool first = true;
		if (first)
		{
		MoveSprite(explodeTwo.sprite,enemyOne.position.x,enemyOne.position.y);
		explodeTwo.position.x = enemyOne.position.x;
		explodeTwo.position.y = enemyOne.position.y;
		bexplodeTwo = true;
		first = false;
		}

		MoveSprite(bulletTwo.sprite,-1000, -1000);
		MoveSprite(enemyOne.sprite,-1000, -1000);
		enemyOne.position.x = -1000;
		enemyOne.position.y = -1000;
	}
	if (bulletThree.position.x >=1060 && bulletThree.position.y >= 0)
	{
		static bool first = true;
		if (first)
		{
		MoveSprite(explodeThree.sprite,enemyThree.position.x,enemyThree.position.y);
		explodeThree.position.x = enemyThree.position.x;
		explodeThree.position.y = enemyThree.position.y;
		bexplodeThree = true;
		first = false;
		}

		MoveSprite(bulletThree.sprite,-1000, -1000);
		MoveSprite(enemyThree.sprite,-1000, -1000);
		enemyThree.position.x = -1000;
		enemyThree.position.y = -1000;
	}
}
void updateSplash(bool &bSplashActive, bool &bgamerunning, bool &bshooterrunning)
{
	enter(bSplashActive);
	shootshots();
	movebullets();
	animateship();
	animatesplashback();
	animateenemyOne();
	animateenemyTwo();
	animateenemyThree();
	animateexplodeOne();
	animateexplodeTwo();
	animateexplodeThree();
}
void drawSplash()
{
	DrawSprite(splashbackground.sprite);
	DrawSprite(splashbackground2.sprite);
	DrawSprite(splashoverlay.sprite);
	DrawSprite(splashoverlay2.sprite);
	DrawSprite(title.sprite);
	DrawSprite(bulletOne.sprite);
	DrawSprite(bulletTwo.sprite);
	DrawSprite(bulletThree.sprite);
	DrawSprite(enemyOne.sprite);
	DrawSprite(enemyTwo.sprite);
	DrawSprite(enemyThree.sprite);
	DrawSprite(explodeOne.sprite);
	DrawSprite(explodeTwo.sprite);
	DrawSprite(explodeThree.sprite);
	DrawSprite(ship.sprite);
	DrawSprite(huge.sprite);

}