//动态二维数组
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int i,j,n,m,**a;
    scanf("%d%d",&n,&m);
    a=(int**)malloc(sizeof(int*)*n);//建立长度为n的动态指针数组
    for(i=0;i<n;i++)
        a[i]=(int*)malloc(sizeof(int)*m);//建立长度为m的动态一维整型数组
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m-1;j++)
            printf("%d ",-a[i][j]*10);
        printf("%d\n",-a[i][m-1]*10);
    }
    for(i=0;i<n;i++)
        free(a[i]);
    free(a);
    return 0;
}
