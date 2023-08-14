#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//写一个函数可以判断一个数是不是素数

void is_prime(int num)
{
	int i;
	int count = 0;
	for (i = 2; i < num; i++)
	{
		if (num%i == 0)
		{
			printf("不是素数\n");
			break;
		}
		count++;
	}
	if (count == num - 2)
	{
		printf("是素数\n");
	}
}

int main()
{
	int num = 0;
	printf("请输入一个数字：\n");
	scanf("%d", &num);
    is_prime(num);
	return 0;
}