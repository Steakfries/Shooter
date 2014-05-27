#include "AIE.h"
#include "header.h"
#include "Globals.h"
#include "Update_Enemies.h"



void updateEnemyPosition (movableObject &obj)
{
static int idircount = 0;
if (ienemy == 0 && g_gameOver == true)
					{
					MoveSprite(enemy.sprite, enemy.position.x, enemy.position.y);
 					enemy.position.x = enemy.position.x -1;
					}
if (ienemy == 0 && g_gameOver == false)
		{
			idircount = 0;
			int iNum = 0;
			srand(time(NULL));
			float rands = rand();
			iNum = (int)(rand() % 550 + 100);
			enemy.position.x = 1380;
			enemy.position.y = iNum;
			ienemy = 1;
		}
if (ienemy == 1)	
{
		static bool dirup = true;
		MoveSprite(enemy.sprite, enemy.position.x, enemy.position.y);
 		enemy.position.x = enemy.position.x -2;
		if (enemy.position.x <=-10)
			{
				ienemy = 0;
			}		
		idircount = idircount + 1;
	if (idircount <200)
		{
			dirup = true;
		}			
	if (idircount > 200)
		{
			dirup = false;
		}
	if (idircount > 400)
	{
		idircount = 0;
	}
		if (dirup)
		{
			enemy.position.y = enemy.position.y - 1;
		}
		else
		{
			enemy.position.y = enemy.position.y + 1;
		}
	}
}
void updateEnemy2Position (movableObject &obj)
{
	static bool isfirstrun = true;
	static bool dirup = false;
	static int idircount = 0;
	static int icount = 0;
	if (isfirstrun)
		{
			icount = icount + 1;
		}
	if (icount >= 400)
		{
			icount = 0;
			isfirstrun = false;
		}
	if (!isfirstrun)
		{
			if (ienemy2 == 0 && g_gameOver == true)
					{
					MoveSprite(enemy2.sprite, enemy2.position.x, enemy2.position.y);
 					enemy2.position.x = enemy2.position.x -1;
					}
			if (ienemy2 == 0 && g_gameOver == false)
					{
						int iNum = 0;
						srand(time(NULL));
						float rands = rand();
						iNum = (int)(rand() % 550 + 100);
						enemy2.position.x = 1380;
						enemy2.position.y = iNum;
						ienemy2 = 1;
						idircount = 0;
					}
			if (ienemy2 == 1)
				{
					MoveSprite(enemy2.sprite, enemy2.position.x, enemy2.position.y);
 					enemy2.position.x = enemy2.position.x -1;
					if (enemy2.position.x <=-80)
						{
							ienemy2 = 0;
						}
				}
		idircount = idircount + 1;
		if (idircount <100)
			{
				enemy2.position.y = enemy2.position.y + .5;
			}
			
		if (idircount >= 100 && idircount <= 201)
			{
				enemy2.position.y = enemy2.position.y - .5;
			}
		if (idircount >= 201)
		{
			idircount = 0;
		}
	}
}
void updateEnemy3Position (movableObject &obj)
{
	static bool dirup = false;
	static int idircount = 0;
	static bool isfirstrun = true;
	static int icount = 0;
	if (isfirstrun)
	{
		icount = icount + 1;
	}
	if (icount >= 800)
	{
		icount = 0;
		isfirstrun = false;
	}
	if (!isfirstrun)
	{
		if (ienemy3 == 0 && g_gameOver == true)
					{
					MoveSprite(enemy3.sprite, enemy3.position.x, enemy3.position.y);
 					enemy3.position.x = enemy3.position.x -1;
					}
		if (ienemy3 == 0 && g_gameOver == false)
				{
					int iNum = 0;
					srand(time(NULL));
					float rands = rand();
					iNum = (int)(rand() % 550 + 100);
					enemy3.position.x = 1380;
					enemy3.position.y = iNum;
					ienemy3 = 1;
					idircount = 0;
				}
		if (ienemy3 == 1)
			{
				MoveSprite(enemy3.sprite, enemy3.position.x, enemy3.position.y);
 				enemy3.position.x = enemy3.position.x -1.5;
				if (enemy3.position.x <=-10)
					{
						ienemy3 = 0;
					}
			}
		idircount = idircount + 1;
		if (idircount <50)
			{
				enemy3.position.y = enemy3.position.y + 1;
			}
			
		if (idircount >= 51 && idircount <= 100)
			{
				enemy3.position.y = enemy3.position.y - 1;
			}
		if (idircount >= 101 && idircount <= 150)
			{
				enemy3.position.y = enemy3.position.y + 1;
			}
			
		if (idircount >= 151 && idircount <= 200)
			{
				enemy3.position.y = enemy3.position.y - 1;
			}
		if (idircount >= 201 && idircount <= 400)
			{
				enemy3.position.y = enemy3.position.y + 1;
			}
		if (idircount >= 401 && idircount <= 600)
			{
				enemy3.position.y = enemy3.position.y - 1;
			}
		if (idircount >= 601)
		{
			idircount = 0;
		}
	}
}