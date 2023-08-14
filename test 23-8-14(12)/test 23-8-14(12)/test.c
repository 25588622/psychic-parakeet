#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//冒泡排序（将一个整形数组排序）

void bubble_sort(int* arr, int sz)
{
	int line = 1;
	while (line)
	{
		for (int i = 0; i < sz; i++)
		{
			for (int j = 0; j < sz - 1; j++)
			{
				if (arr[j]>arr[j + 1])
				{
					int tmp = 0;
					tmp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = tmp;
					line = 0;
				}
			}
		}
	}
}

int main()
{
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}