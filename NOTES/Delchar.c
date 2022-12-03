//实现从字符串str中删除指定的字符ch
//同一字母的大、小写按不同字符处理。
#include <stdio.h>
void delcharfun(char *str, char ch);
int main()
{
    char ch, str[110];
    scanf("%s", str);    //读入字符串
    getchar();           //读取回车符号
    scanf("%c", &ch);    //读入字符
    delcharfun(str, ch); //删除
    printf("%s\n", str); //输出删除后结果
    return 0;
}
void delcharfun(char *str, char ch)
{
    char *p=str,*q;
    while(*p!='\0')
    {
        if(*p==ch)
        {
            q=p;
            while(*q!='\0')
            {
                *q=*(q+1);//将后面的字符全部往前移一位
                q++;
            }
        }
        else
            p++;
    }
}
