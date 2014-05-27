#ifndef _PLAYER_FUNCTIONS_H
#define _PLAYER_FUNCTIONS_H

void moveplayer(movableObject& player1);
void respawnplayer(movableObject& player1);
void pshoot (bullet &theBullet);
void updateLaserPosition (bullet &theBullet);
void updatecharge();
#endif