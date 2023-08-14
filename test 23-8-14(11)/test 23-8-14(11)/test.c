#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求第n个斐波那契数。（不考虑溢出）

int Fibonacci(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
		return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
	int n = 0;
	printf("请输入要求的位数：\n");
	scanf("%d", &n);
	int ret = Fibonacci(n);
	printf("%d\n", ret);
	return 0;
}