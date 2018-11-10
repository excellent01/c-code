#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
void menu()
{
	printf("################################\n");
	printf("#######  1: add   2:sub  #######\n");
	printf("#######  3: mul   4:div  #######\n");
	printf("#######  0:exit          #######\n");
	printf("################################\n");
}

int add(int x, int y)  //��
{
	return x + y;
}

int sub(int x, int y)//��
{
	return x - y;
}
int mul(int x, int y)//��
{
	return x * y;
}
int div_(int x, int y)//��
{
	if (y == 0)
	{
		printf("Error\n");
		return -1;
	}
	else
		return x / y;
}
int main()
{
	char op[5] = { '0', '+', '-', '*', '/' };
	int(*p[5])(int x,int y) = {0, add, sub, mul,div_};//����ָ������
	unsigned select = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	do
	{
		menu();
		printf("Please input: ");
		scanf("%d", &select);
		if (select <= 4 && select >= 1)
		{
			printf("����������� :<x,y>\n");
			scanf("%d%d", &x, &y);
			ret = (*p[select])(x, y);
			printf("%d %c %d = %d\n", x, op[select], y, ret);
		}
		if (select == 0)
		{
			printf("�˳�\n");
		}
		if (select>4)
		{
			printf("��������\n");
		}
	} while (select);
	system("pause");
	return 0;
}