#include "AIE.h"
#include "header.h"
#include "Globals.h"
#include "Player_Functions.h"
void moveplayer(movableObject& player1)
{
	static bool isFirstRun = true;
	static int playerr = -1;
	static int playerrb = -1;
	static int playeru = -1;
	static int playerub = -1;
	static int playerd = -1;
	static int playerdb = -1;
	if (isFirstRun == true)
	{
	playerr = CreateSprite("./images/player/playerr.png", 98, 46, true);
	playerrb = CreateSprite("./images/player/playerrb.png", 98, 46, true);
	playeru = CreateSprite("./images/player/playeru.png", 100, 36, true);
	playerub = CreateSprite("./images/player/playerub.png", 100, 36, true);
	playerd = CreateSprite("./images/player/playerd.png", 100, 49, true);
	playerdb = CreateSprite("./images/player/playerdb.png", 100, 49, true);
	isFirstRun = false;
	}
	float speed = 1;

	if (!IsKeyDown('W') && !IsKeyDown ('A') && !IsKeyDown ('S') && !IsKeyDown ('D') && player1.position.y >= 74)
	{
		if (IsKeyDown(KEY_SPECIAL+35) && iboostCharge >0)
		{
			player1.sprite = playerrb;
			iplayerMotion = 0;
		}	
		else
		{
			player1.sprite = playerr;
			iplayerMotion = 0;
		}
	}
	if (IsKeyDown('W') && !IsKeyDown ('A') && !IsKeyDown ('S') && !IsKeyDown ('D') && player1.position.y >= 74)
		{
			if (IsKeyDown(KEY_SPECIAL+35) && iboostCharge >0)
			{
				player1.sprite = playerub; //Up + Boost
				player1.position.y = player1.position.y - 3;
				iplayerMotion = 1;
			}
			else
			{			
				player1.sprite = playeru;
				player1.position.y = player1.position.y - 1.75;
				iplayerMotion = 1;
			}
			iplayerDirection = 1;
		}
		if (IsKeyDown('S') && !IsKeyDown ('D') && !IsKeyDown ('A') && !IsKeyDown ('W') && player1.position.y <= 712)
		{
			if (IsKeyDown(KEY_SPECIAL+35) && iboostCharge >0)
			{
				player1.sprite = playerdb; 
				player1.position.y = player1.position.y + 3;
				iplayerMotion = 1;
			}
			else
			{			
				player1.sprite = playerd; 
				player1.position.y = player1.position.y + 1.75;
				iplayerMotion = 1;
			}
			iplayerDirection = 2;
		}
		if (IsKeyDown('A') && !IsKeyDown ('W') && !IsKeyDown ('S') && !IsKeyDown ('D') && player1.position.x >= 69)
		{		
			if (IsKeyDown(KEY_SPECIAL+35) && iboostCharge >0)
			{
				player1.sprite = playerrb;
				player1.position.x = player1.position.x - 3;
				iplayerMotion = 1;
				
			}
			else
			{
				player1.sprite = playerr; 
				player1.position.x = player1.position.x - 1.75;
				iplayerMotion = 1;
			}
			iplayerDirection = 3;
		}	
		if (IsKeyDown('D') && !IsKeyDown('W') && !IsKeyDown ('A') && !IsKeyDown ('S') && player1.position.x <= 1211)
		{		
			if (IsKeyDown(KEY_SPECIAL+35) && iboostCharge >0)
			{
				player1.sprite = playerrb; 
				player1.position.x = player1.position.x + 3;
				iplayerMotion = 1;
			}
			else
			{				
				player1.sprite = playerr; 
				player1.position.x = player1.position.x + 1.75;
				iplayerMotion = 1;
			}
			iplayerDirection = 4;
		}
		if (IsKeyDown('W') && IsKeyDown('D') && player1.position.y >= 74 && player1.position.x <= 1214)
		{
		if (IsKeyDown(KEY_SPECIAL+35) && iboostCharge >0)
			{
				player1.sprite = playerub; 
				player1.position.y = player1.position.y - 3;
				player1.position.x = player1.position.x + 3;
				iplayerMotion = 1;
			}
			else
			{
				player1.sprite = playeru; 
				player1.position.y = player1.position.y - 1.75;
				player1.position.x = player1.position.x + 1.75;
				iplayerMotion = 1;
			}
		iplayerDirection = 5;
		}
		if (IsKeyDown('W') && IsKeyDown('A') && player1.position.y >= 74 && player1.position.x >= 69)
		{		
		if (IsKeyDown(KEY_SPECIAL+35) && iboostCharge >0)
			{
				player1.sprite = playerub; 
				player1.position.y = player1.position.y - 3;
				player1.position.x = player1.position.x - 3;
				iplayerMotion = 1;
			}
			else
			{
				player1.sprite = playeru; 
				player1.position.y = player1.position.y - 1.75;
				player1.position.x = player1.position.x - 1.75;
				iplayerMotion = 1;
			}
		iplayerDirection = 6;
		}
		if (IsKeyDown('S') && IsKeyDown('D') && player1.position.y <= 712 && player1.position.x <= 1214)
		{
			if (IsKeyDown(KEY_SPECIAL+35) && iboostCharge >0)
			{
				player1.sprite = playerdb; 
				player1.position.y = player1.position.y + 3;
				player1.position.x = player1.position.x + 3;
				iplayerMotion = 1;
			}
			else
			{
				player1.sprite = playerd; 
				player1.position.y = player1.position.y + 1.75;
				player1.position.x = player1.position.x + 1.75;
				iplayerMotion = 1;
			}
		iplayerDirection = 7;
		}

		if (IsKeyDown('S') && IsKeyDown('A') && player1.position.y <= 712 && player1.position.x >= 69) //fix 3 button issue
		{		
			if (IsKeyDown(KEY_SPECIAL+35) && iboostCharge >0)
			{
				player1.sprite = playerdb; 
				player1.position.y = player1.position.y + 3;
				player1.position.x = player1.position.x - 3;
				iplayerMotion = 1;
			}
			else
			{
				player1.sprite = playerd; 
				player1.position.y = player1.position.y + 1.75;
				player1.position.x = player1.position.x - 1.75;
				iplayerMotion = 1;
			}
		iplayerDirection = 8;
	}
}
void respawnplayer(movableObject& player1)
{
	static bool isfirstrun = true;
	static int dead = -1;
	static int icount = 0;
	if (isfirstrun)
	{
		dead = CreateSprite("./images/clear.png", 50, 50, true);
		isfirstrun = false;
	}
	if (isplayeralive == false)
	{
		player1.sprite = dead;
		icount = icount + 1;
	}
	if (icount >= 300 && g_gameOver == false)
	{
	isplayeralive = true;
	icount = 0;
	}
}
void pshoot (bullet &theBullet)
{
	static int iDelay = 0;

	if (iDelay == 0)
	{
		if (IsKeyDown(32) && ilaser == 0)
		{
		theBullet.SetPosX(player1.position.x + 5);
		theBullet.SetPosY(player1.position.y);
		MoveSprite(theBullet.GetSprite(), theBullet.GetPosX(), theBullet.GetPosY());
		PlaySound ("./sounds/laser.wav", NULL, SND_ASYNC);
		ilaser = 1;
		iDelay = 50;
		}
	}
	if (iDelay > 0)
	{
		iDelay = iDelay - 1;
	}

}
void updateLaserPosition (bullet &theBullet)
{
	if (ilaser == 0) //begins here
			{
				theBullet.SetPosX(-1000);
				theBullet.SetPosY(-1000);
				MoveSprite(theBullet.GetSprite(), theBullet.GetPosX(), theBullet.GetPosY());
			}

	if (ilaser == 1)
	{
 		theBullet.SetPosX(theBullet.GetPosX() + 5);
		MoveSprite(theBullet.GetSprite(), theBullet.GetPosX(), theBullet.GetPosY());
		if (theBullet.GetPosX() >=1250)
			{
				ilaser = 0;
			}
	}
}
void updatecharge()
{
	if (IsKeyDown(KEY_SPECIAL+35) && iboostCharge >-19 && iplayerMotion == 1)
	{
		iboostCharge = iboostCharge - 20;
	}
	if (iboostCharge <0)
	{
	iboostCharge = 0;
	}
	if (!IsKeyDown(KEY_SPECIAL+35) && (iboostCharge <10000) || IsKeyDown(KEY_SPECIAL+35) && (iplayerMotion = 0) && (iboostCharge <10000) || (iplayerMotion = 0) && (iboostCharge <10000))
	{
		iboostCharge = iboostCharge + 2;
	}
	if ((iboostCharge <= 100000) && (iboostCharge >9000))
	{
		DestroySprite (charge);
		charge = CreateSprite("./images/boost/boost10.png", 207, 30, true ); 
		MoveSprite(charge, 280, 760);
	}
	if ((iboostCharge <=9000) && (iboostCharge >8000))
	{
		DestroySprite (charge);
		charge = CreateSprite("./images/boost/boost9.png", 207, 30, true ); 
		MoveSprite(charge, 280, 760);
	}
	if ((iboostCharge <= 8000) && (iboostCharge >7000))
	{
		DestroySprite (charge);
		charge = CreateSprite("./images/boost/boost8.png", 207, 30, true ); 
		MoveSprite(charge, 280, 760);
	}
	if ((iboostCharge <=7000) && (iboostCharge >6000))
	{
		DestroySprite (charge);
		charge = CreateSprite("./images/boost/boost7.png", 207, 30, true ); 
		MoveSprite(charge, 280, 760);
	}
	if ((iboostCharge <=6000) && (iboostCharge >5000))
	{
		DestroySprite (charge);
		charge = CreateSprite("./images/boost/boost6.png", 207, 30, true ); 
		MoveSprite(charge, 280, 760);
	}
	if ((iboostCharge <=5000) && (iboostCharge >4000))
	{
		DestroySprite (charge);
		charge = CreateSprite("./images/boost/boost5.png", 207, 30, true ); 
		MoveSprite(charge, 280, 760);
	}
	if ((iboostCharge <=4000) && (iboostCharge >3000))
	{
		DestroySprite (charge);
		charge = CreateSprite("./images/boost/boost4.png", 207, 30, true ); 
		MoveSprite(charge, 280, 760);
	}
	if ((iboostCharge <=3000) && (iboostCharge >2000))
	{
		DestroySprite (charge);
		charge = CreateSprite("./images/boost/boost3.png", 207, 30, true ); 
		MoveSprite(charge, 280, 760);
	}
	if ((iboostCharge <=2000) && (iboostCharge >1000))
	{
		DestroySprite (charge);
		charge = CreateSprite("./images/boost/boost2.png", 207, 30, true ); 
		MoveSprite(charge, 280, 760);
	}
	if ((iboostCharge <=1000) && (iboostCharge >0))
	{
		DestroySprite (charge);
		charge = CreateSprite("./images/boost/boost1.png", 207, 30, true ); 
		MoveSprite(charge, 280, 760);
	}
	if (iboostCharge == 0)
	{
		DestroySprite (charge);
		charge = CreateSprite("./images/boost/boost0.png", 207, 30, true ); 
		MoveSprite(charge, 280, 760);
	}
}