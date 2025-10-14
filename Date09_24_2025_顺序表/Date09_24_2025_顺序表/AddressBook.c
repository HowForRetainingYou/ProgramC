#include "AddressBook.h"
#include "SequenceList.h"

void AddressBookInit(TXL* e)//相当于(SL*p),传存储结构体的顺序表指针
{

	SeqListInit(e);
	
}

void AddressBookDestroy(TXL* e)
{
	char name[NAME_MAX];
	printf("Please input the name you want to delete:\n");
	scanf("%s", &name);

}

void AddressBookAdd(TXL* e)
{
	PI info;

	printf("Plese input name:\n");
	scanf("%s", &info.name);
	printf("Plese input gender:\n");
	scanf("%s", &info.gender);
	printf("Plese input age:\n");
	scanf("%d", &info.age);
	printf("Plese input phone:\n");
	scanf("%s", &info.phone);
	printf("Plese input address:\n");
	scanf("%s", &info.address);
	SeqListPushBack(e, info);
	printf("Insert successfully!\n");
}
void AddressBookShow(const TXL* e)
{
	for (int i = 0; i < e->size; i++)
	{
		printf("Name:%s Gender:%s Age:%d Phone:%s Address:%s\n",e->a[i].name, e->a[i].gender, e->a[i].age, e->a[i].phone, e->a[i].address);
	}
}
void AddressBookDelete(TXL* e)
{

}
void AddressBookFind(const TXL* e)
{

}
void AddressBookModify(TXL* e)
{

}
