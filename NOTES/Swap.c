#include<stdio.h>
void swap(int *p1,int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main()
{
    int a=1,b=2;
    swap(&a,&b);
    printf("%d %d\n",a,b);
    int *q1=&a,*q2=&b;
    swap(q1,q2);
    printf("%d %d\n%d %d",*q1,*q2,a,b);//a,b也被交换了，交换了内存
    return 0;
}