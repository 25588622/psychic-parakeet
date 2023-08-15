#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//计算器（使用函数指针数组实现）

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("*************************\n");
	printf("   1:Add         2:Sub   \n");
	printf("   3:Mul         4:Div   \n");
	printf("***      0、exit      ***\n");
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int(*pfarr[5])(int, int) = { 0, Add, Sub, Mul, Div };//pfarr-函数指针数组（用途：转移表）
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &input);
		if (input>=1&&input<=4)
		{
			printf("请输入两个操作数：\n");
			scanf("%d %d", &x, &y);
			int ret = pfarr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出程序\n");
		}
		else
		{
			printf("选择错误，请重新选择\n");
		}
	} while (input);
	return 0;
}




//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("*************************\n");
//	printf("   1:Add         2:Sub   \n");
//	printf("   3:Mul         4:Div   \n");
//	printf("***      0、exit      ***\n");
//}
//
//void Calc(int(*pf)(int, int))  //解决switch语句中的冗杂（回调函数实现）
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数：\n");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}




//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("*************************\n");
//	printf("   1:Add         2:Sub   \n");
//	printf("   3:Mul         4:Div   \n");
//	printf("***      0、exit      ***\n");
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数：\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数：\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数：\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数：\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}