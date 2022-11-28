//动态内存分配
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*a;
    scanf("%d",&n);
    a=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n-1;i++)
        printf("%d ",-a[i]*10);
    printf("%d\n",-a[n-1]*10);
    free(a);
    return 0;
}