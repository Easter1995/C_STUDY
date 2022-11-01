//C语言字符串
#include<stdio.h>
#include<string.h>
int main()
{
    //普通的字符串,用数组储存
    //只能储存一串字符
    char *str1="hello world!";
    printf("1--->%s\n",str1);

    char word1[8];
    char word2[100];
    //用gets输入，不读取'\n'，而且中间可以打空格
    gets(word1);
    //scanf("%7s",&word1);//告诉scanf最多读入7个字符
    printf("2--->%s\n",word1);
    // while(getchar()!='\n');
    
    gets(word2);
    //但实际上输入字符长度大于8还是可以被打印出来...
    printf("3--->");
    //用puts输出，自动换行
    puts(word2);
    printf("-----------------------\n");

    //二维字符串数组的储存方式
    int i;
    char str2[][10]={"hello","world","hi","yzw"};
    for(i=0;i<4;i++)
    {
        printf("str2[%d]==%s\n",i,str2[i]);
    }
    printf("-----------------------\n");
    //一维指针数组的储存方式(占用内存比较少)
    int j;
    char *str3[]={"hello","world","hi","yzw"};
    for(j=0;j<4;j++)
    {
        printf("str3[%d]==%s\n",j,str2[j]);
    }
    return 0;
}