#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int x, y, z,j,k,l;
    scanf("%d %d %d", &x, &y, &z);
    j = z > (x > y ? x : y) ? z : (x > y ? x : y);//���ֵ
    k = z > (x > y ? x : y) ? (x > y ? x : y) : z;//�м�ֵ
    l = z > (x > y ? y : x) ? (x > y ? y : x) : z;//��Сֵ
    printf("%d %d %d", j, k, l);



    return 0;
}
