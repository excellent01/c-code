#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int a = 10;
	int b = 15;
	printf("����ǰ   a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("������   a=%d b=%d\n", a, b);
	system("pause");
	return  0;
}