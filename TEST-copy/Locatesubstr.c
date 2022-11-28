//设计函数 char *locatesubstr(char *str1,char *str2)，
//查找str2指向的字符串在str1指向的字符串中首次出现的位置，
//返回指向该位置的指针。
//若str2指向的字符串不包含在str1指向的字符串中，则返回空指针NULL。
#include <stdio.h>
char *locatesubstr(char *str1, char *str2);
int main()
{
	char str1[505], str2[505];
	char *p;
	gets(str1);
	gets(str2);
	p = locatesubstr(str1, str2);
	if (p == NULL)
		printf("NULL!\n");
	else
		puts(p);
	return 0;
}
char *locatesubstr(char *str1, char *str2)
{
	int i;
	if (*str2 != '\0')//对于字符串数组的循环，不用for，直接用while就可以循环到结束的第一个位置
	{
		while (*str1 != '\0')
		{
			for (i = 0; *(str1 + i) == *(str2 + i); i++)
			{
				if (*(str2 + i + 1) == '\0')
					return (char *)str1;
			}
			str1++;
		}
		return NULL;
	}
	// else
	// 	return (char *)str1;
}