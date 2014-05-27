#include "AIE.h"
#include "movable_sprites.h"
#include "Globals.h"

int gg = -1;
int win = -1;
int border = -1;
int charge = -1;
int player1score = 0;
int boostback = -1;
int boost = -1;
int ilaser = 0;
int ienemy = 1;
int ienemy2 = 1;
int ienemy3 = 1;
int frameCounter = 0;
int g_highScores[5] = {0};
bool bSplashActive = true;
bool bTitleActive = true;
bool bshooterrunning = true;
bool isplayeralive = true;
bool bexplode = false;
bool g_gameOver = false;
bool g_win = false;
bool bsuper = false;
bool bgamerunning = true;
const int SPEED = 10;
const int SCREEN_X = 1280;
const int SCREEN_Y = 780;
int explodex;
int explodey;
movableObject player1 = {100, 400, 0, 0, -1 , 100, 100};
movableObject laser = {100, 400, 0, 0, -1 , 8, 1008};
movableObject enemy = {-100, -100, 0,0,-1, 50, 50};
movableObject enemy2 = {-100, -100, 0,0,-1, 50, 50};
movableObject enemy3 = {-100, -100, 0,0,-1, 50, 50};
movableObject boss = {boss.position.x, boss.position.y, 0,0,-1, 480, 280};
movableObject orb = {player1.position.x, player1.position.y, 0,0,-1, 600, 600};
movableObject back = {back.position.x, back.position.y, 0,0, -1, 1280, 780};
movableObject back2 = {1280, 390, 0,0, -1, 1280, 780};
movableObject overlay = {0, back.position.y, 0,0, -1, 1280, 780};
movableObject overlay2 = {1280, back.position.y, 0,0, -1, 1280, 780};
movableObject beam = {-100, -100, 0, 0, -1, 1280, 780};
movableObject explode = {-100, -100, 0, 0, -1, 36, 36};
int iplayerDirection;
int iboostCharge = 10000;
int iplayerMotion = 0;
int iplayerlives = 5;