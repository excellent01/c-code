#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (k = 0; k < 4; k++)
	{
		for (i = 0; i < 4; i++)
		{
			printf("��");
			printf("  ");
		}
		printf("\n");
		for (j = 0; j < 4; j++)
		{
			printf("  ");
			printf("��");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}