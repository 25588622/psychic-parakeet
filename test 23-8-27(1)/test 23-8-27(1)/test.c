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
	char ret;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);//初始化棋盘
	ShowBoard(board, ROW, COL);//打印棋盘

	while (1)
	{
		PlayerMove(board, ROW, COL);//玩家走
		ShowBoard(board, ROW, COL);//打印棋盘
		ret = IsWin(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//电脑走
		ShowBoard(board, ROW, COL);//打印棋盘
		ret = IsWin(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
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
			printf("输入错误，请重新输入!!!\n");
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