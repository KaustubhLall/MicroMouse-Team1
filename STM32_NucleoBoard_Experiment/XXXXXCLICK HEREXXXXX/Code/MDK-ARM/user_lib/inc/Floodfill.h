#ifndef __FLOODFILL_H
#define __FLOODFILL_H
#include <stdio.h>
#include <stdlib.h>
#include "GPIO.h"
#include "stm32f4xx_usart.h"
#include "misc.h"
#include "Stack.h"
#include "Coord.h"
#include <limits.h>


void initFloodfill(void);
int isCenter(int x, int y);
void updatePosition(int r1, int c1, int r2, int c2);
bool floodfill(void);

Coord* direction;
int xx[] = {0,1,0,-1};
int yy[] = {1,0,-1,0};
int visit[100][100];
int dist[100][100];
int bestRouteX[100][100];
int bestRouteY[100][100];
int parentX[100][100];
int parentY[100][100];
Stack* Qx;
Stack* Qy;

static int store[MAX];
int row = 16;
int col = 16;
int CENTERX1;
int CENTERY1;
int CENTERX2;
int CENTERY2;
int CENTERX3;
int CENTERY3;
int CENTERX4;
int CENTERY4;
#endif
