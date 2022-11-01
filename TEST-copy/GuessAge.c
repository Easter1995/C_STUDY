#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    int age,a1,a2,a3,a4,b1,b2,b3,b4,b5,b6,flag=1;
    int age1,age2,i,j;
    for(age=1;age<=22;age++){
        age1=pow(age,3);
        age2=pow(age,4);
        
        a1=age1%10;
        a2=(age1/10)%10;
        a3=(age1/100)%10;
        a4=age1/1000;

        b1=age2%10;
        b2=(age2/10)%10;
        b3=(age2/100)%10;
        b4=(age2/1000)%10;
        b5=(age2/10000)%10;
        b6=age2/100000;
        
        //利用简单的桶排序，是个数字是否重复
        int num[10]={a1,a2,a3,a4,b1,b2,b3,b4,b5,b6};
        int bucket[10];
        for(i=0;i<10;i++){
            bucket[i]=0;
        }
        for(i=0;i<10;i++){
            bucket[num[i]]=1;
        }
        for(int j=0;j<10;j++){
            flag=flag*bucket[j];
        }
        if(flag!=0){
            printf("age=%d",age);
        }
        flag=1;
    }
    return 0;
}