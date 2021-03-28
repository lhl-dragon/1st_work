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
		printf("请输入1-10之间的一个数:");
		scanf_s("%d", &choice);
		/*while (choice > 0 || choice<10) {
			scanf_s("%d", &choice);
		}*/
		switch (choice) {
		case 1:DestroyList(&head);
			InitList(&head); 
			printf("初始化成功！\n");
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
			printf("中间结点值为：%5d\n", FindMidNode(&head)->data);
			system("pause");
			system("cls");
			break;
		case 6:ReverseList(&head);
			printf("反转成功\n");
			system("pause");
			system("cls");
			break;
		case 7:ReverseEvenList(&head);
			printf("奇偶位调换成功\n");
			system("pause");
			system("cls");
			break;
		case 8:if (IsLoopList(head))printf("成环\n");
			  else printf("不成环\n");
			system("pause");
			system("cls");
			break;
		case 9:DestroyList(&head);
			printf("摧毁成功\n");
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