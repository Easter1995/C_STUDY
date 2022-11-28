//把矩阵中一个数周围的数全部加起来
//考虑矩阵边缘和角上的数：把第0行第0列的数全部令成0，就不会影响加法结果了
#include<stdio.h>
int main()
{
    int m,n,x,y,num[15][15]={0};
    scanf("%d %d",&m,&n);
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
            scanf("%d",&num[i][j]);
    }
    int sum=0;
    scanf("%d %d",&x,&y);
    for(int i=x-1;i<=x+1;i++)
    {
        for(int j=y-1;j<=y+1;j++)
            sum+=num[i][j];
    }
    sum-=num[x][y];
    printf("%d\n",sum);
    return 0;
}