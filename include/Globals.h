#ifndef _GLOBALS_H_
#define _GLOBALS_H_
#include "AIE.h"
#include "movable_sprites.h"


extern int gg;
extern int win;
extern int border;
extern int charge;
extern int player1score;
extern int boostback;
extern int boost;
extern int ilaser;
extern int ienemy;
extern int ienemy2;
extern int ienemy3;
extern int frameCounter;
extern int g_highScores[5];
extern bool bSplashActive;
extern bool bTitleActive;
extern bool bshooterrunning;
extern bool isplayeralive;
extern bool bexplode;
extern bool g_gameOver;
extern bool g_win;
extern bool bsuper;
extern bool bgamerunning;
extern const int SPEED;
extern const int SCREEN_X;
extern const int SCREEN_Y;
extern int explodex;
extern int explodey;
extern movableObject player1;
extern movableObject laser;
extern movableObject enemy;
extern movableObject enemy2;
extern movableObject enemy3;
extern movableObject boss;
extern movableObject orb;
extern movableObject back;
extern movableObject back2;
extern movableObject overlay;
extern movableObject overlay2;
extern movableObject beam;
extern movableObject explode;
extern int iplayerDirection;
extern int iboostCharge;
extern int iplayerMotion;
extern int iplayerlives;

#endif