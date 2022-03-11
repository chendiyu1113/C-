#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	scanf("请输入你的年龄%d",&a);
	if (a < 18)
		printf("少年\n");
	else if (a >= 18 && a < 30)
		printf("青年\n");
	else if (a >= 30 && a < 45)
		printf("壮年\n");
	else if (a >= 45 && a < 60)
	printf("中年\n");
	else if (a >= 60 && a< 110)
	printf("老年\n");
	else 
	printf("神仙\n");




	return 0;



}