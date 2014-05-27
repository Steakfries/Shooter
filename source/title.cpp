// title functions
#include "header.h"

bool bcursorfly = false; // sets the ship to fly when option is selected on title

movableObject titlepaddle = {
	30,			// pos x
	390,		// pos y
	0,			// spd x
	0,			// spd y
	-1 ,		// sprite
	20,			// width
	150			// height
};
movableObject titleenemy = {800, 590, 0, 0, -1, 20, 150};
movableObject cursor = {300, 435, 0, 0, -1 , 50, 50};
movableObject titlebullet = {640, 590, 2, 1, -1, 50, 50};
movableObject help = {640, 390, 0, 0, -1 , 400, 320};
movableObject titlem = {titlem.position.x, titlem.position.y, 0,0, -1, 1280, 780}; //background
movableObject titlem2 = {1280, 390, 0,0, -1, 1280, 780}; //background 2
movableObject titleoverlay = {0, titlem.position.y, 0,0, -1, 1280, 780};// stars
movableObject titleoverlay2 = {1280, titlem.position.y, 0,0, -1, 1280, 780};// stars 2

int title = -1;


void cursormove(movableObject &cursor, bool &bTitleActive, bool &bgamerunning, bool &bshooterrunning) // moves the cursor
{

	static int iDelay = 0;
		
	if (iDelay == 0)
	{
		if (IsKeyDown('W') && cursor.position.y > 435)  //435 535 635
		{
			cursor.position.y = cursor.position.y - 100; //moves cursor up 
			iDelay = 100;
		}


		if (IsKeyDown('S') && cursor.position.y < 635)
		{
			cursor.position.y = cursor.position.y + 100; // down
			iDelay = 100;
		}
	}
	if (iDelay > 0)
	{
		iDelay = iDelay - 1; // delays cursor movement
	}

	if (IsKeyDown(GLFW_KEY_SPECIAL+38)&& cursor.position.y == 435) //selected option 1
	{
		bcursorfly = true;
	}

	if (IsKeyDown(GLFW_KEY_SPECIAL+38)&& cursor.position.y == 535)//selected option 2
	{
		MoveSprite(help.sprite, 640, 535);
	}

	if (!IsKeyDown(GLFW_KEY_SPECIAL+38))
	{
		MoveSprite(help.sprite, -1000, -1000);
	}

	if (IsKeyDown(GLFW_KEY_SPECIAL+38)&& cursor.position.y == 635)//selected option 3
	{
		bTitleActive = false;
		bgamerunning = false;
		bshooterrunning = false;

	}
}
void cursorfly(movableObject &cursor, bool &bTitleActive) // makes cursor fly off screen
{
	static bool IsFirstRun = true;
	static bool IsFirstRunTwo = true;
	bool move = false;
	static int FrameA = -1;
	static int icount = 0;

	if (IsFirstRun)
	{
		FrameA = CreateSprite("./images/player/playerrb.png", 98, 46, true);
		IsFirstRun = false;
	}

	if (bcursorfly)
	{
		if (IsFirstRunTwo)
		{
			cursor.sprite = FrameA;
			IsFirstRunTwo = false;
		}
		if (icount <100)
		{
			icount = icount + 1;
		}
		if (icount >=100)
		{
			move = true;
		}
		if (move)
		{
			cursor.position.x = cursor.position.x + 10;
		}
	}
	if (cursor.position.x >= 1320)
	{
		bTitleActive = false;
	}

}
void initTitle() // initializes title
{
	titlem.sprite = CreateSprite( "./images/background/back.png", SCREEN_X, SCREEN_Y, true );
	titlem2.sprite = CreateSprite( "./images/background/back.png", SCREEN_X, SCREEN_Y, true );
	titleoverlay.sprite = CreateSprite( "./images/background/backoverlay.png", SCREEN_X, SCREEN_Y, true );
	titleoverlay2.sprite = CreateSprite( "./images/background/backoverlay.png", SCREEN_X, SCREEN_Y, true );
	title = CreateSprite( "./images/background/title.png", SCREEN_X, SCREEN_Y, true );
	MoveSprite(title, SCREEN_X>>1, SCREEN_Y>>1);
	titlepaddle.sprite = CreateSprite( "./images/player/playerr.png", 98, 46, true);
	titleenemy.sprite = CreateSprite( "./images/enemy2/enemy1.png", 50, 50, true );
	titlebullet.sprite = CreateSprite( "./images/title/bullet.png", 80, 50, true );
	cursor.sprite = CreateSprite( "./images/player/playerr.png", 96, 46, true);
	help.sprite = CreateSprite( "./images/title/help.png", 600, 360, true);
}

void destroyTitle()
{
	DestroySprite(title);
	DestroySprite(titlem.sprite);
	DestroySprite(titlem2.sprite);
	DestroySprite(titleoverlay.sprite);
	DestroySprite(titleoverlay2.sprite);
	//DestroySprite(titlepaddle.sprite);
	//DestroySprite(titleenemy.sprite);
	//DestroySprite(titlebullet.sprite);
	//DestroySprite(cursor.sprite);
}

void animatetitleback()
{
titlem.position.x = titlem.position.x - .5;
titlem2.position.x = titlem2.position.x - .5;
titleoverlay.position.x = titleoverlay.position.x - 2;
titleoverlay2.position.x = titleoverlay2.position.x - 2;
MoveSprite(titlem.sprite, titlem.position.x, 390);
MoveSprite(titlem2.sprite, titlem2.position.x, 390);
MoveSprite(titleoverlay.sprite, titleoverlay.position.x, 390);
MoveSprite(titleoverlay2.sprite, titleoverlay2.position.x, 390);

if (titlem.position.x <= -640)
{
titlem.position.x = 1920;
MoveSprite(titlem.sprite, titlem.position.x, 390);
}


if (titlem2.position.x <= -640)
{
titlem2.position.x = 1920;
MoveSprite(titlem2.sprite, titlem2.position.x, 390);
}

if (titleoverlay.position.x <= -640)
{
titleoverlay.position.x = 1920;
MoveSprite(titleoverlay.sprite, titleoverlay.position.x, 390);
}

if (titleoverlay2.position.x <= -640)
{
titleoverlay2.position.x = 1920;
MoveSprite(titleoverlay2.sprite, titleoverlay2.position.x, 390);
}
}
void updateTitle(bool &bTitleActive, bool &bgamerunning, bool &bshooterrunning)
{
	/*testOnTitleScreen(titlebullet);*/
	/*updateTitleBallPosition(titlebullet);*/
	cursormove(cursor, bTitleActive, bgamerunning, bshooterrunning);
	cursorfly(cursor, bTitleActive);
	titlepaddle.position.y = titlebullet.position.y;
	titleenemy.position.y = titlebullet.position.y;
	animatetitleback();
	MoveSprite(titlepaddle.sprite, titlepaddle.position.x, titlepaddle.position.y);
	MoveSprite(titleenemy.sprite, titleenemy.position.x, titleenemy.position.y);
	MoveSprite(titlebullet.sprite, titlebullet.position.x, titlebullet.position.y);
	MoveSprite(cursor.sprite, cursor.position.x, cursor.position.y);
}

void drawTitle()
{
	DrawSprite(titlem.sprite);
	DrawSprite(titlem2.sprite);
	DrawSprite(titleoverlay.sprite);
	DrawSprite(titleoverlay2.sprite);
	DrawSprite(title);
	DrawSprite(cursor.sprite);
	DrawSprite(help.sprite);
	//DrawSprite(titlepaddle.sprite);
	//DrawSprite(titleenemy.sprite);
	//DrawSprite(titlebullet.sprite);
		
}