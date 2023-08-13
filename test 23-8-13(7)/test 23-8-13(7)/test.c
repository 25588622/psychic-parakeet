#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序

int main()
{
	char password[20] = { 0 };
	int i = 3;
	while (i)
	{
		printf("请输入密码：\n");
		scanf("%s", &password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功\n");
			break;
		}
		else
		{
			printf("输入错误\n");
		}
		i--;
	}
	printf("程序关闭\n");
	return 0;
}