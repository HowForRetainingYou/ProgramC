#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("********************\n");
	printf("*****  1.play ******\n");
	printf("*****  0.Exit ******\n");

	printf("********************\n");

}

void game()
{
	int guess = 0;
	int cai;
	

	int r = rand()%100+1;
	while (1)
	{
		printf("��������Ҫ�µ�����:\n");

		scanf("%d", &cai);
		if (r > cai)
		{
			printf("��С��");
		}
		else if (r < cai)
		{
			printf("�´���");
		}
		else
		{
			printf("��ϲ��¶��ˣ�");
			break;
		}
	}
}





int main()
{
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();
		printf("Please choose:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				
				game();
				
		case 0:
					printf("Quit the game\n");
					break;
		default:
						printf("Error:Please rechoose\n");
					break;
		}
	} while (input);
		return 0;
}