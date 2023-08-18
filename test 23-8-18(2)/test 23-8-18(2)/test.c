#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求出0～100000之间的所有“水仙花数”并输出

#include<math.h>
int main()
{
	int n = 0;
	for (n = 0; n < 100001; n++)
	{
		//1、计算n的位数 - i位数
		int i = 1;
		int tmp = n;
		int sum = 0;
		while (tmp /= 10)
		{
			i++;
		}
		//2、计算你的每一位的i次方之和sum
		tmp = n;
		while (tmp)
		{
			sum += pow(tmp % 10, i);//pow函数是计算次方的
			tmp /= 10;
		}
		//3、比较n == sum
		if (n == sum)
		{
			printf("%d ", n);
		}
	}
	return 0;
}