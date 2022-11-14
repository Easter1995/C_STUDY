//插入排序
#include<stdio.h>
#define len 5
void insertSort(int a[])
{
	int i,j,temp;
	for(i=1;i<len;i++)
	{
		temp = a[i];
		//当前数小于前一位数时
		if(a[i] < a[i-1])
		{
			//将子序列重新排列为有序序列
			for(j=i-1;temp<a[j];j--)
			{
				a[j+1] = a[j];
			}
			a[j+1] = temp;
		}
	}
}
int main()
{
	int a[] = {45,32,56,71,12};
	int i;
	printf("未排序前：\n"); 
	for(i=0;i<len;i++)
	{
		printf("%d  ", a[i]);
	}
	printf("\n经过直接插入排序后：\n"); 
	insertSort(a);
	for(i=0;i<len;i++)
	{
		printf("%d  ", a[i]);
	}
}
