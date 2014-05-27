//////////////////////////////////////////////////////////////////////////
//Brandon Foote
//Shmup project
//last edit: 10.13.13
//	- comments
//////////////////////////////////////////////////////////////////////////
#define _USE_MATH_DEFINES
#include "header.h"
#include "splash.h"
#include "title.h"
#include "animations.h"
#include "Globals.h"
#include "collision_checks.h"
#include "PLayer_Functions.h"
#include "Update_Enemies.h"
bullet PlayerBullet; //creates a bullet called PlayerBullet
void drawwin() //draws win screen
{
	if (g_win)
	{
		DrawSprite(win);
		MoveSprite(win, 640, 390);
		if (IsKeyDown(KEY_SPECIAL+38)) // enter key
		{
			iplayerlives = 5;
			g_gameOver = false; // new game
			player1score = 0;
			iboostCharge = 10000;
		}

		if (IsKeyDown('F'))
		{
			bshooterrunning = false; // exit game
		}
	}
	else
	{
		MoveSprite(win, -640, -390); // moves sprite off screen to avoid deleting it on new game
	}
}
void drawgameover() // draws game over sprite
{
	if (g_gameOver)
	{
		DrawSprite(gg);
		MoveSprite(gg, 640, 390);
		if (IsKeyDown(KEY_SPECIAL+38))// enter key
		{
			iplayerlives = 5;
			g_gameOver = false;// new game
			player1score = 0;
			iboostCharge = 10000;
		}

		if (IsKeyDown('F'))
		{
			bshooterrunning = false;// exit game
		}
	}
	else
	{
		MoveSprite(gg, -640, -390);// moves sprite off screen to avoid deleting it on new game
	}
}
void cheat()
{ 
	static int idelay = 100;
	static int ifueldelay = 15;
	if (IsKeyDown('8') && iplayerlives >=0 && idelay == 100)// Deletes a life
	{
	iplayerlives = iplayerlives - 1;
	idelay = 0;
	}
	if (IsKeyDown('9') && iplayerlives <=5 && idelay == 100)// adds a life
	{
	iplayerlives = iplayerlives + 1;
	idelay = 0;
	}
	static bool fuelcheat = false;

	if (IsKeyDown('F') && ifueldelay == 15 && iboostCharge < 10000)//Fuel cheat
	{
		fuelcheat = true;
		ifueldelay = 0;
	}
	if (fuelcheat == true && ifueldelay == 15)
	{
	iboostCharge = iboostCharge + 1000;
	ifueldelay = 0;
	}
	if (idelay <100)
	{
	idelay = idelay +1;
	}
	if (ifueldelay <15)
	{
	ifueldelay = ifueldelay +1;
	}
	//score cheats
	if (IsKeyDown(KEY_SPECIAL+59))
	{
		player1score = player1score + 1000;
	}
	if (IsKeyDown(KEY_SPECIAL+62))
	{
		player1score = player1score - 1000;
	}
	if (player1score<=0)
	{
		player1score = 0;
	}

}
void updateGame()
{
		animateexplode();
		AnimateEnemyOne(enemy);
		AnimateEnemyTwo(enemy2);
		AnimateEnemyThree(enemy3);
		drawgameover();
		drawwin();
		animateback();
		if (isplayeralive) // so player cant move or shoot until rewpawned
		{
			moveplayer(player1);
			pshoot(PlayerBullet);
		}
		else
		{
			respawnplayer(player1);
		}
		updatecharge();
		cheat();
		updateEnemyPosition(enemy);
		updateEnemy2Position(enemy2);
		updateEnemy3Position(enemy3);
		updateLaserPosition(PlayerBullet);
		//collision checks
		if(LaserEnemyCollision(PlayerBullet, enemy) == true)  
		{
			ilaser = 0;
			ienemy =0;
		}
		if(LaserEnemy2Collision(PlayerBullet, enemy2) == true)  
		{
			ilaser = 0;
			ienemy2 =0;
		}
		if(LaserEnemy3Collision(PlayerBullet, enemy3) == true)  
		{
			ilaser = 0;
			ienemy3 =0;
		}
		if(PlayerEnemyCollision(player1, enemy) && isplayeralive)  
		{
			ienemy =0;
		}
		if(PlayerEnemy2Collision(player1, enemy2) && isplayeralive)  
		{
			ienemy2 =0;
		}
		if(PlayerEnemy3Collision(player1, enemy3) && isplayeralive)  
		{
			ienemy3 =0;
		}
		MoveSprite(player1.sprite, player1.position.x, player1.position.y);
		if (iplayerlives == 0)
		{
			g_gameOver = true;
		}
}
void drawGame()
{
	DrawSprite(back2.sprite);
	DrawSprite(back.sprite);
	DrawSprite(overlay.sprite);
	DrawSprite(overlay2.sprite);
	DrawSprite(player1.sprite);
	DrawSprite(enemy.sprite);
	DrawSprite(enemy2.sprite);
	DrawSprite(enemy3.sprite);
	DrawSprite(border);
	DrawSprite(boostback);
	DrawSprite(boost);
	DrawSprite(charge);
	MoveSprite(PlayerBullet.GetSprite(), PlayerBullet.GetPosX(), PlayerBullet.GetPosY());
	DrawSprite(PlayerBullet.GetSprite() );
	MoveSprite(explode.sprite, explodex, explodey);
	DrawSprite(explode.sprite);
	MoveSprite(enemy2.sprite, enemy2.position.x, enemy2.position.y);
	MoveSprite(enemy3.sprite, enemy3.position.x, enemy3.position.y);
	//draws text at top of screen
	static char outScore1[15] = {'\n'};
	static char scoreline[15] = {'\n'};
	static char highscore[15] = {'\n'};
	static char highscoreline[15] = {'\n'};
	static char outScore2[15] = {'\n'};
	static char otherline[15] = {'\n'};
	sprintf_s(outScore1, "SCORE");
	sprintf_s(outScore2, "LIVES");
	sprintf_s(highscore, "TARGET SCORE");
	sprintf_s(highscoreline, "3000");
	sprintf_s(scoreline, "%d", player1score);
	if (iplayerlives <0)
	{
	iplayerlives = 0;
	}
	if (iplayerlives >5)
	{
	iplayerlives = 5;
	}
	sprintf_s(otherline, "%d", iplayerlives);
	DrawString(outScore1, 50, 30, SColour(0,255,0,255));
	DrawString(scoreline, 50, 60, SColour(0,255,0,255));
	DrawString(highscore, 610, 30, SColour(0,255,0,255));
	DrawString(highscoreline, 610, 60, SColour(0,255,0,255));
	DrawString(outScore2, 1100, 30, SColour(0,255,0,255));
	DrawString(otherline, 1100, 60, SColour(0,255,0,255));
}
void destroyGame() // Destroys all sprites
{
	DestroySprite (boostback);
	DestroySprite (border);
	DestroySprite (back.sprite);
	DestroySprite (back2.sprite);
	DestroySprite (overlay.sprite);
	DestroySprite (overlay2.sprite);
	DestroySprite (player1.sprite);
	DestroySprite (enemy.sprite);
	DestroySprite (laser.sprite);
	DestroySprite (boost);
	DestroySprite (charge);
	DestroySprite (win);
	DestroySprite (gg);
}
void initGame()
{
	//background music
	//static bool IsFirstRun = true;
	//if (IsFirstRun)
	//{
	//	PlaySound ("./sounds/bg.wav", NULL, SND_LOOP|SND_ASYNC);
	//	IsFirstRun = false;
	//}
	srand(time(0));
	PlayerBullet.SetSprite(CreateSprite("./images/laser.png", 8, 8, true));
	gg = CreateSprite( "./images/gg.png", 539, 280, true );
	win = CreateSprite( "./images/win.png", 1080, 390, true );
	border = CreateSprite( "./images/border.png", 1280, 50, true );
	back.sprite = CreateSprite( "./images/background/back.png", 1280, 780, true );
	back2.sprite = CreateSprite( "./images/background/back.png", 1280, 780, true );
	overlay.sprite = CreateSprite( "./images/background/backoverlay.png", 1280, 780, true );
	overlay2.sprite = CreateSprite( "./images/background/backoverlay.png", 1280, 780, true );
	player1.sprite = CreateSprite("./images/player/playerr.png", 100, 100, true);
	laser.sprite = CreateSprite("./images/laser.png", 8, 8, true);
	enemy.sprite = CreateSprite("./images/clear.png", 50, 50, true);
	enemy2.sprite = CreateSprite("./images/clear.png", 50, 50, true);
	enemy3.sprite = CreateSprite("./images/clear.png", 50, 50, true);
	boostback = CreateSprite("./images/boost/back.png", 207, 30, true );	
	boost = CreateSprite("./images/boost/boost.png", 100, 30, true );	
	charge = CreateSprite("./images/boost/boost10.png", 207, 30, true );
	explode.sprite = CreateSprite("./images/clear.png", 36, 36, true);
	MoveSprite(border, 640, 755);
	MoveSprite(back.sprite, 0, 390);
	MoveSprite(back2.sprite, 1280, 390);
	MoveSprite(overlay.sprite, 0, 390);
	MoveSprite(overlay2.sprite, 1280, 390);
	MoveSprite(boostback, 280, 760);
	MoveSprite(boost, 100, 760);
	MoveSprite(charge, 280, 760);
	orb.sprite = CreateSprite("./images/super/orb1.png", 600, 600, true);
	MoveSprite (orb.sprite, 100, 400);
}
int main(int arc, char* argv[])
{
	bool bgame = true;
	while (bgame = true)
	{
	Initialise(SCREEN_X, SCREEN_Y, false );


	while (bgamerunning)
	{
		initSplash();   //-----------Initialize splash screen
		do
		{
			// FrameCounting
			frameCounter++;
			if(frameCounter > 5000)
				frameCounter = 0;
			// Menu Stuff
			ClearScreen(); // empty the screen
			updateSplash(bSplashActive, bgamerunning, bshooterrunning); // update the positions and do logical stuff
			drawSplash();
		}while (FrameworkUpdate() == false && bSplashActive == true);
		initTitle(); //------Initialize title screen
		do
		{
			// FrameCounting shit
			frameCounter++;
			if(frameCounter > 5000)
				frameCounter = 0;
			// Menu Stuff
			ClearScreen(); // empty the screen
			updateTitle(bTitleActive, bgamerunning, bshooterrunning); // update the positions and do logical stuff
			drawTitle();   // put things on the screen
		}while (FrameworkUpdate() == false && bTitleActive == true && bSplashActive == false);
		initGame(); // ----------- Initialize game
		do
		{	
				frameCounter++;
				if(frameCounter > 5000)
				frameCounter = 0;
				if (player1score >=3000)
				{
					g_win = true;
				}
				ClearScreen();
				drawGame();
				updateGame();
			} while ( FrameworkUpdate() == false && bshooterrunning == true);;
		destroyGame();	
		Shutdown();
		return 0;
	}
	}
}