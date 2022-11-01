//欲构造n以内的素数表（不含n）
#include<stdio.h>
int main(){
    int n,cnt=0;
    scanf("%d",&n);
    int prime[n];//开辟数组，令素数为1，非素数为0
    int i,x;
    for(i=0;i<n;i++){
        prime[i]=1;
    }
    //让x从2开始数
    //如果x是素数，就把它的倍数全部标记成0，表示它的倍数不是素数
    for(x=2;x<n;x++){
        if(prime[x]){
            for(i=2;i*x<n;i++){
                prime[i*x]=0;
            }
        }
    }
    for(i=2;i<n;i++){
        if(prime[i]){
            cnt++;
            printf("cnt=%d\t",cnt);
            printf("%d\n",i);
        }
    }
    printf("\n");
    return 0;
}