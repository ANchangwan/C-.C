#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>


#define MAX 100


struct node {
    int number;
    char section[MAX];
    char buy_list[MAX];
    char date[MAX];
    int price;
    int leftover_money;
    struct node* link;
};


node* head = NULL, * temp;


int menu()
{
    int select_num;

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
    scanf("%c");;
    system("cls");

    return select_num;
}

void menu_0() // 전체 사용 목록 보기
{
    if (head == NULL) { printf("\n기록이 없습니다!!\n"); }
    else {
        temp = head;
        printf("번호\t구분\t항목\t날짜\t금액\t잔여금액\n");

        while (temp != NULL) {
            printf("%d\t%s\t%s\t%s\t%d\t%d\n", temp->number, temp->section, temp->buy_list, temp->date, temp->price, temp->leftover_money);
            temp = temp->link;
        }
        printf("\n");
    }
}



void menu_1()  // 입금 목록만 보기
{
    if (head == NULL) { printf("입금 목록이 업습니다!!\n"); }
    else {
        temp = head;
        printf("번호\t구분\t항목\t날짜\t금액\t잔여금액\n");
        while (temp != NULL) {
            if (strcmp(temp->section, "입금") == 0) {
                printf("%d\t%s\t%s\t%s\t%d\t%d\n", temp->number, temp->section, temp->buy_list, temp->date, temp->price, temp->leftover_money);
            }
            temp = temp->link;
        }
    }
}




void menu_2() // 출금 목록만 보기
{
    if (head == NULL) { printf("입금 목록이 업습니다!!\n"); }
    else {
        temp = head;
        printf("번호\t구분\t항목\t날짜\t금액\t잔여금액\n");
        while (temp != NULL) {
            if (strcmp(temp->section, "출금") == 0) {
                printf("%d\t%s\t%s\t%s\t%d\t%d\n", temp->number, temp->section, temp->buy_list, temp->date, temp->price, temp->leftover_money);
            }
            temp = temp->link;
        }
    }
}




void menu_3()  //입금 정보 추가
{
    int pre_price = 0;

    printf("========================\n");
    printf("입금 정보 추가\n");
    printf("========================\n");

    if (head == NULL) {
        head = (node*)malloc(sizeof(node));
        printf("번호 : ");
        scanf(" %d", &head->number);
        scanf("%c");
        printf("항목 : ");
        gets_s(head->buy_list);
        printf("날짜 : ");
        gets_s(head->date);
        printf("금액 : ");
        scanf("%d", &head->price);
        scanf("%c");
        head->leftover_money = head->price;
        strcpy(head->section, "입금");
        head->link = NULL;
    }
    else {
        temp = head;
        while (temp->link != NULL) { temp = temp->link; }

        pre_price = temp->leftover_money;
        temp = temp->link = (node*)malloc(sizeof(node));
        printf("번호 : ");
        scanf("%d", &temp->number);
        scanf("%c");
        printf("항목 : ");
        gets_s(temp->buy_list);
        printf("날짜 : ");
        gets_s(temp->date);
        printf("금액 : ");
        scanf("%d", &temp->price);
        scanf("%c");
        temp->leftover_money = pre_price + temp->price;
        strcpy(temp->section, "입금");
        temp->link = NULL;
    }

}

void menu_4()  // 출금 정보 추가
{
    int pre_price;

    printf("========================\n");
    printf("출금 정보 추가\n");
    printf("========================\n");

    if (head == NULL) {
        head = (node*)malloc(sizeof(node));
        printf("번호 : ");
        scanf("%d", &head->number);
        scanf("%c");
        printf("항목 : ");
        gets_s(head->buy_list);
        printf("날짜 : ");
        gets_s(head->date);
        printf("금액 : ");
        scanf("%d", &head->price);
        scanf("%c");
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
        scanf("%c");
        printf("항목 : ");
        gets_s(temp->buy_list);
        printf("날짜 : ");
        gets_s(temp->date);
        printf("금액 : ");
        scanf("%d", &temp->price);
        scanf("%c");
        temp->leftover_money = pre_price - temp->price;
        strcpy(temp->section, "출금");
        temp->link = NULL;
    }

}

void menu_5()  //입출금 정보 검색 보기
{
    char search[MAX];

    temp = head;

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

void menu_6()  // 입출금 항목명 수정
{
    int num;

    temp = head;

    printf("===========================\n");
    printf("입출금 항목명 수정\n");
    printf("===========================\n");
    printf("번호 : ");
    scanf("%d", &num);
    scanf("%c");

    while (temp != NULL) {
        if (temp->number == num) {
            printf("수정 내용 : ");
            gets_s(temp->buy_list);
            printf("2번 항목을 %s로 수정하였습니다.\n", temp->buy_list);
        }
        temp = temp->link;
    }
}

void menu_7()  //입출금 항목 삭제
{
    int num;
    node** phead = &head, * pre = NULL;

    if (head == NULL) printf("입력된 값이 없습니다.\n");
    else {
        temp = head;
        printf("===========================\n");
        printf("입출금 항목  삭제\n");
        printf("===========================\n");
        printf("번호 : ");
        scanf("%d", &num);
        scanf("%c");

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
}



int main(void)
{
    while (true) {
        int select;

        select = menu();
        if (select == 0) { menu_0(); }
        else if (select == 1) { menu_1(); }
        else if (select == 2) { menu_2(); }
        else if (select == 3) { menu_3(); }
        else if (select == 4) { menu_4(); }
        else if (select == 5) { menu_5(); }
        else if (select == 6) { menu_6(); }
        else if (select == 7) { menu_7(); }
        else if (select == 9) {
            printf("종료되었습니다.\n");
            break;
        }
        else printf("다시 입력해주세요\n");
    }
    return 0;
}
