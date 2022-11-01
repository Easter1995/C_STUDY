#include<stdio.h>
#include<math.h>
int main()
{
    int n=1,sum=1,cnt=0,num=0;
    while(n!=0)
    {   
        while(n%2==0)
        {
            cnt++;
            n/=2;
        }
        while(n%5==0)
        {
            num++;
            n/=5;
        }
        scanf("%d",&n);
    }
    if(num<cnt)
        printf("%d",num);
    else
        printf("%d",cnt);
    return 0;
}