//已知正整数a、b、n满足a<b。你的任务是求出区间[a,b]内
//所有满足以下条件的整数:1.该整数由1到n这n个数字组成。2.整数中各个位上的数字不相同。
// #include<stdio.h>
// int bits(int n);
// int main()
// {
//     long long a,b,temp,flag,bit;
//     int n;
//     scanf("%lld %lld %d",&a,&b,&n);
//     for(int i=a;i<=b;i++)
//     {
//         temp=i;
//         flag=1;
//         int num[10]={0};
//         bit=bits(i);
//         for(int j=1;j<=bit;j++)
//         {
//             num[temp%10]++;
//             if(temp%10>n||temp%10<1)
//                 flag=0;
//             temp/=10;
//         }
//         for(int j=1;j<=n;j++)
//         {
//             if(num[j]>1)
//                 flag=0;
//         }
//         if(flag)
//             printf("%d\n",i);
//     }
//     return 0;
// }
// int bits(int n)
// {
//     int cnt=1;
//     while(n/10!=0)
//     {
//         cnt++;
//         n/=10;
//     }
//     return cnt;
// }

//用状态压缩实现
#include<stdio.h>
#define true 1
#define false 0
int movbyte(int, long long *);
int main()
{
    long long a,b,temp,k,state;
    int n,flag;
    scanf("%lld %lld %d",&a,&b,&n);
    for(int i=a;i<=b;i++)
    {
        temp=i;
        state=0;//状态压缩记录
        flag=true;//是否可以打印
        while(temp>0)
        {
            k=temp%10;
            temp=temp/10;
            if(k<=n&&k>=1){
                //如果已经重复，可以到下一个了
                if(movbyte(k,&state)){
                    flag=false;
                    break;
                }
            }
            else{
                flag=false;
                break;
            }
        }
        if(flag==true){
            printf("%lld\n",i);
        }
    }
    return 0;
}
int movbyte(int bit, long long * num)
{
    long long ret = 1;
    ret = ret << bit;
    //如果该位已经有标志了
    if((*num & ret)!=0){
        return true;
    }
    //不然我们就标记此位
    *num |= ret;
    return false;
}
