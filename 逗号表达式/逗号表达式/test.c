#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0;
	int b = 0;
	a = 3 * 2, a * 8;     //�����a=3*2���õ�a=6��Ȼ��6*8=48�����ʽ��ֵΪ48������a��ֵΪ6
	b = (3 * 2, a * 8);   
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}