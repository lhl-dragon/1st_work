#include"LinkedList.h"
#include"func.h"
#include<stdio.h>
#include<stdlib.h>

void menu() {
	printf("*******�˵�*******\n");
	printf("1.��ʼ������\n");
	printf("2.�������\n");
	printf("3.ɾ�����\n");
	printf("4.��������\n");
	printf("5.Ѱ���м���ֵ\n");
	printf("6.��������\n");
	printf("7.��żλȡ��\n");
	printf("8.�ж������Ƿ�ɻ�\n");
	printf("9.��������\n");
	printf("10.�˳�\n");
}


void insert(LinkedList* head) {
	printf("������һ��intֵ:");
	int num;
	scanf_s("%d", &num);
	LinkedList p = (LinkedList)malloc(sizeof(LNode));
	p->data = num;
	p->next = NULL;
	InsertList(*head, p);
	printf("��ӳɹ�\n");
	system("pause");
	system("cls");
}

void drop(LinkedList* head) {
	printf("��ǰ�������н��ֵΪ��");
	TraverseList(*head, &visit);
	printf("\n");
	printf("������Ҫɾ���ڼ�����㣺");
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