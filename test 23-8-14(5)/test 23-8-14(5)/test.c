#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//дһ�����������ж�һ�����ǲ�������

void is_prime(int num)
{
	int i;
	int count = 0;
	for (i = 2; i < num; i++)
	{
		if (num%i == 0)
		{
			printf("��������\n");
			break;
		}
		count++;
	}
	if (count == num - 2)
	{
		printf("������\n");
	}
}

int main()
{
	int num = 0;
	printf("������һ�����֣�\n");
	scanf("%d", &num);
    is_prime(num);
	return 0;
}