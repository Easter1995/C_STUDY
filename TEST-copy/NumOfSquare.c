#include<stdio.h>
int main()
{
    int i,j,k,zheng=0,chang=0,a,b,result1=0,result2=0;
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++)
    {
        chang=0;
        zheng=0;
        for(j=1;j<=a;j++)
        {
            if(i!=j)
                chang++;
            if(i==j)
                zheng++;
            result2+=(b-i+1)*chang;
            result1+=(b-i+1)*zheng;
        }
    }
    printf("%d %d",result1,result2);
    return 0;
}