//给定不超过6的整数a，考虑从a开始的连续4个数字，输出所有由他们组成的无重复数字的3位数
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int a,i,j,k,counter=0;
    scanf("%d",&a);
    for(i=a;i<=a+3;i++){
        for(j=a;j<=a+3;j++){
            for(k=a;k<=a+3;k++){
                if(i!=j&&i!=k&&j!=k){
                    printf("%d%d%d",i,j,k);
                    counter++;
                    if(counter==6){
                        printf("\n");
                        counter=0;
                    }
                    else{
                        printf(" ");
                    }
                }
            }
        }
    }   
}