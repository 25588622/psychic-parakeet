#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���n��쳲����������������������

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
	printf("������Ҫ���λ����\n");
	scanf("%d", &n);
	int ret = Fibonacci(n);
	printf("%d\n", ret);
	return 0;
}