#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int check_sys()
{
	int a = 1;
	return *(char*)&a;     // ȡ��ַĬ��ȡ����ֽڵ�ַ�������͵�ַǿ��ת��Ϊchar*����		                  
	                        //�ٽ��н����ã���ȡ������ֽ���������ݣ������1������С�ˣ�0���ˡ�
}
int main()
{
	int ret = 0;
	ret = check_sys();
	if (1 == ret)
	{
		printf("С��ģʽ\n");
	}
	else if (0==ret)
	{
		printf("���ģʽ\n");
	}
	system("pause");
	return 0;
}