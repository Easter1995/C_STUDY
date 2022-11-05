//递归求数字位数
#include<stdio.h>
int fun(int);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fun(n));
    return 0;
}
int fun(int x)
{
    if(n/10==0)
        return 1;
    else
        return fun(n/10)+1;
}