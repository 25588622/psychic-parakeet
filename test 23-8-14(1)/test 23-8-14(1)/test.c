#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//猜数字游戏

void menu()
{
	printf("*********************************\n");
	printf("*********   1、play    **********\n");
	printf("*********   0、exit    **********\n");
	printf("*********************************\n");
}

void game()
{
	int guess = 0;
	int random_num = rand() % 100 + 1;//rand()会返回一个范围在0到RAND_MAX（至少是32767）之间的伪随机数（整数）
	while (random_num)
	{
		printf("请输入猜的数字：\n");
		scanf("%d", &guess);
		if (guess < random_num)
		{
			printf("猜小了\n");
		}
		else if (guess > random_num)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了！！！\n");
			break;
		}
	}
}

void test()
{
	srand((unsigned int)time(NULL));//随机种子，给rand函数
    int input;
	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
		}
	} while (input);
	printf("关闭程序\n");
}

int main()
{
	test();
	return 0;
}