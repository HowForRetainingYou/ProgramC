#define _CRT_SECURE_NO_WARNINGS 1
//此源文件用于存储雷盘和显示盘等设计
#include "game.h"
#include <stdio.h>
//初始化棋盘的基本模样
void format(char root[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			root[i][j] = set;
		}
	}
}



void format2(char game_show[ROWS][COLS], int row, int col, char star)
{
	int i = 0;
	int j = 0;
	for (int a = 0; a <= col; a++)
	{
		printf("%-2d", a);
	}
	for(int b=1;b<=)

}
