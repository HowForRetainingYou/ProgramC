#define _CRT_SECURE_NO_WARNINGS 1
#include <ctype.h>
#include <stdio.h>
#include <string.h>


////小写字母转大写
//int main()
//{
//	char arr[] =  "Kamen Ride DDDDDecade" ;
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		//
//		// if (arr[i] >= 'a' && arr[i] <= 'z');
//		if(islower(arr[i]))
//		{
//			arr[i] -= 32;
//			//arr[i]=toupper(arr[i])
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//
//}


//strlen返回类型 是 size_t,
//strlen模拟
int mystrlen(char * p)
{
	int count = 0;
	while (*p != '\0')
	{
		count++;
		p++;
	}
	return count;
}
/*
//不创建临时变量情况下,利用递归求长度
int mystrlen2(char *p)
{
	if (*p == '\0')
		return 0;
	else
		return 1 + mystrlen2(p + 1);
}
int main()
{
	char arr[] = "acddd";

	size_t len = mystrlen(arr);
	printf("%zd", len);
	return 0;
}

*/



/*
//strcpy

void mystrcpy(char*aim,char*b)
{
	char* wait = aim;
	while (*aim = *b)
		;

}

int main()
{
	char arr1[] = "assddddd";
	char arr2[20] = "k";

	strcpy(arr2, arr1);
	printf("%s", arr2);
mystrcpy(arr2, arr1);


}
*/

//strcat

//模拟
char* mystrcat(char* aim,char*work)
{
	char* o = aim;
	while (*aim++)
		;
	while (*aim = *work)
		;

}

int main()
{
	char brr1[20] = "cvhgf";
	char brr2[] = "NM$L";
	/*strcat(brr1, brr2);
	printf("%s", brr1);*/
	mystrcat(brr1, brr2);
}


