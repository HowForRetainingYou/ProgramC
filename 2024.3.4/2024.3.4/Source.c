#define _CRT_SECURE_NO_WARNINGS 1
???????
???https ://zhuanlan.zhihu.com/p/504217421
?????
??????????????????????????????????

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define w 1.8/*?1.8?/?*/
#define e 0.5/*?0.5?/?*/
struct user {
	char name[10], ID[20];/*???????????*/
	double water, electricity;/*??(?)??(?)?*/
	double monney;/*???????*/
}u[100];/*???????100*/
/*??????*/
void display() {
	int n;/*?????????*/
	int i;
	for (n = 0; n < 100; n++)
		if (u[n].monney == 0) break;
	if (n == 0)
		printf("?????,????!^_^\n");
	else
		for (i = 0; i < n; i++)
			printf("\n??:%d\t??:%s\tID:%s\t???:%.1f?\t???:%.1f?\n", i + 1, u[i].name, u[i].ID, u[i].water, u[i].electricity);
}
/*????*/
void add() {
	int n;/*?????????*/
	for (n = 0; n < 100; n++)
		if (u[n].monney == 0) break;
	printf("\t\t\t?????????:");
	scanf("%s", u[n].name);
	printf("\t\t\t???????ID(18?):");
	scanf("%s", u[n].ID);
	printf("\t\t\t??????????:");
	scanf("%lf", &u[n].water);
	printf("\t\t\t??????????:");
	scanf("%lf", &u[n].electricity);
	u[n].monney = (u[n].water) * w + (u[n].electricity) * e;
	printf("\n????!\n");
}
/*??????*/
void alter() {
	char name[10];
	int n;/*?????????*/
	int i;
	printf("\t\t\t???????:");
	scanf("%s", name);
	for (n = 0; n < 100; n++)
		if (u[n].monney == 0) break;
	for (i = 0; i < n; i++)
		if (strcmp(u[i].name, name) == 0) {
			int choice = 0;
			printf("\n\t\t\t1.??ID\n\t\t\t2.?????\n\t\t\t3.?????\n\t\t\t4.??\n");
			printf("\n\t\t\t???????:");
		GOTO1:scanf("%d", &choice);
			switch (choice)
			{
			case 1:
				printf("\n\t\t\t???ID:");
				scanf("%s", u[i].ID);
				break;
			case 2:
				printf("\n\t\t\t??????:");
				scanf("%lf", &u[i].water);
				break;
			case 3:
				printf("\n\t\t\t??????:");
				scanf("%lf", &u[i].electricity);
				break;
			case 4:
				break;
			default:
				printf("\t\t\t????,?????:");
				goto GOTO1;
			}
			printf("\n????!\n");
			break;
		}
	if (i == n)
		printf("\n\t\t\t?????,??????????^_^!\n");
}
/*????*/
void delete_() {
	int n, i = 0, j;
	for (n = 0; n < 100; n++)
		if (u[n].monney == 0) break;
	display();
	printf("\n\t\t\t?????????????:");
	scanf("%d", &i);
	for (j = i - 1; j < n; j++) {
		strcpy(u[j].name, u[j + 1].name);
		u[j].electricity = u[j + 1].electricity;
		strcpy(u[j].ID, u[j + 1].ID);
		u[j].monney = u[j + 1].monney;
		u[j].water = u[j + 1].water;
	}
	u[n - 1].monney = 0;
	printf("????!^_^\n");
}
/*????*/
void m_user() {
	int choice = 0;
GOTO2:system("cls");
	printf("\t\t\t---------------------\n");
	printf("\t\t\t|    ????^_^    |\n");
	printf("\t\t\t---------------------\n\n\n");

	printf("\n\t\t\t1.??????\n\t\t\t2.????\n\t\t\t3.??????\n\t\t\t4.??????\n\t\t\t5.??");
	printf("\n\t\t\t???????:");
GOTO3:scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		display();
		system("pause");
		goto GOTO2;
	case 2:
		add();
		system("pause");
		goto GOTO2;
	case 3:
		alter();
		system("pause");;
		goto GOTO2;
	case 4:
		delete_();
		system("pause");;
		goto GOTO2;
	case 5:
		break;
	default:
		printf("\t\t\t????,?????:");
		goto GOTO3;
	}
}
/*????*/
void m_fee() {
	int n, i, choice = 0;
	double w_sum = 0, e_sum = 0;
GOTO4:system("cls");
	printf("\t\t\t---------------------\n");
	printf("\t\t\t|    ????^_^    |\n");
	printf("\t\t\t---------------------\n\n\n");
	for (n = 0; n < 100; n++)
		if (u[n].monney == 0) break;
	printf("\n\t\t\t1.????????\n\t\t\t2.???\n\t\t\t3.???\n\t\t\t4.???\n\t\t\t5.??\n");
	printf("\n\t\t\t???????:");
GOTO5:scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		if (n == 00)
			printf("\n\t\t\t???????!\n");
		else
			for (i = 0; i < n; i++) {
				printf("\n\t??:%s\t??:%.2f?\t??:%.2f?\t??????:%.2f?\n", u[i].name, (u[i].water) * w, (u[i].electricity) * e, u[i].monney);
				w_sum += u[i].water * w;
				e_sum += u[i].electricity * e;
			}
		system("pause");
		goto GOTO4;
	case 2:
		printf("\n\t\t\t??????????:%.2f?\n", w_sum);
		system("pause");
		goto GOTO4;
	case 3:
		printf("\n\t\t\t??????????:%.2f?\n", e_sum);
		system("pause");
		goto GOTO4;
	case 4:
		printf("\n\t\t\t??????????:%.2f?\n", w_sum + e_sum);
		system("pause");
		goto GOTO4;
	case 5:
		printf("????!\n");
		break;
	default:
		printf("\n\t\t\t????,?????:");
		goto GOTO5;
	}
}
void main() {
	int choice = 0;
GOTO6:system("cls");
	printf("\t\t\t-----------------------------------\n");
	printf("\t\t\t|    ???????????^_^    |\n");
	printf("\t\t\t-----------------------------------\n\n\n");
	printf("\n\t\t\t1.????\n\t\t\t2.????\n\t\t\t3.??\n");
	printf("\n\t\t\t???????:");
GOTO7:scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		m_user();
		system("pause");
		goto GOTO6;
	case 2:
		m_fee();
		system("pause");
		goto GOTO6;
	case 3:
		break;
	default:
		printf("\n??????,?????:");
		goto GOTO7;
	}
}
//?? display();//?????????? } if ((fp = fopen("data.txt", "wb")) == NULL)//???????? { printf("???????!\n"); return; } //???????? for (i = 0; i < record; i++) fwrite(&Link_s[i], LEN, 1, fp); printf("???????(y/n)");//?????? scanf("%s", ch); while (strcmp(ch, "Y") == 0 || strcmp(ch, "y") == 0)//?????????? { printf("??:"); scanf("%s", &Link_s[record].name); //????????????????? for (i = 0; i < record; i++) if (strcmp(Link_s[i].name, Link_s[record].name) == 0) { printf("???????????????"); getch(); fclose(fp); return; } printf("????:"); scanf("%s", &Link_s[record].unit); printf("????:"); scanf("%s", &Link_s[record].phone); printf("E-mail:"); scanf("%s", &Link_s[record].mail); if (fwrite(&Link_s[record], LEN, 1, fp) != 1)//??????????????? { printf("???????"); getch(); //?????? } else { printf("%s ??????!\n", Link_s[record].name); record++; } printf("??????????(y/n):"); scanf("%s", ch); } fclose(fp); printf("????!\n");}void enquiry() //?????{ menu();//????? FILE* fp; int i, n, record = 0; char ch[2], name[20], phone[15];//????????????? //?????????????????????????????? if ((fp = fopen("data.txt", "rb")) == NULL) { printf("???????\n"); return; } while (feof(fp) == 0)//??????????? if (fread(&Link_s[record], LEN, 1, fp) == 1) record++;//record???????? fclose(fp); if (record == 0) { printf("????????\n"); return; } printf("???????1?????????2?"); scanf("%d", &n); if (n == 1) { printf("?????:"); scanf("%s", name); } if (n == 2) { printf("???????:"); scanf("%s", phone); } //?????????????????????????? for (i = 0; i < record; i++) if ((strcmp(name, Link_s[i].name) == 0) || (strcmp(phone, Link_s[i].phone) == 0)) { printf("???????????(y/n):"); scanf("%s", ch); if (strcmp(ch, "Y") == 0 || strcmp(ch, "y") == 0) { printf("?? ???? ???? E-mail \t\n "); printf("%-s %-s %-s %-s\n", Link_s[i].name, Link_s[i].unit, Link_s[i].phone, Link_s[i].mail); } break; } //?????????????????????????????????? if (i == record) printf("???????\n");}void alter() //???????{ menu();//????? FILE* fp; int i, j, record = 0; char name[20]; if ((fp = fopen("data.txt", "r+")) == NULL) { printf("??????!\n"); return; } while (feof(fp) == 0) if (fread(&Link_s[record], LEN, 1, fp) == 1) record++; if (record == 0) { printf("???????!\n"); fclose(fp); return; } display(); //???????// printf("??????????????\n"); scanf("%s", &name); for (i = 0; i < record; i++) { if (strcmp(name, Link_s[i].name) == 0) { printf("??????????????\n"); printf("??:"); scanf("%s", &Link_s[i].name); printf("????:"); scanf("%s", &Link_s[i].unit); printf("????:"); scanf("%s", &Link_s[i].phone); printf("E-mail??:"); scanf("%s", &Link_s[i].mail); printf("?????"); //??????????????????? if ((fp = fopen("data.txt", "wb")) == NULL) { printf("???????\n"); return; } for (j = 0; j < record; j++) if (fwrite(&Link_s[j], LEN, 1, fp) != 1) { printf("?????"); getch(); //?????? } fclose(fp); return; } } printf("???????????\n");//???????????}void del() //???????{ menu();//????? FILE* fp; int i, j, record = 0; char ch[2]; char name[15]; if ((fp = fopen("data.txt", "r+")) == NULL) { printf("???????!\n"); return; } while (feof(fp) == 0) if (fread(&Link_s[record], LEN, 1, fp) == 1) record++; fclose(fp); if (record == 0) { printf("????????!\n"); return; } display(); //??????? printf("?????????????"); scanf("%s", &name); for (i = 0; i < record; i++) { if (strcmp(name, Link_s[i].name) == 0) { printf("????????????(y/n)"); scanf("%s", ch); if (strcmp(ch, "Y") == 0 || strcmp(ch, "y") == 0) for (j = i; j < record; j++) Link_s[j] = Link_s[j + 1]; record--; //?????????????????? if ((fp = fopen("data.txt", "wb")) == NULL) { printf("??????!\n"); return; } for (j = 0; j < record; j++) if (fwrite(&Link_s[j], LEN, 1, fp) != 1) { printf("????!\n");  getch(); //?????? } fclose(fp); printf("????!\n"); return; } } printf("????????!\n");}void display() //???????{ menu();//????? FILE* fp; int i, record = 0; fp = fopen("data.txt", "rb");//?????????? //??????? while (feof(fp) == 0) { if (fread(&Link_s[record], LEN, 1, fp) == 1) record++; } fclose(fp);//???? printf("?? ???? ???? E-mail \t\n"); for (i = 0; i < record; i++) printf("%-s %-s  %-s %-s\n", Link_s[i].name, Link_s[i].unit, Link_s[i].phone, Link_s[i].mail);}