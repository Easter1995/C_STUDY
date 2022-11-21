#include<stdio.h>
//函数功能：二分查找
//函数参数：分别为被查找的数组，数组长度，所查找的元素
//函数返回值：如果找到，则返回该元素在数组中的下标，否则返回-1 
int BinarySearch(int a[],int n,int key) ;
int main()
{
    int num[2000];
    int n, m, i;
    int key;

    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);

    for (i = 0; i < m; i++)
    {
        scanf("%d", &key);
        printf("%d", BinarySearch(num, n, key));
        if (i != m - 1)
            printf(" ");
        else
            printf("\n");
    }
    return 0;
}
int BinarySearch(int a[],int n,int key)
{
    int left=0,right=n-1,mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(a[mid]==key)
            return mid;
        else if(a[mid]>key)
            right=mid-1;//如果不减一，则找到数过后可能right一直等于left且中值不是要找的数
        else
            left=mid+1;//同理
    }
    return -1;
}