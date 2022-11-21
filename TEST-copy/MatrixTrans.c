//矩阵变换
//按平均数大小进行行变换
#include<stdio.h>
int main()
{
    int n,num[101][101],sum[101]={0},flag=0,used[101]={0};
    int i,j,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&num[i][j]);
            sum[i]+=num[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        min=1000001;
        for(j=0;j<n;j++)
        {
            if(sum[j]<min&&!used[j])
            {
                min=sum[j];
                flag=j;
            }
        }
        used[flag]=1;
        for(j=0;j<n-1;j++)
            printf("%d ",num[flag][j]);
        printf("%d\n",num[flag][n-1]);
    }
    return 0;
}