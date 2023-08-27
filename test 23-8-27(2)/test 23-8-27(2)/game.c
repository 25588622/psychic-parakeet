#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"

void InitBoard(char Board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			Board[i][j] = set;
		}
	}
}

void ShowBoard(char Board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)//��ӡ����
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//��ӡ����
		for (j = 1; j <= col; j++)
		{
			printf("%c ", Board[i][j]);
		}
		printf("\n");
	}
}

void SetBoard(char Board[ROWS][COLS], int row, int col)
{
	int count = COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
		{
			if (Board[x][y] == '0')
			{
				Board[x][y] = '+';
				count--;
			}
		}
	}
}

int Get_Count(char Board[ROWS][COLS], int x, int y)
{
	int count = 0;
	if (Board[x - 1][y - 1] == '+')
	{
		count++;
	}
	if (Board[x - 1][y] == '+')
	{
		count++;
	}
	if (Board[x - 1][y + 1] == '+')
	{
		count++;
	}
	if (Board[x][y - 1] == '+')
	{
		count++;
	}
	if (Board[x][y] == '+')
	{
		count++;
	}
	if (Board[x][y + 1] == '+')
	{
		count++;
	}
	if (Board[x + 1][y - 1] == '+')
	{
		count++;
	}
	if (Board[x + 1][y] == '+')
	{
		count++;
	}
	if (Board[x + 1][y + 1] == '+')
	{
		count++;
	}
	return count;
}
void FindBoard(char InBoard[ROWS][COLS], char OutBoard[ROWS][COLS], int row, int col)
{
	int win = COUNT;
	int x = 0;
	int y = 0;
	while (win)
	{
		printf("���������꣺\n");
		scanf("%d %d", &x, &y);
		if ((x >= 1 && x <= row) && (y >= 1 && y <= col))
		{
			if (InBoard[x][y] == '+')//����
			{
				printf("���ź����㱻ը����\n");
				ShowBoard(InBoard, ROW, COL);
				break;
			}
			else//û����
			{
				int count = Get_Count(InBoard, x, y);
				OutBoard[x][y] = count + '0';
				ShowBoard(OutBoard, ROW, COL);
				win--;
			}
		}
		else
		{
			printf("�Ƿ����꣬����������\n");
		}
	}
	if (win == 0)
	{
		printf("���׳ɹ�\n");
		ShowBoard(InBoard, ROW, COL);
	}
}