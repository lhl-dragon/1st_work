#include"duLinkedList.h"
#include"func.h"
#include<stdio.h>
#include<stdlib.h>

void menu() {
	printf("*******�˵�*******\n");
	printf("1.��ʼ������\n");
	printf("2.��ӽ��\n");
	printf("3.ɾ�����\n");
	printf("4.�������\n");
	printf("5.�ݻ�����\n");
	printf("6.�˳�\n");
}

void insertafter(DuLinkedList* head) {
	printf("������һ��intֵ:");
	int num;
	scanf_s("%d", &num);
	DuLinkedList p = (DuLinkedList)malloc(sizeof(DuLNode));
	p->data = num;
	p->prior =NULL;
	p->next = NULL;
	InsertAfterList_DuL(*head, p);
	printf("��ӳɹ�\n");
	system("pause");
	system("cls");
}

void drop(DuLinkedList* head) {
	printf("��ǰ�������н��ֵΪ��");
	TraverseList_DuL(*head, &visit);
	printf("\n");
	printf("������Ҫɾ���ڼ�����㣺");
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