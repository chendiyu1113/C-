#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{ 
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//数组
	int k=7;//要查找的数字
	int sz = sizeof(arr) / sizeof(arr[0]);//数组总长度除以单个长度得到数组个数
	int left=0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else 
		{
			printf("找到了，数字是：%d\n", mid + 1);
			break;
		}
	}
	return 0;
}
