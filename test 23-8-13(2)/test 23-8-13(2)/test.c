#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���1-100֮�������

int main()
{
	int i = 0;
	for (i = 1; i < 101; i++)
	{
		if (i % 2 == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}