#include<stdio.h>
//插入排序（升序） 
//参数说明：数组，数组中已有元素个数 
void InsertSort(int a[],int n);
int main()
{
    int n,i,num[1000] ;
    scanf( "%d" , &n ); 
    for( i = 0 ; i < n ; i++ ) 
        scanf( "%d", &num[i] ) ;
    InsertSort( num , n ) ; 
    return 0 ;
}
void InsertSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {                         //用i来调整end
        int end = i;          //已排序序列[0, end]
        int tmp = a[end + 1]; //向已排序序列中插入数据a[end + 1]，先将未排序数据a[end + 1]保存到tmp
        while (end >= 0)
        {
            //在已排序序列中从后向前扫描，找到合适的插入位置时，退出循环
            if (tmp < a[end])
            {
                //如果tmp<a[end]则a[end]向后移动（升序）
                a[end + 1] = a[end];
                end--;
            }
            else
                break; //因为[0,end]是有序序列，如果tmp>=a[end]，则将tmp插入到end+1位置即可
        }
        a[end + 1] = tmp; //退出循环后，将tmp插入找到的合适的位置
        for (int j = 0; j < n - 1; j++)
            printf("%d ", a[j]);
        printf("%d\n", a[n - 1]);
    }
}
