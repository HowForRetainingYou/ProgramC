#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i, j = 0;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j<=i; j++ )
		{
			printf("%d*%d=%d ", j,i, j * i);
		}
		printf("\n");
	}
	return 0;
}