#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int bottle = 20;
	int tmp = bottle;
	while (tmp / 2)
	{
		if (tmp % 2 == 1)
		{
			bottle++;
		}
		tmp = tmp / 2;
		bottle += tmp;
	}
	printf("%d\n", bottle);
	return 0;
}