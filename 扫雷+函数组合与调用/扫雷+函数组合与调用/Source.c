#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
void menu()//菜单画面，不作返回值
{
	printf("-----------------------\n");
	printf("|--1.searching bomb---|\n");
	printf("|---0.Exit------------|\n");
	printf("-----------------------\n");
}


void game()
{
	char root[ROWS][COLS];
	char game_show[ROWS][COLS];
	format(root, ROWS, COLS, '0');
	format2(game_show, ROW, COL, '*');
}



int main()
{
	int input = 0;
	do
	{
		menu();//只作为显示功能
		printf("Please choose:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("Enter game\n");
			game();
			break;
		case 0:
			printf("Exit\n");
			break;
		default:
			printf("Error! Please reinput\n");
			break;
		}
	} while (input);
}



//rand()%9+1  翻译：%9，说明余数的范围是0~8，再加一，说明得到的范围是1~9；