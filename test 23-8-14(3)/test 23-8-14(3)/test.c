#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//写一个函数可以找出两个整数中的最大值

int get_max(int x,int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	int x = 0;
	int y = 0;
	printf("请输入两个数：\n");
	scanf("%d %d",&x,&y);
	int max = get_max(x,y);
	printf("max = %d\n", max);
	return 0;
}