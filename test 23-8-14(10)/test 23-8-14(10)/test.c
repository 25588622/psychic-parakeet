#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求n的阶乘（不考虑栈溢出）（用阶乘的方法）

int factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n - 1);
	}
}

int main()
{
	int n = 5;
	printf("请输入要求阶乘的数：\n");
	scanf("%d", &n);
	int ret = factorial(n);
	printf("%d\n", ret);
	return 0;
}