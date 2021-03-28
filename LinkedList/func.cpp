#include"LinkedList.h"
#include"func.h"
#include<stdio.h>
#include<stdlib.h>

void menu() {
	printf("*******菜单*******\n");
	printf("1.初始化链表\n");
	printf("2.新增结点\n");
	printf("3.删除结点\n");
	printf("4.遍历链表\n");
	printf("5.寻找中间结点值\n");
	printf("6.反向链表\n");
	printf("7.奇偶位取反\n");
	printf("8.判断链表是否成环\n");
	printf("9.销毁链表\n");
	printf("10.退出\n");
}


void insert(LinkedList* head) {
	printf("请输入一个int值:");
	int num;
	scanf_s("%d", &num);
	LinkedList p = (LinkedList)malloc(sizeof(LNode));
	p->data = num;
	p->next = NULL;
	InsertList(*head, p);
	printf("添加成功\n");
	system("pause");
	system("cls");
}

void drop(LinkedList* head) {
	printf("当前链表所有结点值为：");
	TraverseList(*head, &visit);
	printf("\n");
	printf("请输入要删除第几个结点：");
	int num;
	scanf_s("%d", &num);
	LinkedList p = *head;
	int j = 1;
	while (j < num && p->next) {
		p = p->next;
		j++;
	}
	int e;
	DeleteList(p, &e);
	system("pause");
	system("cls");
}


void visit(ElemType e) {
	printf("%5d", e);
}