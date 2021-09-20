#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>
int fun(char  *s)
{
	int  n = 0, flag = 0;
	while (*s != '\0')
	{
		if (*s != ' ' && flag == 0) {
			n++;  flag = 1;
		}
		if (*s == ' ')  flag = 0;
		s++;
	}
	return  n;
}
main()
{
	char  str[81];    int  n;
	printf("请输入单词:\n");  gets(str);
	n = fun(str);
	printf("有%d单词\n", n);
	getchar();
}
