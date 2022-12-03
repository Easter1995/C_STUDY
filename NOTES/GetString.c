//分割单词
#include <stdio.h>
int getString(char *source, char *strPtr[]);
int main()
{
    char str[100005];
    char *strPtr[1005] = {0};
    int i, num;
    gets(str);
    num = getString(str, strPtr);
    for (i = 0; i < num; i++)
        puts(strPtr[i]);
    return 0;
}
int getString(char *source, char *strPtr[])
{
    int j=0,i=0;
    while(*source)
    {
        for(i=0;*(source+i)&&*(source+i)!=' ';i++)
        {
            if(*(source+i+1)=='\0')
            {
                strPtr[j]=source;
                j++;
                return j;
            }
            if(*(source+i+1)==' ')
            {
                *(source+i+1)='\0';//把空格标志为单词结束的位置
                strPtr[j]=source;//第j个单词开始的位置就是source开始的位置，空格是单词结束的位置
                j++;
            }
        }
        source=source+i+1;//移动指针
    }
    return j;
}
