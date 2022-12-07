// 在读入每个字符串时，用一个长度为1000的字符数组作为缓冲数组，
// 将字符串读入并求出长度后，再动态分配空间，
// 将缓冲数组中的字符串复制到新分配的动态空间中，
// 并将动态空间的首地址保存到指针数组中。
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,i,j,len,min;
    char **str,temp[1000],*temp2;
    scanf("%d",&n);
    getchar();//吞掉回车
    str=malloc(sizeof(char*)*n);
    for(i=0;i<n;i++)
    {
        gets(temp);
        len=strlen(temp)+1;//获取字符串长度
        str[i]=malloc(sizeof(char)*len);
        strcpy(str[i],temp);//把temp数组赋值给str[i]
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
            if(strcmp(str[min],str[j])>0)
                min=j;
        temp2=str[i];
        str[i]=str[min];
        str[min]=temp2;
    }
    for(i=0;i<n;i++)
    {
        puts(str[i]);
        free(str[i]);
    }
    free(str);
    return 0;
}