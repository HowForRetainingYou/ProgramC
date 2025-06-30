#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/*islower函数:判断字母是否为小写，符合条件返回真值*/
//int main()
//{
//
//}
/*isspace函数:判断字符是否为空白字符，符合条件返回真值*/



//阿斯伽马值a-97 A-65
/*字符串字符转大写*/
//int main()
//{
//	char arr[] = "How To Retain You";
//	int i = 0;
//	while (arr[i]!='\0')
//	{
//	//if (arr[i] >= 'a' && arr[i] <= 'z')
//	/*	if(islower(arr[i]))
//			{
//				arr[i] = arr[i] - 32;
//			}*/
//		//同理，这里也可以使用下一节的tolower和toupper
//		if (islower(arr[i]))
//		{
//			arr[i] = toupper(arr[i]);
//		}	
//		i++;
//	}	
//		printf("%s", arr);	
//}
//tolower,toupper函数：把传进去的参数改小/大写



//strlen函数，求字符串的长度，\0之前的长度，若字符串没有\0，返回类型siez-t
//用指针实现strlen函数
/*
char pointer_version_strlen(char* s)
{
	int count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return count;
}

int main()
{
	char arr[] = "how to retain you";
	size_t len = pointer_version_strlen(arr);
	printf("%zd", len);
}
*/

//用递归实现strlen函数
/*
char pointer_version_strlen(char* s) 
{
	if (*s == '\0')
		return 0;
	else
		return 1 + pointer_version_strlen(s+1);
}

int main()
{
	char arr[] = "how to retain you";
	size_t len = pointer_version_strlen(arr);
	printf("%zd", len);
}
*/



/*
strcpy——strncpy
strcat----strncat
strcmp----strncmp
*/


//strcpy函数，用于复制；char * strcpy ( char * destination, const char * source )
/*int main()
{
	char arr1[] = "how to retain you";
	char arr2[] = "zzzzzzzzzzzzzznnnnnnnbbbbbbbbb";
	char* x = arr1;
	char* p = arr2;
	strcpy(arr2, arr1);
	printf("%s", arr2);
	return 0;
}
*/
////strcpy的实现
//void my_version_strcpy(char*destination,const char*source)
//{
//
//	while (*source != '\0')
//	{
//		*destination = *source;
//		destination++;
//		source++;
//		//2:*destination++ = *source++;
//		
//	}
//	*destination = *source;
//	
//	/*
//	while(*destination++ = *source++)
//	{
//	;
//	};
//	*/
//
//}
//int main()
//{
//	char arr1[] = "how to retain you";
//	char arr2[30] = "zzzzzznnnnnnnbbbbbbbbb";
//	my_version_strcpy(arr2,arr1);
//	printf("%s", arr2);
//}


//strcat函数，用于追加:char * strcat ( char * destination, const char * source )
/*
int main()
{
	char arr1[] = "how to retain you";
	char arr2[40] = "zzzzzzzznnnnnnnbbbbbbb";
	char* x = arr1;
	char* p = arr2;
	strcat(arr2, arr1);
	printf("%s", arr2);
	return 0;
}
*/

////strcat实现:
//char* my_version_strcat(char*destination,const char*source) 
//{
//	char* ret = destination;
//	while (*destination !='\0')
//	{
//		*destination++;
//	}
//	while (*destination++ = *source++)
//	{
//		;
//	}
//	return ret;
//}//WARNING:自己模拟的strcat函数做不到自己追加自己 
//
//int main()
//{
//	char arr1[] = "how to retain you";
//	char arr2[40] = "zzzzzzzznnnnnnnbbbbbbb";
//	char* source = arr1;
//	char* destination = arr2;
//	my_version_strcat(arr2, arr1);
//	printf("%s", arr2);
//}


//strcmp函数：用于比较字符串内容
//比较形式：从首字母开始比，阿斯伽马值大则为大
/*
int main()
{
	char arr1[] = "how to retain you";
	char arr2[40] = "zzzzzzzznnnnnnnbbbbbbb";
	char* x = arr1;
	char* p = arr2;
	strcmp(arr2, arr1);
	printf("%d", strcmp(arr2, arr1));
	return 0;
}
*/

