#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
int main5()
{
	//二维数组   元素类型type 数组名[行值][列值]
	//以列的值所等于的相同的逗号 算一组行数组
	int arr[3][4] = { {2,5},{3,8},{9,4} };//多行数组的未完全初始化
	//创建二维数组，行值不能省略，列值可以省略（因为编译器会根据相关信息推算出列）


	int arr2[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 ,};
	//printf("%d ", arr[2][1]);
	for (int i = 0; i < 3; i++)
	{
		for (int u = 0; u < 5; u++)
		{
			printf("%d ", arr2[i][u]);
		}
		printf("\n");
	}
	return 0;

}






//数组的输入
int main4()
{
	int arr2[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 , };
	int arr3[3][5] = {0};
	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 5; b++)
		{
			scanf("%d", &arr3[a][b]);
		}
	}

	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 5; b++)
		{
			printf("%d ",arr3[a][b]);
		}
		printf("\n");
	}
	return 0;
}


//行列转换
int main1()
{

	int arr2[3][5] = { 1,2,3,4,5,
		2,3,4,5,6,
		3,4,5,6,7, };
	for (int c = 0; c < 5; c++)
	{

		for (int d = 0; d < 3; d++)
		{
			printf("%d ", arr2[d][c]);

		}
		printf("\n");
	}
	return 0;
}



//二维数组中每个元素是连续存放的
int main2()
{
	int arr3[3][5];
	for (int a = 0; a < 3; a++)
	{
		for (int b = 0; b < 5; b++)
		{
			printf("arr3[%d][%d] = %p\n",a,b, &arr3[a][b]);


		}
		printf("\n");
	}


}





//vs不支持变长数组，变长数组不能初始化




// 
int main3()
{
	char arr1[] = { "quzz quqz qujsj quqz quxz quhmj" };
	char arr2[] = { "*******************************" };
	int left = 0;
	int right = strlen(arr2) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];//等式前后对调触发不了，arr2在前是因为赋值；
		arr2[right] = arr1[right];
		Sleep(1000);//Sleep延时用的，单位为毫秒；S需为大写;
		system("cls");//引用命令提示符效果
		left++;
		right--;
		printf("%s\n", arr2); 
	}
	return 0;
}
