#define _CRT_SECURE_NO_WARNINGS 2
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("**********************************************\n");
	printf("******************1:play**********************\n");
	printf("******************0:exit**********************\n");
	printf("**********************************************\n");
}
void game()
{
	int num = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{
		printf("��������µ�����0--100��num=");
		scanf("%d", &num);
		if (num > ret)
		{
			printf("�´���\n");
		}
		else if (num == ret)
		{
			printf("��ϲ��¶��ˣ�\n");
			break;
		}
		else
		{
			printf("��С��\n");
		}
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int a = 0;
	int num = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (a);
	system("pause");
	return 0;
}