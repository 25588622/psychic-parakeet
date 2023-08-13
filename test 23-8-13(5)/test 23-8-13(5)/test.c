#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��һ�����������в��Ҿ����ĳ������n �����ֲ��ҷ���

int binary_search(int* arr, int k, int sz)
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
		else if (arr[mid]> k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	}
}

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	printf("�ҵ�������ֵ��±��ˣ�%d\n", ret);
	return 0;
}