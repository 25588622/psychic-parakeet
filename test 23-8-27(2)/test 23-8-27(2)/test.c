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
	char OutBoard[ROWS][COLS] = { 0 };
	char InBoard[ROWS][COLS] = { 0 };
	//��ʼ������
	InitBoard(OutBoard, ROWS, COLS, '*');
	InitBoard(InBoard, ROWS, COLS, '0');
	//��ӡ����
	ShowBoard(OutBoard, ROW, COL);
	printf("\n");
	//����
	SetBoard(InBoard, ROW, COL);
	//ShowBoard(InBoard, ROW, COL);
	printf("\n");
	//����
	FindBoard(InBoard, OutBoard, ROW, COL);
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
			printf("�����������������\n");
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