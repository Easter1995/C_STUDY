//选择排序
#include<stdio.h>
int main()
{
    int i,j,n,a[100],min,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        min=0x3f3f3f3f;
        for(j=i;j<n;j++)
        {
            if(a[j]<min)
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
                min=a[j];
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}