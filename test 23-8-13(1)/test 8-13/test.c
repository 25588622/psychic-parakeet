#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ж�һ�����Ƿ�Ϊ����

//void Fun(const int num)
//{
//	if (num % 2 == 1)          //ȡ�����ķ���
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��ż��\n");
//	}
//}

void Fun(const int num)
{
	if (num & 1 == 1)          //��λ��ķ���
	{
		printf("������\n");
	}
	else
	{
		printf("��ż��\n");
	}
}

int main()
{
	int num = 0;
	printf("������һ�����֣�\n");
	scanf("%d", &num);
	Fun(num);
	return 0;
}
