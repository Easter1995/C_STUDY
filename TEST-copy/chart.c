//pta第一次机考
//打印图形
//打印图形一定要一行一行打QAQ
#include<stdio.h>
int main()
{
    int t,l,c,n;
    int i,j,k,m,q,x,y;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&l,&c,&n);
        for(k=0;k<c;k++)
        {
            for(x=0;x<1+n;x++)
                printf("*");
        }
        printf("*\n");
        for(j=0;j<l;j++)
        {
            for(x=0;x<3;x++)
            {
                for(k=0;k<c;k++)
                {
                    printf("*");
                    for(q=0;q<n;q++)
                    {
                        printf(".");
                    }
                }
                printf("*");
                printf("\n");
            }
            for(k=0;k<c;k++)
            {
                for(x=0;x<1+n;x++)
                    printf("*");  
            }
            printf("*\n");
        }
    }
    return 0;
}
