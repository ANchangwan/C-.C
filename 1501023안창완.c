#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include "list_set.h"

extern int menu();


void menu_0(struct node* head) // ��ü ��� ��� ����
{
	struct node* temp;

	if (head == NULL) { printf("\n기록이없습니다.\n"); return; }
	else {
		temp = head;
		printf("번호\t구분\t항목\t날짜\t금액\t잔여금액\n");


		while (temp != NULL) {
			printf("%d\t%s\t%s\t%s\t%d\t%d\n", temp->number, temp->section, temp->buy_list, temp->date, temp->price, temp->leftover_money);
			temp = temp->link;
		}
	}
}



void menu_1(struct node* head)  // �Ա� ��ϸ� ����
{
	int num = 1;
	struct node* temp;

	if (head == NULL) { printf("입금 목록이 업습니다!!\n"); }
	else {
		temp = head;
		printf("번호\t구분\t항목\t날짜\t금액\t잔여금액\n");
		while (temp != NULL) {
			if (strcmp(temp->section, "�Ա�") == 0) {
				printf("%d", num);
				printf("\t%s\t%s\t%s\t%d\t%d\n", temp->section, temp->buy_list, temp->date, temp->price, temp->leftover_money);
				num++;
			}
			temp = temp->link;
		}
	}
}




void menu_2(struct node* head) // ��� ��ϸ� ����
{
	struct node* temp;

	if (head == NULL) { printf("입금 목록이 없습니다!!\n"); }
	else 
	{

		temp = head;
		printf("번호\t구분\t항목\t날짜\t금액\t잔여금액\n");
		while (temp != NULL) 
		{
			if (strcmp(temp->section, "출금") == 0) 
			{
				printf("%d\t%s\t%s\t%s\t%d\t%d\n", temp->number, temp->section, temp->buy_list, temp->date, temp->price, temp->leftover_money);
			}
			temp = temp->link;
		}
	}
}





struct node* menu_3(struct node* head)  //�Ա� ���� �߰�
{
	struct node* temp;
	int pre_price = 0;

	printf("========================\n");
	printf("입금 정보 추가\n");
	printf("========================\n");


	if (head == NULL) {
		head = (struct node*)malloc(sizeof(node));
		printf("번호 : ");
		scanf("%d", &head->number);
		scanf("%*c");
		printf("항목 : ");
		get_s(head->buy_list);
		printf("날짜 : ");
		get_s(head->date);
		printf("금액 : ");
		scanf("%d", &head->price);
		scanf("%*c");
		head->leftover_money = head->price;
		strcpy(head->section, "입금");
		head->link = NULL;

	}
	else {
		temp = head;
		while (temp->link != NULL) { temp = temp->link; }
		pre_price = temp->leftover_money;
		temp = temp->link = (struct node*)malloc(sizeof(node));
		printf("번호 : ");
		scanf("%d", &temp->number);
		scanf("%*c");
		printf("항목 : ");
		gets(temp->buy_list);
		printf("날짜 : ");
		gets(temp->date);
		printf("금액 : ");
		scanf("%d", &temp->price);
		scanf("%*c");
		temp->leftover_money = pre_price + temp->price;
		strcpy(temp->section, "입금");
		temp->link = NULL;

	}
	return head;
}

struct node* menu_4(struct node* head)  // ��� ���� �߰�
{
	struct node* temp;
	int pre_price;

	printf("========================\n");
	printf("출금 정보 추가\n");
	printf("========================\n");


	if (head == NULL) {
		head = (struct node*)malloc(sizeof(node));
		printf("번호 : ");
		scanf("%d", &head->number);
		scanf("%*c");
		printf("항목 : ");
		get_s(head->buy_list);
		printf("날짜 : ");
		get_s(head->date);
		printf("금액 :  ");
		scanf("%d", &head->price);
		scanf("%*c");
		head->leftover_money = -head->price;
		strcpy(head->section, "출금");
		head->link = NULL;
	}

	else {
		temp = head;
		while (temp->link != NULL) { temp = temp->link; }

		pre_price = temp->leftover_money;
		temp = temp->link = (node*)malloc(sizeof(node));
		printf("번호 : ");
		scanf("%d", &temp->number);
		scanf("%*c");
		printf("항목 :  ");
		gets(temp->buy_list);
		printf("날짜 : ");
		gets(temp->date);
		printf("금액 :  ");
		scanf("%d", &temp->price);
		scanf("%*c");
		temp->leftover_money = pre_price - temp->price;
		strcpy(temp->section, "출금");
		temp->link = NULL;

	}
	return head;
}



