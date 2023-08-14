#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//编写函数不允许创建临时变量，求字符串的长度

int get_strlen(char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		arr++;
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	int ret = get_strlen(arr);
	printf("字符串长度为：%d\n", ret);
	return 0;
}