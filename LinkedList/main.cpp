#include<stdio.h>
#include<stdlib.h>
#include"LinkedList.h"
#include"func.h"

int main()
{
	LinkedList head = NULL;
	InitList(&head);
	int choice;
	while (true) {
		menu();
		printf("������1-10֮���һ����:");
		scanf_s("%d", &choice);
		/*while (choice > 0 || choice<10) {
			scanf_s("%d", &choice);
		}*/
		switch (choice) {
		case 1:DestroyList(&head);
			InitList(&head); 
			printf("��ʼ���ɹ���\n");
			system("pause");
			system("cls");
			break;
		case 2:insert(&head);
			break;
		case 3:drop(&head);
			break;
		case 4:TraverseList(head,&visit);
			printf("\n");
			system("pause");
			system("cls");
			break;
		case 5:
			printf("�м���ֵΪ��%5d\n", FindMidNode(&head)->data);
			system("pause");
			system("cls");
			break;
		case 6:ReverseList(&head);
			printf("��ת�ɹ�\n");
			system("pause");
			system("cls");
			break;
		case 7:ReverseEvenList(&head);
			printf("��żλ�����ɹ�\n");
			system("pause");
			system("cls");
			break;
		case 8:if (IsLoopList(head))printf("�ɻ�\n");
			  else printf("���ɻ�\n");
			system("pause");
			system("cls");
			break;
		case 9:DestroyList(&head);
			printf("�ݻٳɹ�\n");
			system("pause");
			system("cls");
			break;
		case 10:exit(1);
			break;
		default:
			break;
		}
	}
	return 0;
}