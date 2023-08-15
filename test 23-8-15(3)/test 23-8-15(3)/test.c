#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//分数的求和（计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值）

int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i < 101; i++)
	{
		double ret = (flag*1.0) / i;
		sum += ret;
		flag = -flag;
	}
	printf("%f\n", sum);
	return 0;
}