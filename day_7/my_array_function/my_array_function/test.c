
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
void init(int arr[],int n)
{
	int i = 0;
	for (i = 0; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}
}
void empty(int arr[],int n)
{
	int i = 0;
	for (i = 0; i <= n; i++)
	{
		arr[i] = 0;
	}
}
void reverse(int arr[], int n)
{
	int i = 0;
	for (i = 0; i <= n/2; i++)
	{
		int tmp = arr[i];
		arr[i] = arr[n - i];
		arr[n - i] = tmp;
	}
}
void output_arr(int arr[], int n)
{
	{
		int i = 0;
		for (i = 0; i <= n; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[10];
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	init(arr,sz);
	output_arr(arr, sz);
	reverse(arr, sz);
	output_arr(arr, sz);
	empty(arr, sz);
	output_arr(arr, sz);
	system("pause");
	return 0;

}