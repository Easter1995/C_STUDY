#include<stdio.h>
#include<math.h>
int bits(int num)
{   
    int bit=0;
    for(;;)
    {
        bit++;
        num/=10;
        if(num==0)
            break;
    }
    return bit;
}
int main()
{
    int num,n,bit;
    scanf("%d",&num);
    bit=bits(num);
    while(bit>0)
    {     
        n=num/(int)pow(10,(bit-1));
        if(bit==1)
            printf("%d\n",n);
        else
            printf("%d ",n);
        num=num-n*(int)pow(10,bit-1);
        bit--;
    }
    return 0;
}