#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//º∆À„ 1!+ 2!+ 3!+ °≠°≠ + 10!

int main()
{
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (i = 1; i <= 10; i++)
	{
		ret = ret*i;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}