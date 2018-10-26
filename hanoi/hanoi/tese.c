#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
void hanoi(int n, char x, char y, char z)
{
	//�����һ�����ӣ�ֱ�Ӵ�X����Z;
	//����
	//    �Ƚ�n-1����X����>Y,
	//    �ٽ�X�����ϵ����һ����X-->Z
	//    ���n-1�����Ӵ�Y����>Z

	if (n<=1)
	{
		printf("�����Ϊ%d�Ĵ�%c------------>%c\n", n, x, z);
	}
	else
	{
		hanoi(n - 1, x,z,y);
		printf("�����Ϊ%d�Ĵ�%c------------>%c\n", n, x, z);
		hanoi(n - 1, y,x,z);
	}
}
int main()
{
	int n = 0;
	char ch='x',ch2= 'y', ch3='z';
	scanf("%d", &n);
	hanoi(n,'x','y','z');
	system("pause");
	return 0;
}