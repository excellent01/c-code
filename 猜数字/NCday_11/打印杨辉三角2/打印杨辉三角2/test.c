#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#define N 7
int main()
{
	int arr[N][N] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < N; i++)//��ÿһ�еĵ�һ�����ֺ����һ�����ֶ�Ϊ1��
	{
		arr[i][0] = 1;
		if (i > 1)    //��ֹ����Խ��
		{
			arr[i][i - 1] = 1;
		}
		for (j = 1; j <= i ; j++)//ÿһ���ڲ����������������ϵ�������֮��
		{
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N - i; j++)
		{
			printf(" ");    //��ӡ�ո�ʹ�������Ӧ�ĸ�ʽ
		}
		for (j = 0; j <=i-1; j++)
		{
			printf("%4d", arr[i][j]);   //��������,ÿһ��ֻ���ӡǰi-1����
		}
		printf("\n");
	}

	system("pause");
	return 0;
}