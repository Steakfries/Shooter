#ifndef _COLLISION_CHECKS_H
#define _COLLISION_CHECKS_H

bool LaserEnemyCollision(bullet &theBullet, movableObject& enemy);
bool LaserEnemy2Collision(bullet &theBullet, movableObject& enemy2);
bool LaserEnemy3Collision(bullet &theBullet, movableObject& enemy3);
bool PlayerEnemyCollision(movableObject& player1, movableObject& enemy);
bool PlayerEnemy2Collision(movableObject& player1, movableObject& enemy2);
bool PlayerEnemy3Collision(movableObject& player1, movableObject& enemy3);

#endif