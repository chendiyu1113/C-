#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("***************************\n");
	printf("*******1. ��ʼ��Ϸ*********\n");
	printf("*******0. �˳���Ϸ*********\n");
	printf("***************************\n");
}
void game()
{
	int x = rand()%100+1;
	int y = 0;
	while (1) 
	{
		printf("��һ������:");
		scanf("%d", &y);

		if (y < x)
		{
			printf("̫С��\n");
		}
		else if (y > x)
		{
			printf("̫����\n");
		}
		else
		{
			printf("�����������¶���~��\n");
			break;
		}
	}
}
int main()
{ 
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}


	} while (input);


	return 0;
}
