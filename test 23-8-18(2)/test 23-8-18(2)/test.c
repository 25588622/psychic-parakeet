#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���0��100000֮������С�ˮ�ɻ����������

#include<math.h>
int main()
{
	int n = 0;
	for (n = 0; n < 100001; n++)
	{
		//1������n��λ�� - iλ��
		int i = 1;
		int tmp = n;
		int sum = 0;
		while (tmp /= 10)
		{
			i++;
		}
		//2���������ÿһλ��i�η�֮��sum
		tmp = n;
		while (tmp)
		{
			sum += pow(tmp % 10, i);//pow�����Ǽ���η���
			tmp /= 10;
		}
		//3���Ƚ�n == sum
		if (n == sum)
		{
			printf("%d ", n);
		}
	}
	return 0;
}