#define _CRT_SECURE_NO_WARNINGS 1
#include <stdbool.h>
#include <stdio.h>
/*
#if 0;


函数形式：
return-type接fun - name（形式参数）
自定义函数的返回值或者没有返回值将作用于主函数
RETURN返回值跟函数返回类型不一样，则系统将取返回值中返回类型的那一部分
若自定义函数中存在条件分支且分支中用到了return，那么必须明确所有的范围与路径，即每种情况都要有return返回值，不然会报错

RETURN的作用可以提前结束函数
RETURN的返回值要看函数的定义类型

数组传参数，形式参数不创建新的数组
形参数组就是主数组（实参数组）
数组传参传数组名即可

函数关键次拥有返回值，在特意调其出来时会显现，具体查c++官网
函数中不能定义函数

若自定义函数在主函数后，则编译无法通过；若想在顺序上自定义函数在主函数后执行编译的话，必须在主函数之前声明该自定义函数，即自定义函数体在主函数后，此时可以使用



*/

//浅尝试输入年份判断该年份的天数


//：判断是否闰年
_Bool judging_years(int g)
{
	if ((g % 4 == 0) && (g % 100 != 0) || (g % 400 == 0))
		return true;
	else
		return false;
}




//根据是否闰年决定2月天数；
int judging(int a,int c)
{
	int x=0;
	int detailed_days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

	//                           1  2  3  4  5  6  7  8  9 10  11  12
	int sumdays=0;
	for (int i = 0; i < 13; i++)
	{
		sumdays = sumdays + detailed_days[i];
	}
	if (judging_years&&((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0)))
	{
		sumdays=sumdays+1;
	}
	
	return sumdays;

}



int main()
{
	int years;
	int months = 0;
	int days = 0;
	printf("please input year:");
	scanf("%d", &years);
	
	int result = judging_years(years);
	int output = judging(years,days);

	printf("The year of %d has %d days", years, output);
}