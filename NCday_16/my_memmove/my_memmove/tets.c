#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
void* my_memmove(void* dest, const void* src, size_t count)
{
	char* d = (char*)dest;      
	char* s = (char*)src;
	assert(dest);           //�ж�ָ���Ƿ�Ϊ��
	assert(src);
	if (d > s&&d < s + count)//�ڴ��ص����Ӻ���ǰ����
	{
		d = d + count - 1;
		s = s + count - 1;
		while (count--)
		{
			*d-- = *s--;
		}
	}
	else            //�ڴ治�ص�����ǰ���󿽱�
	{
		while (count--)
		{
			*d++ = *s++;
		}
	}
	return dest;
}
int main()
{
	char p[10] = "hehe";
	my_memmove(p + 2, p, 4);
	printf("%s\n", p+2);
	system("pause");
	return 0;
}