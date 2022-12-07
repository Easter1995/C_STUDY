//结构体练习
#include <stdio.h>
typedef struct
{
    char id[16]; //学生账号
    int total;   //综合成绩
    int ce;      //机试成绩
    int ws;      //加权成绩
} STUDENT;//给结构体取小名
void Sort(STUDENT a[], int size);
void Swap(STUDENT *s1, STUDENT *s2);
int Comp(STUDENT *s1, STUDENT *s2);
int main()
{
    STUDENT stu[100];//定义了结构数组
    int i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s%d%d", stu[i].id, &stu[i].ce, &stu[i].ws);
        stu[i].total = stu[i].ce + stu[i].ws;
    }
    Sort(stu, n);
    for (i = 0; i < n; i++)
        printf("%s %d %d %d\n", stu[i].id, stu[i].total, stu[i].ce, stu[i].ws);
    return 0;
}
void Sort(STUDENT a[], int size)
{
    int i,j;
    for(i=1;i<size;i++)
    {
        for(j=0;j<size-i;j++)
        {
            if(Comp(a+j+1,a+j))//必须要用偏移量访问
                Swap(a+j+1,a+j);
        }
    }
}
void Swap(STUDENT *s1, STUDENT *s2)
{
    STUDENT temp;//temp也要STUDENT类型
    temp=*s1;//交换值，不能交换指针
    *s1=*s2;
    *s2=temp;
}
int Comp(STUDENT *s1, STUDENT *s2)//用指针访问结构体内成员
{
    if(s1->total>s2->total)
        return 1;
    if(s1->total==s2->total&&s1->ce>s2->ce)
        return 1;
    return 0;
}



