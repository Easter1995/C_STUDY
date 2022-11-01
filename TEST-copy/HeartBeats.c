//考虑闰年
//计算人出生到现在的心跳次数
#include<stdio.h>
#include<math.h>
int main(){
    int by,ty,counter;
    long beats;
    printf("Input your birth year:");
    scanf("%d",&by);
    printf("Input this year:");
    scanf("%d",&ty);
    for(int i=by;i<=ty;i++){
        if(i%4==0){
            counter++;
        }
    }
    if(ty%4==0){
        beats=(ty-by)*365*24*60*75+(counter-1)*24*60*75;
    }
    else{
        beats=(ty-by)*365*24*60*75+counter*24*60*75;
    }
    printf("The heart beats in your life: %lu\n",beats);
    return 0;
}