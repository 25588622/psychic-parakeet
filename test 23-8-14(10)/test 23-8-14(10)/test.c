#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��n�Ľ׳ˣ�������ջ��������ý׳˵ķ�����

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
	printf("������Ҫ��׳˵�����\n");
	scanf("%d", &n);
	int ret = factorial(n);
	printf("%d\n", ret);
	return 0;
}