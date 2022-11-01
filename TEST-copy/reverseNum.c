#include<stdio.h>
#include<stdlib.h>
int reverse(int,int);
int bits(int);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",reverse(n,bits(n)));
    return 0;
}
int bits(int n)
{
    int cnt=0;
    while(n)
    {
        n/=10;
        cnt++;
    }
    return cnt;
}
int reverse(int n,int bits)
{
    int highBit;
    if(n/10==0)
        return 1;
    else
    {
        highBit=n/(int)pow(10,bits(n)-1);
        bits=n-(int)pow(10,bits(n)-1)*highBit;
        return highBit+reverse(bits)*10;
    }
}