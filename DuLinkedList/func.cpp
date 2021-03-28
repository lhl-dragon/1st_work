#include"duLinkedList.h"
#include"func.h"
#include<stdio.h>
#include<stdlib.h>

void menu() {
	printf("*******菜单*******\n");
	printf("1.初始化链表\n");
	printf("2.添加结点\n");
	printf("3.删除结点\n");
	printf("4.遍历结点\n");
	printf("5.摧毁链表\n");
	printf("6.退出\n");
}

void insertafter(DuLinkedList* head) {
	printf("请输入一个int值:");
	int num;
	scanf_s("%d", &num);
	DuLinkedList p = (DuLinkedList)malloc(sizeof(DuLNode));
	p->data = num;
	p->prior =NULL;
	p->next = NULL;
	InsertAfterList_DuL(*head, p);
	printf("添加成功\n");
	system("pause");
	system("cls");
}

void drop(DuLinkedList* head) {
	printf("当前链表所有结点值为：");
	TraverseList_DuL(*head, &visit);
	printf("\n");
	printf("请输入要删除第几个结点：");
	int num;
	scanf_s("%d", &num);
	DuLinkedList p = (DuLinkedList)malloc(sizeof(DuLNode));
	p = *head;
	int j = 1;
	while (j < num && p->next) {
		p = p->next;
		j++;
	}
	int e;
	DeleteList_DuL(*head, &e);
	system("pause");
	system("cls");
}

void visit(ElemType e) {
	printf("%5d", e);
}