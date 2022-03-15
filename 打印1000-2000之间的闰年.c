#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int y = 1000;
	int count = 0;
	for (;y <= 2000; y++)
		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		{
			count++;
			printf("  %d  ", y);
		}
	printf("\n  %d  \n", count);
	return 0;
}