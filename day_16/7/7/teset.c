//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
void print(int n)
{
	if (n > 9)
		print(n / 10);
	printf("%d ", n % 10);
}
int main()
{
	int n = 23456;
	print(n);
	system("pause");

}