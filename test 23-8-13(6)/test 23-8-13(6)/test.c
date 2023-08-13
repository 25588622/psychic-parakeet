#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//编写代码，演示多个字符从两端移动，向中间汇聚

#include<windows.h>
#include<time.h>
//int main()    //从左往右打印
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
//		Sleep(1000);//休息一秒
//		system("cls");//执行系统命令的函数  cls-清空屏幕
//	}
//	printf("%s", arr1);
//	return 0;
//}



int main()     //从两边向中间打印
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
		Sleep(1000);//休息一秒
		system("cls");//执行系统命令的函数  cls-清空屏幕
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}