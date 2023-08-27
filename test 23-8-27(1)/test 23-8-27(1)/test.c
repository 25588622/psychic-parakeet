#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"

void menu()
{
	printf("********************************\n");
	printf("****   1��play    0��exit   ****\n");
	printf("********************************\n");
}

void game()
{
	char ret;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);//��ʼ������
	ShowBoard(board, ROW, COL);//��ӡ����

	while (1)
	{
		PlayerMove(board, ROW, COL);//�����
		ShowBoard(board, ROW, COL);//��ӡ����
		ret = IsWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//������
		ShowBoard(board, ROW, COL);//��ӡ����
		ret = IsWin(board, ROW, COL);//�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������!!!\n");
			break;
		}
	} while (input);
	printf("�˳�����\n");
}

int main()
{
	test();
	return 0;
}