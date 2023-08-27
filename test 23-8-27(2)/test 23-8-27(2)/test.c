#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"

void menu()
{
	printf("********************************\n");
	printf("****   1、play    0、exit   ****\n");
	printf("********************************\n");
}

void game()
{
	char OutBoard[ROWS][COLS] = { 0 };
	char InBoard[ROWS][COLS] = { 0 };
	//初始化棋盘
	InitBoard(OutBoard, ROWS, COLS, '*');
	InitBoard(InBoard, ROWS, COLS, '0');
	//打印棋盘
	ShowBoard(OutBoard, ROW, COL);
	printf("\n");
	//埋雷
	SetBoard(InBoard, ROW, COL);
	//ShowBoard(InBoard, ROW, COL);
	printf("\n");
	//排雷
	FindBoard(InBoard, OutBoard, ROW, COL);
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
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
			break;
		}
	} while (input);
	printf("退出程序\n");
}

int main()
{
	test();
	return 0;
}