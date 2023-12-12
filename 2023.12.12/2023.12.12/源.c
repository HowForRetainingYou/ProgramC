#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
//{
//	//首次使用do while 循环
//	int n=0;
//	do 
//	{
//		printf("%d ", n);
//		n++;
//	} while (n <= 15);//特点：循环体至少执行一次
//		return 0;
//}



//
//
// 
//{
//	int n=0;
//	int i = 0;
//	scanf("%d", &n);
//	do
//	{
//		i++;
//		n = n / 10;
//
//	} while (n);
//		printf("%d", i);
//	return 0;
//}
////while 循环可内含 break 和 countin
////break：，满足某一条件，跳出循环
////：coun：跳过本次内循环中c后面的代码，再进行再判断 
//
//
//
////注意：while和for中的b和c有别





{
int i=0;

for (int i = 1; i <= 200; i++)
{
	int flag = 1;
	int j = 0;
	for (j = 2;  j <= i - 1; j++)
	{
		if (i % j == 0)
		{
			flag = 0;
			break;
		}
		
	}
	if (flag == 1)
	{
		printf("%d", i);
	}
	
}

return 0;
}







