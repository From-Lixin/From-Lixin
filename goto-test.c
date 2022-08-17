#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<time.h>
#include<string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 30");
	again:
	printf("您的电脑将在30秒之内关机，若要取消该计划，请输入：“取消关机”:>\n");
	scanf("%s", &input);
	if (strcmp(input, "取消关机") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
}
