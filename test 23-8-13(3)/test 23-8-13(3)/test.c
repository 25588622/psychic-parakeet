#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//计算n的阶乘

int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	printf("请输入要计算阶乘的数字：\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret*i;
	}
	printf("%d\n", ret);
	return 0;
}