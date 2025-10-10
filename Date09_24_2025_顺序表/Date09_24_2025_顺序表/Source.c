#include "SequenceList.h"//此处不能用.c,不然会重复定义
int Test()
{
	SL p1;
	SeqListInit(&p1);
	SeqListPushBack(&p1, 1);
	SeqListPushBack(&p1, 2);
	SeqListPushBack(&p1, 3);
	SeqListPushBack(&p1, 4);
	SeqListPushBack(&p1, 5);

}

int main()
{
	
	Test();
	return 0;	
}