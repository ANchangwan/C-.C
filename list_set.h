#pragma once
#define MAX 100

typedef struct node {
	int number;
	char section[MAX];
	char buy_list[MAX];
	char date[MAX];
	int price;
	int leftover_money;
	struct node* link;
}node;

extern void node_data(struct node* head);
extern node* load_data(struct node* head);
extern void save_data(struct node* head);
extern node* menu_7(struct node* head);
extern node* menu_6(struct node* head);
extern void menu_5(struct node* head);
extern node* menu_4(struct node* head);
extern node* menu_3(struct node* head);
extern void menu_2(struct node* head);
extern void menu_1(struct node* head);
extern void menu_0(struct node* head);