#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("***************************\n");
	printf("*******1. 开始游戏*********\n");
	printf("*******0. 退出游戏*********\n");
	printf("***************************\n");
}
void game()
{
	int x = rand()%100+1;
	int y = 0;
	while (1) 
	{
		printf("猜一个数字:");
		scanf("%d", &y);

		if (y < x)
		{
			printf("太小了\n");
		}
		else if (y > x)
		{
			printf("太大了\n");
		}
		else
		{
			printf("你真厉害，猜对了~！\n");
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
		printf("请选择：");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}


	} while (input);


	return 0;
}
