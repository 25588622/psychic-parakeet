#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺����1234��  ��� 1 2 3 4�������ݹ�ķ�����

void print(unsigned int num)
{
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d ", num % 10);
}

int main()
{
	unsigned int num = 1234;
	print(num);
	return 0;
}