#include<stdio.h>
//选择排序（升序） 
//参数说明：数组，数组中已有元素个数 
void selectSort(int data[],int elementCount) ;
//函数功能：找数组中的最小值元素，并返回其下标 
//参数说明：数组名，查找起始位置下标，查找终止位置下标
int findMin(int data[], int startLoc, int endLoc) ; 
//输出数组中所有元素 
//参数说明：数组，数组中已有元素个数 
void outputData(int data[],int elementCount) ;
int main()
{
    int n, i, num[1010];

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    selectSort(num, n);
    return 0;
}
void outputData(int data[],int elementCount)
{
    int i;
    for(i=0;i<elementCount-1;i++)
        printf("%d ",data[i]);
    printf("%d\n",data[elementCount-1]);
}
int findMin(int data[], int startLoc, int endLoc)
{
    int temp,i,minIndex=startLoc;
    for(i=startLoc+1;i<=endLoc;i++)
    {
        if(data[i]<data[minIndex])
            minIndex=i;
    }
    return minIndex;
}
//把i到elementCount中最小的元素放在i的位置
void selectSort(int data[],int elementCount)
{
    int i,j,temp,min;
    for(i=0;i<elementCount-1;i++)
    {
        min=findMin(data,i,elementCount-1);
        if(min!=i)
        {
            temp=data[i];
            data[i]=data[min];
            data[min]=temp;
        }
        outputData(data,elementCount);
    }
}
