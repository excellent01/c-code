#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int is_leap_year(int year)
{
	return ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0));
}
int main()
{
	int year = 0;
	int ret = 0;
	printf("������Ҫ�жϵ���ݣ�");
	scanf("%d", &year);
	ret = is_leap_year(year);
	if (ret )
	{
		printf("%d������\n",year);
	}
	else
		printf("%d��������\n",year);
	system("pause");
	return 0;
}