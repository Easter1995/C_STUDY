//冒泡排序
#include<stdio.h>
void bubble(int*,int);
int main()
{
    int a[100];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    bubble(a,n);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
void bubble(int a[],int n)
{
    int i,j,temp;
    //i表示第几趟
    for(i=1;i<n;i++)
    {
        //j表示前j项排序
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}