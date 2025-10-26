#include "SinglyLinkedList.h"

node* CreateNode(DataType data)
{
	node* newNode = (node*)malloc(sizeof(node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void SLLPrint(node* head)
{
	node* cur = head;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
void SLLPushBack(node** head, DataType data)
{

	node* newNode = CreateNode(data);//Create a new node
	if (*head == NULL)//Judege if the liit is empty
	{
		*head = newNode;//Just make newNode the *head
	}
	else///If the list is not empty
	{
		node* cur = *head;//
		while (cur->next)
		{
			cur = cur->next;
		}
		cur->next = newNode;
	}
}

	void SLLPopBack(node** head)	
	{
		assert(*head&&head);
		if ((*head)->next == NULL)//"->" has higher priority than "*",so we need to use parentheses here
		{
			free(*head);
			*head = NULL;
		}
		else
		{
			node* cur = *head;
			node* lastone = cur;
			while (cur->next)
			{
				lastone = cur;
				cur = cur->next;
			}
			free(cur);
			cur = NULL;
			lastone->next = NULL;
		}
	}


	void SLLPopFront(node** head)//Head its type is "**"//传过来的是 &? 是指针，需要二级指针接受,head这个单词本身就代表了二级指针
	{
		node* next = (*head)->next;
		free(*head);
		*head = next;
	}


	void SLLPushFront(node** head,DataType data)
	{
		
		node*newNode=CreateNode(data);
		newNode->next = *head;
		newNode->data = data;
		*head = newNode;
	}

	node* SLLFind(node* head, DataType tofind)
	{
		node* cur = head;
		while (cur)
		{
			if (cur->data == tofind)
			{
				printf("Find successfully");
			}
		}
		printf("Not found");
		return cur;
	}