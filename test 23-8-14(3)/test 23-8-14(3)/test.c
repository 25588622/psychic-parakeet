#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//дһ�����������ҳ����������е����ֵ

int get_max(int x,int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	int x = 0;
	int y = 0;
	printf("��������������\n");
	scanf("%d %d",&x,&y);
	int max = get_max(x,y);
	printf("max = %d\n", max);
	return 0;
}