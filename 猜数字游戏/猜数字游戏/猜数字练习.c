#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("********************\n");
	printf("*****1.����Ϸ ******\n");
	printf("*****  0.�˳� ******\n");

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
			printf("��ϲ��¶��ˣ�\n");
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
		printf("��ѡ��ѡ��:\n");

		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				
				game();
				
		case 0:
					printf("�˳���Ϸ\n");
					break;
		default:
						printf("����:���������룡\n");
					break;
		}
	} while (input);
		return 0;
}