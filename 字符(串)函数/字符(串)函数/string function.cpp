#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/*islower����:�ж���ĸ�Ƿ�ΪСд����������������ֵ*/
//int main()
//{
//
//}
/*isspace����:�ж��ַ��Ƿ�Ϊ�հ��ַ�����������������ֵ*/



//��˹٤��ֵa-97 A-65
/*�ַ����ַ�ת��д*/
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
//		//ͬ������Ҳ����ʹ����һ�ڵ�tolower��toupper
//		if (islower(arr[i]))
//		{
//			arr[i] = toupper(arr[i]);
//		}	
//		i++;
//	}	
//		printf("%s", arr);	
//}
//tolower,toupper�������Ѵ���ȥ�Ĳ�����С/��д



//strlen���������ַ����ĳ��ȣ�\0֮ǰ�ĳ��ȣ����ַ���û��\0����������siez-t
//��ָ��ʵ��strlen����
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

//�õݹ�ʵ��strlen����
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
strcpy����strncpy
strcat----strncat
strcmp----strncmp
*/


//strcpy���������ڸ��ƣ�char * strcpy ( char * destination, const char * source )
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
////strcpy��ʵ��
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


//strcat����������׷��:char * strcat ( char * destination, const char * source )
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

////strcatʵ��:
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
//}//WARNING:�Լ�ģ���strcat�����������Լ�׷���Լ� 
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


//strcmp���������ڱȽ��ַ�������
//�Ƚ���ʽ��������ĸ��ʼ�ȣ���˹٤��ֵ����Ϊ��
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

//STRCMPʵ�֣�
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


//strncpy����:���strcpy���������n��ʾstrncpyΪ���޶�ִ�е�strccpy����
//int main()
//{
//	char arr1[] = "how to retain you";
//	char arr2[] = "zzzzzzzzzzzzzznnnnnnnbbbbbbbbb";
//	char* x = arr1;
//	char* p = arr2;
//	strncpy(arr2, arr1,3);
//	printf("%s", arr2);
//	return 0;
//}//��Ҫִ�е��޶ȴ��ڸ��ƴ�������ݣ��򳬳��Ĳ���Ϊ\0


//strncat����:�����strcat��strncatΪ���޶�ִ�е�strcat
//int main()
//{
//	char arr1[] = "how to retain you";
//	char arr2[40] = "zzzznnnnbbbb";
//	char* x = arr1;
//	char* p = arr2;
//	strncat(arr2, arr1,3);
//	printf("%s", arr2);
//	return 0;
//}//warning:��׷�ӵ����ݺ��\0����һ������ԭλ�õ�\0(��������),��ִ�е��޶ȳ���׷�ӵ����ݣ���������



/*strstr����:char * strstr (       char * str1, const char * str2 );��Ŀ���ַ����в����ַ������ҵ������Ŀ���ַ������״γ��ֵ�
���ַ����ĵ�ַ���򷵻ؿ�ָ��
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
����1:��ν���ѭ��
����2�������ҵ��ַ�����Ŀ���ַ���������ô��
abcdef
bcd

abbcdef
bcd

abcdef
bcy
*/
/*ʧ�ܰ汾
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
		printf("û�ҵ�");
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
		printf("û�ҵ�");
	}
	else
	{
		printf("%s", ret);
	}
}



//strtok
// 
//strerror
