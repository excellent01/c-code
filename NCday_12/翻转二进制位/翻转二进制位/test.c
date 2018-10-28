#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	unsigned int ret = 0;
	for (i = 0; i < 32; i++)
	{
		ret <<= 1;//����һλ���ұ���ǰһλ����������3
		int bit = (value >> i) & 1;//ȡ��ÿһλ
		ret |= bit;//ȡ��һλ�ͷ���ret�����һλ
	}
	return ret;
}
unsigned int reverse_bit2(unsigned int value)
{
	unsigned int sum = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		sum += ((value >> i) & 1)*pow(2, 31 - i);
	}
	return sum;
}
int main()
{
	unsigned int ret = 0;
	unsigned int value = 0;
	scanf("%d", &value);
	ret= reverse_bit2(value);
	printf("%u\n", ret);
	system("pause");
	return 0;
}