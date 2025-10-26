#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int DataType;

typedef struct NODE {
	DataType data;
	struct Node* next;//这里的是指针，所以后面各种变体函数用到时要用二级指针接受这个指针
}node;


void SLLPushBack(node** head, DataType data);
void SLLPopBack(node** head);
void SLLPopFront(node** head);
void SLLPushFront(node** head, DataType data);
node* SLLFind(node* head, DataType tofind);

node* CreateNode(DataType data);
void SLLPrint(node* head);
void SLLDestroy(node** head);
void SLLErase(node** head, DataType toerase);