void menu_5(struct node* head)  //����� ���� �˻� ����
{
	struct node* temp = head;
	char search[MAX];

	if (head == NULL) { printf("기록이없습니다.\n"); }
	else {
		printf("========================\n");
		printf("입출금 정보 검색 보기(항목명 검색)\n");
		printf("========================\n");
		printf("검색 : ");
		scanf("%s", &search);

		printf("번호\t구분\t항목\t날짜\t금액\t잔여금액\n");
		while (temp != NULL) {
			if (strcmp(temp->buy_list, search) == 0) {
				printf("%d\t%s\t%s\t%s\t%d\t%d\n", temp->number, temp->section, temp->buy_list, temp->date, temp->price, temp->leftover_money);
			}
			temp = temp->link;
		}
	}
}

node* menu_6(struct node* head)  // ����� �׸�� ����
{
	int num;
	node* temp = head;

	printf("===========================\n");
	printf("입출금 항목명 수정\n");
	printf("===========================\n");
	printf("번호 : ");

	scanf("%d", &num);
	scanf("%*c");

	if (head == NULL) { printf("기록이 없습니다.\n"); }
	while (temp != NULL) {
		if (temp->number == num) {
			printf("수정내용 : ");
			gets(temp->buy_list);
			printf("2번 항목을 %s로 수정하였습니다.\n", temp->buy_list);
		}
		temp = temp->link;
	}
	return head;
}

node* menu_7(node* head)  //����� �׸� ����
{
	int num;
	node** phead = &head, * pre = NULL, * temp;

	if(head == NULL) { printf("입력된 값이 없습니다.\n"); }
	else {
		temp = head;
		printf("===========================\n");
		printf("입출금 항목  삭제\n");
		printf("===========================\n");
		printf("번호 : ");
		scanf("%d", &num);
		scanf("%*c");

		if (temp->link == NULL) { head = NULL; }
		else {
			while (temp != NULL) {
				if (temp->number == num) {
					if (pre == NULL) *phead = temp->link;
					else pre->link = temp->link;
					printf("%d번 항목 삭제 되었습니다.\n", temp->number);
					break;
				}
				pre = temp;
				temp = temp->link;
			}
		}
	}
	return head;
}


void save_data(node* head)
{
	FILE* file_save = fopen("bankList.dat", "w");
	node* temp;

	temp = head;
	while (temp != NULL) {
		fprintf(file_save, "%d %s %s %s %d %d\n", temp->number, temp->section, temp->buy_list, temp->date, temp->price, temp->leftover_money);
		temp = temp->link;
	}
	fclose(file_save);
}


node* load_data(node* head)
{
	node* temp;
	FILE* data;
	char* line, * strTemp;

	data = fopen("bankList.dat", "rb");
	if (data == NULL) {
		head = NULL;
		return NULL;
	}
	else {
		while (data != NULL) {
			line = (char*)malloc(sizeof(char) * 100);
			if (fgets(line, _msize(line), data) == NULL) break;
			else {
				if (head == NULL) {
					head = (node*)malloc(sizeof(node));
					strTemp = strtok(line, " ");
					head->number = atoi(strTemp);
					strTemp = strtok(NULL, " ");
					strcpy(head->section, strTemp);
					strTemp = strtok(NULL, " ");
					strcpy(head->buy_list, strTemp);
					strTemp = strtok(NULL, " ");
					strcpy(head->date, strTemp);
					strTemp = strtok(NULL, " ");
					head->price = atoi(strTemp);
					strTemp = strtok(NULL, " ");
					head->leftover_money = atoi(strTemp);
					head->link = NULL;
			}
				else {
					temp = head;
					while (temp->link != NULL) { temp = temp->link; }
					temp = temp->link = (node*)malloc(sizeof(node));
					strTemp = strtok(line, " ");
					temp->number = atoi(strTemp);
					strTemp = strtok(NULL, " ");
					strcpy(temp->section, strTemp);
					strTemp = strtok(NULL, " ");
					strcpy(temp->buy_list, strTemp);
					strTemp = strtok(NULL, " ");
					strcpy(temp->date, strTemp);
					strTemp = strtok(NULL, " ");
					temp->price = atoi(strTemp);
					strTemp = strtok(NULL, " ");
					temp->leftover_money = atoi(strTemp);
					temp->link = NULL;
				}
			}
		}
	}

	fclose(data);
	return head;
}			

//void node_data(node* head)
//{
//	int select = 0;
//
//	head = load_data(head);
//
//	while (true) {
//		select = menu();
//		if (select == 0) { menu_0(head); }
//		else if (select == 1) { menu_1(head); }
//		else if (select == 2) { menu_2(head); }
//		else if (select == 3) { head = menu_3(head); }
//		else if (select == 4) { head = menu_4(head); }
//		else if (select == 5) { menu_5(head); }
//		else if (select == 6) { head = menu_6(head); }
//		else if (select == 7) { head = menu_7(head); }
//		else if (select == 9) {
//			save_data(head);
//			printf("����Ǿ����ϴ�.\n");
//			break;
//		}
//		else printf("�ٽ� �Է����ּ���\n");
//	}
//}




int main(void)
{
	node* head = NULL;

	node_data(head);

	free(head);
	return 0;
}






