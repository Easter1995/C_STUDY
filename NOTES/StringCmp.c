#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 101
char **create1(int n);
char *create2(int n);
void sort(char **strArray, int size);
int main()
{
    char **strArray;
    int n, i;
    scanf("%d", &n);
    strArray = create1(n);
    if (strArray != NULL)
    {
        for (i = 0; i < n; i++)
        {
            strArray[i] = create2(MAX);
            if (strArray[i] == NULL)
                return -1;
        }
    }
    else
        return -1; //这里两个 return -1 都是无法获得内存时直接结束程序
    getchar(); //吃掉前边输入的回车符
    for (i = 0; i < n; i++)
        gets(strArray[i]); //读入字符串
    sort(strArray, n); //排序
    for (i = 0; i < n; i++)
        printf("%s\n", strArray[i]); //输出
    for (i = 0; i < n; i++)
        free(strArray[i]);
    free(strArray);
    return 0;
}
char **create1(int n)
{
    char **a=malloc(sizeof(char*)*n);
    return a;
}
char *create2(int n)
{
    char *a=malloc(sizeof(char)*n);
    return a;
}
void sort(char **strArray, int size)
{
    int i,j,min;
    char *temp;
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
            if(strcmp(strArray[min],strArray[j])>0)
                min=j;
        temp=strArray[i];
        strArray[i]=strArray[min];
        strArray[min]=temp;
    }
}

