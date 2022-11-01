#include<stdio.h>
long long fib(int x)
{
    int a=1,b=1,c;
    for(int i=3;i<=x;i++)
    {
        //斐波那契数列余数也满足递推关系
        c=a+b;
        a=b%101;//先求余，防止爆栈
        b=c%101;
    }
    return b;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%lld\n",fib(n));
    return 0;
}