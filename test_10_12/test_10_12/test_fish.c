#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int is_leapyear(int year);//�ж��Ƿ�����
int get_maxday(int year, int month);//ÿ���µ��������
int is_equal(struct Date date1, struct Date date2);
int get_diff_day(struct Date date1, struct Date date2);//�����ڲ�
void is_legal(struct Date date1,struct Date date2);
struct Date
{
	int year;
	int month;
	int day;
};



int main()
{
	struct Date date1, date2;
	int num = 0;
	date1.year = 1992;
	date1.month = 1;
	date1.day = 1;
	date2.year = 0;
	date2.month = 0;
	date2.day = 0;
	scanf("%d%d%d", &date2.year, &date2.month,&date2.day);
	is_legal(date1, date2);
	num = get_diff_day(date1, date2);
	printf("���ڲ�Ϊ%d\n", num);
	if (num % 5 == 0 || num % 5 == 4)
		printf("ɹ����\n");
	else
		printf("���棡\n");
	system("pause");
	return 0;
}
int is_leapyear(int year)
{
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
		return 1;
	return 0;
}
int get_maxday(int year, int month)
{
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	case 2:
		return (is_leapyear(year)) ? 29 : 28;
	default:
		return -1;
	}
}
int is_equal(struct Date date1, struct Date date2)
{
	if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year)
		return 1;
	return 0;
}
int get_diff_day(struct Date date1, struct Date date2)
{
	int num = 0;
	while (!(is_equal(date1, date2)))
	{
		if (date1.day != get_maxday(date1.year, date1.month))
		{
			date1.day++;

		}
		else if (date1.month != 12)
		{
			date1.month++;
			date1.day = 1;
		}
		else
		{
			date1.year++;
			date1.day = date1.month = 1;
		}

		num++;
	}

	return num;
}
void is_legal(struct Date date1,struct Date date2)
{
	if (date1.year > date2.year)
	{
		printf("���벻�Ϸ�");
	}
	else if (date1.year == date2.year)
	{
		if (date1.month > date2.month)
		{
			printf("���벻�Ϸ�");
		}
		else if (date1.month == date2.month)
		{
			if (date1.day > date2.day)
				printf("���벻�Ϸ�");
		}
	}
	
}
