//重组的规则为：我们给定一个位置，该位置前的数字不变，指定位置的数字挪到个位，该位置后边的数字依次向前挪一位。
//例如：待重组整数为1234567890，指定位置为5，则重组后的数字为1234678905。
#include <stdio.h>

long long recombination(long long num,int position) ; 

int main()
{
    long long num ;
    int position ;
    scanf( "%lld%d",&num,&position );
    printf( "%lld\n",recombination(num,position) ) ;
    return 0;
}
long long bits(long long n)
{
    int cnt=0;
    while(n/10!=0)
    {
        cnt++;
        n/=10;
    }
    return cnt;
}
long long recombination(long long num,int position)
{
    long long temp1=num,temp2=num,n,i,x;
    long long bit=bits(num);
    n=1;
    for(i=0;i<=bit-position+1;i++)
    {
        temp1-=(temp2%10)*n;
        temp2/=10;
        n*=10;
        if(i==bit-position)
            x=temp2%10;
    }
     if(n<=10)
        return num;
    temp1+=num%(n/10)*10+x;
    return temp1;
}
