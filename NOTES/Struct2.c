//按总分大小和名字顺序排序
#include<stdio.h>
#include<string.h>
#define SIZE 5
typedef struct
{
    char name[21],number[21];
    int total;
}STUDENT;
void Sort(STUDENT a[],int size);//结构体数组
void Swap(STUDENT *s1, STUDENT *s2);//结构体指针
void Print(STUDENT a[]);
int main()
{
    STUDENT info[101];//用来存储每一个学生的信息
    int i,j,n;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        scanf("%s",info[i].name);
        scanf("%d",&info[i].total);
        getchar();
    }
    Sort(info,n);
    for(i=0;i<n;i++)
    {
        Print(info+i);
        printf("\n");
    }
    return 0;
}
void Sort(STUDENT a[],int size)
{
    int i,j;
    for(i=1;i<size;i++)
    {
        for(j=0;j<size-i;j++)
        {
            if(a[j].total<a[j+1].total)
                Swap(a+j,a+j+1);
            else if(a[j].total==a[j+1].total&&strcmp(a[j].name,a[j+1].name)>0)
                Swap(a+j,a+j+1);
        }
    }
}
void Swap(STUDENT *s1, STUDENT *s2)
{
    STUDENT temp;//注意temp也要是结构类型
    temp=*s1;
    *s1=*s2;
    *s2=temp;
}
void Print(STUDENT a[])
{
    int i;
    printf("Name:%s\n",a->name);
    printf("total:%d\n",a->total);
}