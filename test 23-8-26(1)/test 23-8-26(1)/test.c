#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<windows.h>
void menu()
{
	printf("***********************************\n");
	printf("**********     1��play    *********\n");
	printf("**********     0��exit    *********\n");
	printf("***********************************\n");
}

void game()
{
	int guess = 0;
	int random_num = rand() % 100 + 1;//rand()�᷵��һ����Χ��0��RAND_MAX��������32767��֮���α�������������
	while (random_num)
	{
		printf("��������µ����֣�\n");
		scanf("%d", &guess);
		if (random_num < guess)
		{
			printf("�´���\n");
		}
		else if (random_num>guess)
		{
			printf("��С��\n");
		}
		else if (random_num == guess)
		{
			printf("�¶���\n");
			break;
		}
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));//������ӣ���rand����
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
			printf("�������,����������\n");
			break;
		}
	} while (input);
	printf("��������\n");
}

int main()
{
	test();
	return 0;
}