#include "SinglyLinkedList.h"

int SimpleTest()
{
	node* newNode1 = (struct node*)malloc(sizeof(node));
	newNode1->data = 1;
	node* newNode2 = (struct node*)malloc(sizeof(node));
	newNode2->data = 2;
	node* newNode3 = (struct node*)malloc(sizeof(node));
	newNode3->data = 3;
	node* newNode4 = (struct node*)malloc(sizeof(node));
	newNode4->data = 4;
	node* newNode5 = (struct node*)malloc(sizeof(node));
	newNode5->data = 5;
	node* newNode6 = (struct node*)malloc(sizeof(node));
	newNode6->data = 6;

	newNode1->next = newNode2;
	newNode2->next = newNode3;
	newNode3->next = newNode4;
	newNode4->next = newNode5;
	newNode5->next = newNode6;
	newNode6->next = NULL;

	node* cur = newNode1;
	int count = 0;
	while (cur)
	{
		count++;
		printf("The %d Node value is %d\n", count, cur->data);
		cur = cur->next;
	}
	printf("NULL\n ");
	return;
}



int main()
{
	/*SimpleTest();*/
	node* a = NULL;//Remember to initiaize it to NULL,last time I forgot it and got a hard to find bug
	SLLPushBack(&a,1);
	SLLPushBack(&a,2);
	SLLPushBack(&a,3);
	SLLPushBack(&a,4);
	SLLPushBack(&a,6);
	SLLPushBack(&a,7);
	SLLPopBack(&a);
	//SLLPopFront(&a);
	SLLPushFront(&a, 0);
	node* cur = a;
	int count = 0;
	while (cur)
	{
		count++;
		printf("The %d Node value is %d\n", count, cur->data);
		cur = cur->next;
	}

	return 0;
}