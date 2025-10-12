#include "SequenceList.h"//此处不能用.c,不然会重复定义，之前就因为这个错误调试了好久
int Test()
{
	SL p1;
	SeqListInit(&p1);
	SeqListPushBack(&p1, 1);
	SeqListPushBack(&p1, 2);
	SeqListPushBack(&p1, 3);
	SeqListPushBack(&p1, 4);
	SeqListPushBack(&p1, 5);
	SeqListPrint(&p1);
	printf("\n");
	SeqListPushFront(&p1, -1);
	SeqListPushFront(&p1, -2);
	SeqListPushFront(&p1, -3);
	SeqListPushFront(&p1, -4);
	SeqListPrint(&p1);
	printf("\n");
	SeqListPopFront(&p1);
	SeqListPrint(&p1);
	printf("\n");
	SeqListInsert(&p1, 4, 99);
	SeqListPrint(&p1);
	//目前顺序表数据为-4 -3 -2 -1 99 1 2 3 4 5
	printf("\n");
	SeqListErase(&p1, 3);
	SeqListPrint(&p1);
	printf("\n");
}

int main()
{
	
	Test();
	return 0;	
}