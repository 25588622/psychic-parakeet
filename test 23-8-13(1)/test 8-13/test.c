#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//判断一个数是否为奇数

//void Fun(const int num)
//{
//	if (num % 2 == 1)          //取余数的方法
//	{
//		printf("是奇数\n");
//	}
//	else
//	{
//		printf("是偶数\n");
//	}
//}

void Fun(const int num)
{
	if (num & 1 == 1)          //按位与的方法
	{
		printf("是奇数\n");
	}
	else
	{
		printf("是偶数\n");
	}
}

int main()
{
	int num = 0;
	printf("请输入一个数字：\n");
	scanf("%d", &num);
	Fun(num);
	return 0;
}
