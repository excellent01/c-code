//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
int DigitSum(int n)
{
	static int sum = 0;//������ int sum=0��ÿ�εݹ�sum��ֵ���ᱻ���¸�Ϊ0���������
	if (n > 9)
		DigitSum(n/10);
	sum += (n % 10);
	return sum;

}
int main()
{
	int num = 0;
	int ret = 0;
	scanf("%d", &num);
	ret = DigitSum(num);
	printf("%d\n", ret);
	system("pause");
	return 0;
}