//STRCMP实现：
//
//int my_version_strcmp(const char* string1, const char* string2)
//{
//	while (*string1 == *string2)
//	{
//		if (*string1 == '\0')
//		{
//			return 0;
//		}
//		*string1++;
//		*string2++;
//	}
//	if (*string1 < *string2)
//	{
//		return -1;
//	}
//	else
//		return 1; 
//}
//int main()
//{
//	char arr1[] = "how to retain you";
//	char arr2[] = "how to retain youb";
//	char* x = arr1;
//	char* p = arr2;
//	my_version_strcmp(arr2, arr1);
//	printf("%d", my_version_strcmp(arr2, arr1));
//	return 0;
//}


//strncpy函数:相比strcpy，多出来的n表示strncpy为有限度执行的strccpy函数
//int main()
//{
//	char arr1[] = "how to retain you";
//	char arr2[] = "zzzzzzzzzzzzzznnnnnnnbbbbbbbbb";
//	char* x = arr1;
//	char* p = arr2;
//	strncpy(arr2, arr1,3);
//	printf("%s", arr2);
//	return 0;
//}//若要执行的限度大于复制代替的内容，则超出的部分为\0


//strncat函数:相比于strcat，strncat为有限度执行的strcat
//int main()
//{
//	char arr1[] = "how to retain you";
//	char arr2[40] = "zzzznnnnbbbb";
//	char* x = arr1;
//	char* p = arr2;
//	strncat(arr2, arr1,3);
//	printf("%s", arr2);
//	return 0;
//}//warning:所追加的内容后的\0连着一并代替原位置的\0(或者内容),若执行的限度超出追加的内容，则不再运行



/*strstr函数:char * strstr (       char * str1, const char * str2 );在目标字符串中查找字符串，找到则输出目标字符串中首次出现的
该字符串的地址否则返回空指针
*/
/*
int main()
{
	char arr1[] = "how how to retain you";
	char arr2[] = "ow";
	char* ret = strstr(arr1, arr2);
	printf("%s", ret);
}
*/


/*
问题1:如何进入循环
问题2：若查找的字符串比目标字符串长该怎么办
abcdef
bcd

abbcdef
bcd

abcdef
bcy
*/
/*失败版本
const char* my_version_strstr(const char* str1, const char* str2)
{
	const char* s1 = str1;
	const char* s2 = str2;
	const char* pointer1 = str1;
	const char* pointer2 = str2;
	while (*pointer1)
	{
		if (*pointer1 != *pointer2)
		{
			pointer1++;
			pointer2 = str2;
			if (*pointer1 == '\0')
			{
				return pointer1;
			}
		}
		else
		{
			pointer1++;
			pointer2++;
			if (*pointer2 == '\0')
			{
				break;
			}
		}
	}
	return pointer1;
}
int main()
{
	char arr1[] = "abcded";
	char arr2[] = "bc";
	const char* ret = my_version_strstr(arr1, arr2);
	if (*ret == '\0')
	{
		printf("没找到");
	}
	else
	{
		printf("%s", ret);
	}

} 

*/

//abcdef
//bcd
//
//abbcdef
//bcd
//
//abcdef
//bcy
const char* my_version_strstr(const char* str1, const char* str2)
{
	const char* pointer1 = NULL;
	const char* pointer2 = NULL;
	const char* begin= NULL;
	begin = str1;
	while (*begin)
	{
		pointer1 = begin;
		pointer2 = str2;
		while (*pointer1 != '\0' && *pointer2 != '\0' && *pointer1 == *pointer2)
		{
			pointer1++;
			pointer2++;			
		}
		if (*pointer2 == '\0')
		{
			return begin;
		}
		begin++;
	
	}
	return NULL;

}

int main()
{
	char arr1[100] = "XuZhiNingWoXiHuanNi";
	char arr2[100] = "Wo";
	const char* ret = my_version_strstr(arr1, arr2);
	if (ret ==NULL)
	{
		printf("没找到");
	}
	else
	{
		printf("%s", ret);
	}
}



//strtok
// 
//strerror
