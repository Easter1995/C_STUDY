#include<stdio.h>
int bits(int n);
int main()
{
    long long a,b,temp,flag,bit;
    int n;
    scanf("%lld %lld %d",&a,&b,&n);
    for(int i=a;i<=b;i++)
    {
        temp=i;
        flag=1;
        int num[10]={0};
        bit=bits(i);
        for(int j=1;j<=bit;j++)
        {
            num[temp%10]++;
            if(temp%10>n||temp%10<1)
                flag=0;
            temp/=10;
        }
        for(int j=1;j<=n;j++)
        {
            if(num[j]>1)
                flag=0;
        }
        if(flag)
            printf("%d\n",i);
    }
    return 0;
}
int bits(int n)
{
    int cnt=1;
    while(n/10!=0)
    {
        cnt++;
        n/=10;
    }
    return cnt;
}
