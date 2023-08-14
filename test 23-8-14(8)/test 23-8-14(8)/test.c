#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//接受一个整型值（无符号），按照顺序打印它的每一位（例如：输入1234，  输出 1 2 3 4））（递归的方法）

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