#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//计算阶层相加
//	int i=1;
//	int n=1;
//	int x=1;
//	int sum=0;
//	for (n = 1; n <= 3; n++)
//	{
//		x = 1;
//		for (i = 1; i <= n;i++)
//		{
//			x = x * i;
//		}
//		sum = sum + x;
//	}
//	printf("%d", sum);
//}




//
//int add(int m)
//{
//	if(m>0)
//	{
//		printf("%d ", m % 10);
//		
//		m=m / 10;
//		add(m);
//	}
//	
//	
//}
//
//
//
////函数递归——拆分输入
//int main()
//{
//	int m = 0;
//
//	scanf("%d", &m);
//	add(m);
//
//}



//
////输入并拆分II
//
//int add(int m)
//{
//	int x = 0;
//	int y = 0;
//
//  //(123)+4 (12)+3 (1)+2
//	//printf("&d", m % 10);
//	if(m!=0)
//	{
//		/*x = m / 10;*/
//		y = m % 10;
//		m = m / 10;
//		add(m);
//		printf("%d ", y);
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	add(m);
//	return 0;
//}



//斐波那契数列
// 
// 
// 
// 
// 
// 
// 
//1 1 2 3 5 8  13 21 34
//1 2 3 4 5 9  7  8  9
int add(int n)
{
	int ret = 0;
	int x = 0;
	if (n <= 2)
	{
		return 1;
	}
	else if (n >= 2&&n<=10)//n=3.n=4
	{

		return add(n - 1) + add(n - 2);//至少n为3才启动
	}
}
	
int main()
{
	int n = 0;
	scanf("%d", &n);
	add(n);
	int ret = add(n);
	printf("第%d个数是%d", n, ret);
	return 0;

}
