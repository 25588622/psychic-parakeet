#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//给定两个字符串 s 和 t ，它们只包含小写字母。字符串 t 由字符串 s 随机重排，然后在随机位置添加一个字母。
//请找出在 t 中被添加的字母。

char FindTheDifference(char arr1[], char arr2[], int len1, int len2)
{
	int i = 0;
	int sum1 = 0;
	for (i = 0; i < len1; i++)
	{
		sum1 += arr1[i];
	}
	int j = 0;
	int sum2 = 0;
	for (j = 0; j < len2; j++)
	{
		sum2 += arr2[j];
	}
	if (sum1>sum2)
	{
		return sum1 - sum2;
	}
	else
	{
		return sum2 - sum1;
	}
}
int main()
{
	char arr1[] = "abcd";
	char arr2[] = "acdbf";
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	char ret = FindTheDifference(arr1, arr2, len1, len2);
	printf("%c\n", ret);
	return 0;
}