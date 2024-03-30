#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
void menu()//菜单画面
{
	printf("-----------------------\n");
	printf("|--1.searching bomb---|\n");
	printf("|---0.Exit------------|\n");
	printf("-----------------------\n");
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("Please choose\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("Enter game of searching bombs");

			break;
		case 0:
			printf("Exit");
			break;
		default:
			printf("Error! Please reinput");
			break;
		}
	} while (input);
}



//rand()%9+1  翻译：%9，说明余数的范围是0~8，再加一，说明得到的范围是1~9；