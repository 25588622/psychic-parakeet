#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����

int main()
{
	char password[20] = { 0 };
	int i = 3;
	while (i)
	{
		printf("���������룺\n");
		scanf("%s", &password);
		if (strcmp(password, "123456") == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
		i--;
	}
	printf("����ر�\n");
	return 0;
}