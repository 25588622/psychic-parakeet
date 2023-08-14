#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//дһ��������ʵ��һ��������������Ķ��ֲ���

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
			printf("�ҵ�������ֵ��±��ˣ�%d\n", mid);
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