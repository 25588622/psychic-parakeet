#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��д��������������ʱ���������ַ����ĳ���

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
	printf("�ַ�������Ϊ��%d\n", ret);
	return 0;
}