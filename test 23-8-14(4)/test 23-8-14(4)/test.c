#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//дһ���������Խ����������α���������

void Swap(int* px, int* py)
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}

int main()
{
	int x = 0;
	int y = 0;
	printf("�����������֣�\n");
	scanf("%d %d", &x, &y);
	Swap(&x, &y);
	printf("a = %d  b = %d\n", x, y);
	return 0;
}