#include "header.h"
#include "movable_sprites.h"
#include "Globals.h"
bool LaserEnemyCollision(bullet &theBullet, movableObject& enemy)
{
	int bulletHalfW = theBullet.GetDimensionsX() / 2;
	int bulletHalfH = theBullet.GetDimensionsY() / 2;
	int enemyHalfW = enemy.width>>1;
	int enemyHalfH = enemy.height>>1;	
	
	if (theBullet.GetPosX() > enemy.position.x - enemyHalfW && 
	theBullet.GetPosX() < enemy.position.x + enemyHalfW &&
	theBullet.GetPosY() > enemy.position.y - enemyHalfH &&
	theBullet.GetPosY() < enemy.position.y + enemyHalfH)
		{
			//PlaySound ("./sounds/hit.wav", NULL, SND_ASYNC);
			explodex = enemy.position.x;
			explodey = enemy.position.y;
			explode.position.x = explodex;
			explode.position.y = explodey;
			MoveSprite (explode.sprite, explodex, explodey);
			ienemy = 0;
			player1score = player1score + 200;
			PlaySound ("./sounds/explode.wav", NULL, SND_ASYNC);
			bexplode = true;
 			return true;
		}
	return false;	
}
bool LaserEnemy2Collision(bullet &theBullet, movableObject& enemy2)
{
	int bulletHalfW = theBullet.GetDimensionsX() / 2;
	int bulletHalfH = theBullet.GetDimensionsY() / 2;
	int enemy2HalfW = enemy2.width>>1;
	int enemy2HalfH = enemy2.height>>1;	
	
	if (theBullet.GetPosX() > enemy2.position.x - enemy2HalfW && 
	theBullet.GetPosX() < enemy2.position.x + enemy2HalfW &&
	theBullet.GetPosY() > enemy2.position.y - enemy2HalfH &&
	theBullet.GetPosY() < enemy2.position.y + enemy2HalfH)
		{
			//PlaySound ("./sounds/hit.wav", NULL, SND_ASYNC);
			explodex = enemy2.position.x;
			explodey = enemy2.position.y;
			explode.position.x = explodex;
			explode.position.y = explodey;
			MoveSprite (explode.sprite, explodex, explodey);
			ienemy2 = 0;
			player1score = player1score + 100;
			PlaySound ("./sounds/explode.wav", NULL, SND_ASYNC);
			bexplode = true;
 			return true;
		}
	return false;	
}
bool LaserEnemy3Collision(bullet &theBullet, movableObject& Enemy3)
{
	int bulletHalfW = theBullet.GetDimensionsX() / 2;
	int bulletHalfH = theBullet.GetDimensionsY() / 2;
	int Enemy3HalfW = Enemy3.width>>1;
	int Enemy3HalfH = Enemy3.height>>1;	
	
	if (theBullet.GetPosX() > Enemy3.position.x - Enemy3HalfW && 
	theBullet.GetPosX() < Enemy3.position.x + Enemy3HalfW &&
	theBullet.GetPosY() > Enemy3.position.y - Enemy3HalfH &&
	theBullet.GetPosY() < Enemy3.position.y + Enemy3HalfH)
		{
			//PlaySound ("./sounds/hit.wav", NULL, SND_ASYNC);
			explodex = Enemy3.position.x;
			explodey = Enemy3.position.y;
			explode.position.x = explodex;
			explode.position.y = explodey;
			MoveSprite (explode.sprite, explodex, explodey);
			ienemy3 = 0;
			player1score = player1score + 300;
			PlaySound ("./sounds/explode.wav", NULL, SND_ASYNC);
			bexplode = true;
 			return true;
		}
	return false;	
}
bool PlayerEnemyCollision(movableObject& player1, movableObject& enemy) 
{
	int player1HalfW = player1.width>>1;
	int player1HalfH = player1.height>>1;
	int enemyHalfW = enemy.width>>1;
	int enemyHalfH = enemy.height>>1;	
	
	if (player1.position.x + enemyHalfW > enemy.position.x - enemyHalfW && 
	player1.position.x - enemyHalfW < enemy.position.x + enemyHalfW &&
	player1.position.y + enemyHalfH > enemy.position.y - enemyHalfH &&
	player1.position.y - enemyHalfH < enemy.position.y + enemyHalfH)
		{
			//PlaySound ("./sounds/hit.wav", NULL, SND_ASYNC);
			explodex = enemy.position.x;
			explodey = enemy.position.y;
			explode.position.x = explodex;
			explode.position.y = explodey;
			MoveSprite (explode.sprite, explodex, explodey);
			ienemy = 0;
			iplayerlives = iplayerlives - 1;
			isplayeralive = false;
			MoveSprite (player1.sprite, 100, 400);
			player1.position.x = 100;
			player1.position.y = 400;
			PlaySound ("./sounds/explode.wav", NULL, SND_ASYNC);
			bexplode = true;
			return true;
		}
	return false;	
}
bool PlayerEnemy2Collision(movableObject& player1, movableObject& enemy2) 
{
	int player1HalfW = player1.width>>1;
	int player1HalfH = player1.height>>1;
	int enemy2HalfW = enemy2.width>>1;
	int enemy2HalfH = enemy2.height>>1;	
	if (player1.position.x + enemy2HalfW > enemy2.position.x - enemy2HalfW && 
	player1.position.x - enemy2HalfW < enemy2.position.x + enemy2HalfW &&
	player1.position.y + enemy2HalfH > enemy2.position.y - enemy2HalfH &&
	player1.position.y - enemy2HalfH < enemy2.position.y + enemy2HalfH)
		{
			//PlaySound ("./sounds/hit.wav", NULL, SND_ASYNC);
			explodex = enemy2.position.x;
			explodey = enemy2.position.y;
			explode.position.x = explodex;
			explode.position.y = explodey;
			MoveSprite (explode.sprite, explodex, explodey);
			ienemy2 = 0;
			iplayerlives = iplayerlives - 1;
			isplayeralive = false;
			MoveSprite (player1.sprite, 100, 400);
			player1.position.x = 100;
			player1.position.y = 400;
			PlaySound ("./sounds/explode.wav", NULL, SND_ASYNC);
			bexplode = true;
			return true;
		}
	return false;	
}
bool PlayerEnemy3Collision(movableObject& player1, movableObject& enemy3) 
{
	int player1HalfW = player1.width>>1;
	int player1HalfH = player1.height>>1;
	int enemy3HalfW = enemy3.width>>1;
	int enemy3HalfH = enemy3.height>>1;	
	if (player1.position.x + enemy3HalfW > enemy3.position.x - enemy3HalfW && 
	player1.position.x - enemy3HalfW < enemy3.position.x + enemy3HalfW &&
	player1.position.y + enemy3HalfH > enemy3.position.y - enemy3HalfH &&
	player1.position.y - enemy3HalfH < enemy3.position.y + enemy3HalfH)
		{
			//PlaySound ("./sounds/hit.wav", NULL, SND_ASYNC);
			explodex = enemy3.position.x;
			explodey = enemy3.position.y;
			explode.position.x = explodex;
			explode.position.y = explodey;
			MoveSprite (explode.sprite, explodex, explodey);
			ienemy3 = 0;
			iplayerlives = iplayerlives - 1;
			isplayeralive = false;
			MoveSprite (player1.sprite, 100, 400);
			player1.position.x = 100;
			player1.position.y = 400;
			PlaySound ("./sounds/explode.wav", NULL, SND_ASYNC);
			bexplode = true;
			return true;
		}
	return false;
}