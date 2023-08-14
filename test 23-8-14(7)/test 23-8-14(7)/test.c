#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//写一个函数，实现一个整形有序数组的二分查找

void binary_search(int* arr, int sz, int k)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] == k)
		{
			printf("找到这个数字的下标了：%d\n", mid);
			break;
		}
	}
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	binary_search(arr, sz, k);
	return 0;
}