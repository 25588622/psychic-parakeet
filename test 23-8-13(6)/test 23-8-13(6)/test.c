#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��д���룬��ʾ����ַ��������ƶ������м���

#include<windows.h>
#include<time.h>
//int main()    //�������Ҵ�ӡ
//{
//	char arr1[] =  "##############" ;
//	char arr2[] =  "Hello World!!!" ;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr1[i] = arr2[i];
//		arr1[i] = arr2[i];
//		printf("%s", arr1);
//		Sleep(1000);//��Ϣһ��
//		system("cls");//ִ��ϵͳ����ĺ���  cls-�����Ļ
//	}
//	printf("%s", arr1);
//	return 0;
//}



int main()     //���������м��ӡ
{
	char arr1[] = "welcome to China!!!!";
	char arr2[] = "####################";
	int left = 0;
	int right = strlen(arr1) - 1;//int right = sizeof(arr1)/sizeof(arr1[0]) - 2;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//��Ϣһ��
		system("cls");//ִ��ϵͳ����ĺ���  cls-�����Ļ
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}