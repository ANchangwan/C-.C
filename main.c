#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include "list_set.h"

int menu()
{
	int select_num = 0;

	printf("0. 전체 사용 목록 보기\n");
	printf("1. 입금 목록만 보기\n");
	printf("2. 출금 목록만 보기\n");
	printf("3. 입금 정보 추가\n");
	printf("4. 출금 정보 추가\n");
	printf("5. 입출금 정보 검색 보기(항목명 검색)\n");
	printf("6. 입출금 항목명 수정\n");
	printf("7. 입출금 항목 삭제\n");
	printf("9. 종료\n");
	printf("번호 : ");
	scanf("%d", &select_num);
	scanf("%*c");
	system("cls");

	return select_num;
}


void node_data(struct node* head)
{
	int select = 0;

	head = load_data(head);

	while (1) {
		select = menu();
		if (select == 0) { menu_0(head); }
		else if (select == 1) { menu_1(head); }
		else if (select == 2) { menu_2(head); }
		else if (select == 3) { head = menu_3(head); }
		else if (select == 4) { head = menu_4(head); }
		else if (select == 5) { menu_5(head); }
		else if (select == 6) { head = menu_6(head); }
		else if (select == 7) { head = menu_7(head); }
		else if (select == 9) {
			save_data(head);
			printf("종료되었습니다.\n");
			break;
		}
		else printf("다시 입력해주세요\n");
	}
}





