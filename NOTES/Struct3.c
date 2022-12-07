//简单的学生信息管理系统
//注意在选择1和选择3中，不管有没有匹配的学生，都要读入数据
#include<stdio.h>
#include<string.h>
#define NUM 3
typedef struct
{
    char name[20],id[20];
    int score[NUM];
}STUDENT;
void choose1(STUDENT a,STUDENT info[],int *p);
void choose2(STUDENT a[],int i);
void choose3(STUDENT a,STUDENT info[],int i);
void choose4(STUDENT a[],int i);
int main()
{
    int n,i=0,j;//i表示现在存了多少人进去
    char choice;
    STUDENT info[140],temp;//用temp来存储每个函数读入的数据，info存储有效数据
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf(" %c",&choice);
        switch(choice)
        {
        case '1':
            choose1(temp,info,&i);
            break;
        case '2':
            choose2(info,i);
            break;
        case '3':
            choose3(temp,info,i);
            break;
        case '4':
            choose4(info,i);
            break;
        default:
            break;
        }
        getchar();
    }
    return 0;
}
void choose1(STUDENT a,STUDENT info[],int *p)
{
    int flag=0,j;
    scanf("%s",a.id);
    scanf("%s",a.name);
    scanf("%d %d %d",&a.score[0],&a.score[1],&a.score[2]);
    for(j=0;j<*p;j++)
    {
        if(strcmp(a.id,info[j].id)==0)
            flag=1;
    }
    if(flag)
        printf("Students already exist\n");
    else//a里面的数据有效，就把它copy到info里面
    {
        for(j=0;j<3;j++)
            info[*p].score[j]=a.score[j];
        strcpy(info[*p].name,a.name);
        strcpy(info[*p].id,a.id);
        printf("Add success\n");
        *p+=1;
    }
    
}
void choose2(STUDENT a[],int i)
{
    int j,loc,x,flag=0;
    char number[11];
    scanf("%s",number);
    for(j=0;j<i;j++)
    {
        if(strcmp(a[j].id,number)==0)
        {
            loc=j;
            flag=1;
        }       
    }
    if(flag)
    {
        a[loc].id[0]='\0';//删除一个id字符串可以把id[0]改成'\0'
        printf("Delete success\n");
    }
    else
        printf("Students do not exist\n");
}
void choose3(STUDENT a,STUDENT info[],int i)
{
    int j,flag=0,x;
    scanf("%s",a.id);//也需要把数据先全部存到a里面
    scanf("%d %d %d",&a.score[0],&a.score[1],&a.score[2]);
    for(j=0;j<i;j++)
    {
        if(strcmp(info[j].id,a.id)==0)
        {
            flag=1;
            x=j;
        }
    }
    if(flag)//如果有效，再copy
    {
        for(j=0;j<3;j++)
            info[x].score[j]=a.score[j];
        printf("Update success\n");
    }
    else
        printf("Students do not exist\n");
}
void choose4(STUDENT a[],int i)
{
    int j,flag=0,sum=0,loc;
    double everage;
    char number[11];
    scanf("%s",number);
    for(j=0;j<i;j++)
    {
        if(strcmp(a[j].id,number)==0)
        {
            for(int x=0;x<NUM;x++)
                sum+=a[j].score[x];
            everage=(double)sum/3;
            flag=1;
            loc=j;
        }
    }
    if(flag)
    {
        printf("Student ID:%s\n",a[loc].id);
        printf("Name:%s\n",a[loc].name);
        printf("Average Score:%.1lf\n",everage);
    }
    else
        printf("Students do not exist\n");
}