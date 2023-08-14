#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//写一个函数判断一年是不是闰年(1000-2000年)

void IsLeapYear(int year)
{
	for (year = 1000; year < 2001; year++)
	{
		if (((year % 4) == 0 && (year % 100) != 0) || (year % 400 == 0))
		{
			printf("%d ", year);
		}
	}
}

int main()
{
	int year=1000;
    IsLeapYear(year);
	return 0;
}