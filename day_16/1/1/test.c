#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int fib_1(n)
{
	if (n <= 2)
		return 1;
	else
		return fib_1(n - 1) + fib_1(n - 2);
}
int fib_2(n)
{
	int a = 1;
	int b = 1;
	int i = 0;
	int c = 1;
	for (i = 1; i <= n-2; i++)//��3������1�Σ���4����2�Σ���5����3��....
	{
		 c = a + b;
		 a = b;
		 b = c;
	}
	return c;
}
int main()
{
	int ret = 0;
	int n = 0;
	scanf("%d", &n);
	ret = fib_1(n);
	printf("  �ݹ�ʵ�ֵ�%d��쳲���������%d\n",n ,ret);
	ret = fib_2(n);
	printf("�ǵݹ�ʵ�ֵ�%d��쳲���������%d\n", n, ret);
	system("pause");
	return 0;
}