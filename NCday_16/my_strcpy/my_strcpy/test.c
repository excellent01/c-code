#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* my_strcpy(char* str1, const char* str2)
{
	assert(str1);
	assert(str2);
	char* tmp = str1;
	while (*str1++ = *str2++)
		;
	return tmp;
}
int main()
{
	char str1[20] = { 0 };
	char str2[] = "hello";
	my_strcpy(str1, str2);
	printf("%s\n", str1);
	system("pause");
	return 0;
}