//输入一个整数，计算这个整数对应的水仙花数
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n,num,sum=0,a,i,j,k;
    printf("Input your number:");
    scanf("%d",&n);
    
    for(num=pow(10,n-1);num<pow(10,n);num++){
        j=num;
        for(i=0;i<n;i++){
            a=j%10;//分离每一位数
            k=pow(a,n);
            sum+=k;
            j/=10;//继续分离每一位数
        }
        if(sum==num){
            printf("%d\n",num);
        }
        sum=0;//把sum重新初始化，下次循环从头开始加
    }
    return 0;
}