#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void ShowBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走\n");
	while (1)
	{
		printf("请输入坐标：\n");
		scanf("%d %d", &x, &y);
		if ((x >= 1 && x <= 3) && (y >= 1 && y <= 3))
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("非法坐标，请重新输入\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	int j = 0;
	for (i = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[0][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	if ((board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ') ||
		board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ')
	{
		return board[1][1];
	}
	if (1 == IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}