#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����n�Ľ׳�

int main()
{
	int n = 0;
	int i = 0;
	int ret = 1;
	printf("������Ҫ����׳˵����֣�\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret*i;
	}
	printf("%d\n", ret);
	return 0;
}