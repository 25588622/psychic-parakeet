#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//交替合并字符串（从第一句开始）


void mergeAlternately(char * word1, char * word2, char * word3)
{
	int lenth1 = strlen(word1);
	int lenth2 = strlen(word2);
	int i = 0;
	int j = 0;
	int m = 0;
	while (i < lenth1 && j < lenth2)
	{
		word3[m] = word1[i];
		i++;
		m++;
		word3[m] = word2[j];
		j++;
		m++;
	}
	while (i < lenth1)
	{
		word3[m] = word1[i];
		i++;
		m++;
	}
	while (j < lenth2)
	{
		word3[m] = word2[j];
		j++;
		m++;
	}
}
int main()
{
	char word1[10] = "abcdefg";
	char word2[10] = "qw";
	char word3[20] = { 0 };
	mergeAlternately(word1, word2, word3);
	printf("%s\n", word3);
	return 0;
}