#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//��������Ϸ

void menu()
{
	printf("*********************************\n");
	printf("*********   1��play    **********\n");
	printf("*********   0��exit    **********\n");
	printf("*********************************\n");
}

void game()
{
	int guess = 0;
	int random_num = rand() % 100 + 1;//rand()�᷵��һ����Χ��0��RAND_MAX��������32767��֮���α�������������
	while (random_num)
	{
		printf("������µ����֣�\n");
		scanf("%d", &guess);
		if (guess < random_num)
		{
			printf("��С��\n");
		}
		else if (guess > random_num)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�����\n");
			break;
		}
	}
}

void test()
{
	srand((unsigned int)time(NULL));//������ӣ���rand����
    int input;
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
		}
	} while (input);
	printf("�رճ���\n");
}

int main()
{
	test();
	return 0;
}