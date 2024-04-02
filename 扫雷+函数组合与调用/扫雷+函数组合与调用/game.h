#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

void format(char root[ROWS][COLS], int rows, int cols,char set);
void format2(char game_show[ROWS][COLS], int row, int col, char star);