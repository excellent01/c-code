//һ�����ݣ�����һ��Ԫ�س�����һ���⣬����Ԫ�ض�����������
//�ҳ����ֻ����һ�ε�Ԫ��
#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int find_diff(int* arr, int len)
{
	int i = 0;
	int j = 0;
	int sum = 0;
	int ret = 0;
	int tmp[32] = { 0 };
	for (i = 0; i < 32; i++)
	{
		for (j = 0; j < len; j++)  //��������ͬһ������λ������
		{
			tmp[i] += ((arr[j] >> i) & 1); //������ģ3���õ��Ľ���������������ñ���λ��ֵ��
		}
		ret += (tmp[i] % 3) << i;   //Ȼ������������
		
	}
	return ret;
}
int main()
{
	int arr[22] = { 13, 3, 4, 6, 54, 43, 32, 9, 13, 3, 4, 6, 54, 43, 32, 13, 3, 4, 6, 54, 43, 32 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int ret=find_diff(arr, len);
	printf("%d\n", ret);
	system("pause");
	return 0;
}