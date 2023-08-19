#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//给你两个字符串 haystack 和 needle ，
//请你在 haystack 字符串中找出 needle 字符串的第一个匹配项的下标（下标从 0 开始）。
//如果 needle 不是 haystack 的一部分，则返回  -1 。
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
//		printf("没有子串\n");
//	}
//	else
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}