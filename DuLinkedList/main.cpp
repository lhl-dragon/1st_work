#include"duLinkedList.h"
#include"func.h"
#include<stdio.h>
#include<stdlib.h>

int main()
{
	DuLinkedList head = NULL;
	InitList_DuL(&head);
	int choice;
	while (1)
	{
		menu();
		printf("������1-10֮���һ����:");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:DestroyList_DuL(&head);
			InitList_DuL(&head);
			printf("��ʼ���ɹ���\n");
			system("pause");
			system("cls");
			break;
		case 2:insertafter(&head);
			break;
		case 3:drop(&head);
			break;
		case 4:TraverseList_DuL(head, &visit);
			printf("\n");
			system("pause");
			system("cls");
			break;
		case 5:DestroyList_DuL(&head);
			printf("�ݻٳɹ���\n");
			system("pause");
			system("cls");
			break;
		case 6:exit(1);
			break;
		default:break;
		}
	}
}