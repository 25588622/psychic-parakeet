#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//���������ַ��� haystack �� needle ��
//������ haystack �ַ������ҳ� needle �ַ����ĵ�һ��ƥ������±꣨�±�� 0 ��ʼ����
//��� needle ���� haystack ��һ���֣��򷵻�  -1 ��
int strStr(char * haystack, char * needle)
{
	assert(haystack&&needle);
	char*s1 = NULL;
	char*s2 = NULL;
	char* cur = haystack;
	if (needle == '\0')
	{
		return 0;
	}
	int count = 0;
	while (*cur)
	{
		s1 = cur;
		s2 = needle;
		while (*s1&&*s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			//return cur;
			return count;
		}
		if (*s1 == '\0')
		{
			return -1;
		}
		cur++;
		count++;
	}
	return -1;
}






//int strStr(const char * haystack, const char * needle)
//{
//	assert(haystack&&needle);
//	char*s1 = NULL;
//	char*s2 = NULL;
//	char* cur = (char*)haystack;
//	if (*needle == '\0')
//	{
//		return (char*)haystack;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)needle;
//		while (*s1&&*s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char* haystack = "mississippi";
//	char* needle = "issip";
//	char* ret = strStr(haystack, needle);
//	if (ret == NULL)
//	{
//		printf("û���Ӵ�\n");
//	}
//	else
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}